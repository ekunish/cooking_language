#include <Cooking.h>

dish soup(){

    gram sea_bream = 300;
    gram salt_0 = 20;
    gram clam = 200;
    gram salt_1 = 20;
    gram water_0 = 400;
    gram water_1 = 400;
    gram green_onion = 5;
    gram ginger = 10;
    gram miso = 15;
    gram shichimi = 0.2;

    soak(clam, [water_0, salt_0]);

    season(sea_bream, salt_1);

    cut(green_onion);
    cut(ginger);

    cookware pot;
    pot.heat.start("middle");

    pot.insert(water_1);
    pot.insert(sea_bream);
    pot.insert(clam);

    sleep(5);
    pot.heat.stop();

    pot.insert(ginger);
    pot.insert(miso);
    pot.insert(green_onion);

    dish bowl;
    bowl = pot.output();

    bowl.insert(shichimi);

    return bowl;
}
