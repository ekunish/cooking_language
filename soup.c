#include <Cooking.h>

dish soup(){

    gram sea_bream = 300;
    gram salt_0 = 20;
    gram clam = 200;
    gram salt_0 = 20;
    gram water_0 = 400;
    gram cherry_tomato = 160;
    gram parsley = 5;
    gram garlic = 10;
    gram olive_oil = 15;
    gram white_wine = 30;
    gram water_1 = 100;
    gram pepper = 0.2;

    soak(clam, [water_0, salt_0]);

    season(sea_bream, salt_1);

    cut(cherry_tomato);
    cut(garlic);

    cookware pot;
    pot.heat.start("middle");

    pot.insert(olive_oil);
    pot.insert(garlic);
    while(garlic.status != "brown"){}


    pot.insert(sea_bream);
    while(sea_bream.status != "brown"){}

    pot.insert(clam);
    pot.insert(cherry_tomato);
    pot.insert(white_wine);
    pot.insert(water_1);

    sleep(5);
    pot.heat.stop();

    cut(parsley);
    pot.insert(parsley);

    dish plate;
    plate = pot.output();

    plate.insert(pepper);

    return plate;
}
