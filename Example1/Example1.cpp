#include <bangtal.h>

SceneID scene, scene0, scene1;
ObjectID crane, sho, fly, spi, neck, coat, can, tul, craneo, shoo, flyo, spio, necko, coato, cano, tulo, off, start;

int count = 0;

void go() {
	enterScene(scene0);
}

void complete(int count) {
	if (count == 8) {
		enterScene(scene1);
		count = 0;
	}
}


void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == start)
		enterScene(scene0);

	if (object == crane) {
		showObject(craneo);
		count++;
		complete(count);
	}
	if (object == sho) {
		showObject(shoo);
		count++;
		complete(count);
	}
	if (object == fly) {
		showObject(flyo);
		count++;
		complete(count);
	}
	if (object == spi) {
		showObject(spio);
		count++;
		complete(count);
	}
	if (object == neck) {
		showObject(necko);
		count++;
		complete(count);
	}
	if (object == coat) {
		showObject(coato);
		count++;
		complete(count);
	}
	if (object == can) {
		showObject(cano);
		count++;
		complete(count);
	}
	if (object == tul) {
		showObject(tulo);
		count++;
		complete(count);
	}
	if (object == off) {
		endGame();
	}

	


}
int main() {
	setMouseCallback(mouseCallback);

	scene = createScene("scene", "scene.png");

    scene0 = createScene("pic", "pic.png");

	scene1 = createScene("end", "end.png");

	start = createObject("시작.png");
	locateObject(start, scene, 100, 30);
	showObject(start);

	crane = createObject("학.png");
	locateObject(crane, scene0, 374, 77);
	showObject(crane);
	
	craneo = createObject("학ㅇ.png");
	locateObject(craneo, scene0, 374, 77);

	sho = createObject("삽.png");
	locateObject(sho, scene0, 450, 441);
	showObject(sho);

	shoo = createObject("삽ㅇ.png");
	locateObject(shoo, scene0, 450, 441);

	fly = createObject("잠자리.png");
	locateObject(fly, scene0, 532, 45);
	showObject(fly);

	flyo = createObject("잠자리ㅇ.png");
	locateObject(flyo, scene0, 532, 45);

	spi = createObject("거미.png");
	locateObject(spi, scene0, 457, 151);
	showObject(spi);

	spio = createObject("거미ㅇ.png");
	locateObject(spio, scene0, 457, 151);

	neck = createObject("넥타이.png");
	locateObject(neck, scene0, 265, 415);
	showObject(neck);

	necko = createObject("넥타잉.png");
	locateObject(necko, scene0, 265, 415);

	coat = createObject("외투.png");
	locateObject(coat, scene0, 595, 254);
	showObject(coat);

	coato = createObject("외투ㅇ.png");
	locateObject(coato, scene0, 595, 254);

	can = createObject("사탕.png");
	locateObject(can, scene0, 199, 176);
	showObject(can);

	cano = createObject("사탕ㅇ.png");
	locateObject(cano, scene0, 199, 176);

	tul = createObject("튤립.png");
	locateObject(tul, scene0, 291.2, 15.9);
	showObject(tul);

	tulo = createObject("튤립ㅇ.png");
	locateObject(tulo, scene0, 291.2, 15.9);

	off = createObject("off.png");
	locateObject(off, scene1, 550, 10);
	showObject(off);



	startGame(scene);
}

