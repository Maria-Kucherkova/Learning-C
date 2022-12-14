#include "graphics.h"

int main(void)
{
	drawLine(50, 250, 350, 250);
	drawLine(50, 250, 50, 50);
	drawString("CDs", 60, 280);
	drawString("DVDs", 110, 280);
	drawString("Books", 160, 280);
	drawString("Clothes", 210, 280);
	drawString("Shoes", 260, 280);

	drawLine(45, 200, 55, 200);
	drawLine(45, 150, 55, 150);
	drawLine(45, 100, 55, 100);

	setColour(blue);
	fillRect(50, 190, 50, 60);
	setColour(green);
	fillRect(100, 110, 50, 140);
	setColour(red);
	fillRect(150, 130, 50, 120);
	setColour(yellow);
	fillRect(200, 140, 60, 110);
	setColour(pink);
	fillRect(250, 105, 60, 145);

	return 0;
}