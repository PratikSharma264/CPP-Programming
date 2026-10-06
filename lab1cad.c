#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

// Function to draw AND gate
void drawANDGate(int x, int y) {
    line(x, y, x, y + 50);
    line(x, y, x + 30, y);
    line(x, y + 50, x + 30, y + 50);
    arc(x + 30, y + 25, 270, 90, 25);
    line(x - 30, y + 10, x, y + 10);
    line(x - 30, y + 40, x, y + 40);
    line(x + 55, y + 25, x + 80, y + 25);
    outtextxy(x + 20, y + 20, "AND");
}

// Function to draw OR gate
void drawORGate(int x, int y) {
    arc(x + 20, y + 15, 270, 90, 15);
    arc(x + 20, y + 35, 270, 90, 15);
    arc(x + 20, y + 25, 240, 300, 35);
    line(x, y, x, y + 50);
    line(x, y, x + 20, y);
    line(x, y + 50, x + 20, y + 50);
    line(x - 30, y + 10, x, y + 10);
    line(x - 30, y + 40, x, y + 40);
    line(x + 55, y + 25, x + 80, y + 25);
    outtextxy(x + 20, y + 20, "OR");
}

// Function to draw XOR gate
void drawXORGate(int x, int y) {
    arc(x + 20, y + 15, 270, 90, 15);
    arc(x + 20, y + 35, 270, 90, 15);
    arc(x + 20, y + 25, 240, 300, 35);
    line(x, y, x, y + 50);
    line(x, y, x + 20, y);
    line(x, y + 50, x + 20, y + 50);
    arc(x + 10, y + 15, 270, 90, 5);
    arc(x + 10, y + 35, 270, 90, 5);
    line(x - 30, y + 10, x, y + 10);
    line(x - 30, y + 40, x, y + 40);
    line(x + 55, y + 25, x + 80, y + 25);
    outtextxy(x + 20, y + 20, "XOR");
}

// Function to draw NOT gate
void drawNOTGate(int x, int y) {
    line(x, y, x, y + 30);
    line(x, y, x + 30, y + 15);
    line(x, y + 30, x + 30, y + 15);
    circle(x + 40, y + 15, 5);
    line(x - 30, y + 15, x, y + 15);
    line(x + 45, y + 15, x + 80, y + 15);
    outtextxy(x + 10, y + 5, "NOT");
}

// Function to display formatted truth tables
void displayTruthTable() {
    // Title
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(200, 280, "TRUTH TABLES");
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);

    // AND Gate Table
    outtextxy(50, 320, "AND GATE");
    outtextxy(50, 340, "A  B  |  A AND B");
    outtextxy(50, 360, "-------------");
    outtextxy(50, 380, "0  0  |     0");
    outtextxy(50, 400, "0  1  |     0");
    outtextxy(50, 420, "1  0  |     0");
    outtextxy(50, 440, "1  1  |     1");

    // OR Gate Table
    outtextxy(250, 320, "OR GATE");
    outtextxy(250, 340, "A  B  |  A OR B");
    outtextxy(250, 360, "-------------");
    outtextxy(250, 380, "0  0  |     0");
    outtextxy(250, 400, "0  1  |     1");
    outtextxy(250, 420, "1  0  |     1");
    outtextxy(250, 440, "1  1  |     1");

    // XOR Gate Table
    outtextxy(450, 320, "XOR GATE");
    outtextxy(450, 340, "A  B  |  A XOR B");
    outtextxy(450, 360, "-------------");
    outtextxy(450, 380, "0  0  |     0");
    outtextxy(450, 400, "0  1  |     1");
    outtextxy(450, 420, "1  0  |     1");
    outtextxy(450, 440, "1  1  |     0");

    // NOT Gate Table
    outtextxy(650, 320, "NOT GATE");
    outtextxy(650, 340, "A  |  NOT A");
    outtextxy(650, 360, "--------");
    outtextxy(650, 380, "0  |     1");
    outtextxy(650, 400, "1  |     0");
}
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // Ensure this path exists!

    if (graphresult() != grOk) {
        printf("Graphics error");
        return 1;
    }

    setbkcolor(15);  // Use color code for WHITE
    cleardevice();
    setcolor(0);     // Use color code for BLACK

    drawANDGateImproved(100, 100);
    drawORGateImproved(300, 100);
    drawXORGateImproved(100, 200);
    drawNOTGateImproved(300, 200);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    outtextxy(250, 30, "LOGIC GATES SIMULATION");
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);

    displayTruthTable();

    getch();
    closegraph();
    return 0;
}