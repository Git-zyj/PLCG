/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (~var_4);
        arr_3 [i_0] = var_9;
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_1] [i_1] [i_1] = (min(237, (-941196448 < 220)));
                var_19 = (min(15306310450233258609, (((~(~var_7))))));
                var_20 = (arr_6 [i_3] [i_3] [i_3]);
                var_21 = (min(var_21, (((941196447 | ((min(15, 63))))))));
                arr_13 [i_1] = (min(3555719663254558009, 1));
            }
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                var_22 -= var_3;
                arr_17 [i_1] = ((!(((13 ? 127 : -1358734198)))));
                arr_18 [i_1] [i_2] [i_1] [i_1] = (((~var_2) ? ((min(-1, -941196461))) : 1));

                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    arr_21 [i_1] = (min((min((arr_5 [i_1 - 2]), var_3)), -var_11));
                    arr_22 [2] [i_1] [i_1] = ((~(~2147483647)));
                    var_23 = var_15;
                    arr_23 [i_1] [i_2] [i_2] = (min((min((min(3137391456438886617, (arr_8 [i_4]))), (((var_15 ? 0 : 126))))), (255 - 4557411399690859497)));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_27 [i_1] [i_4] [i_1] [i_1] = (--142520438);

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_24 = (min(((!((((arr_15 [i_1 + 3] [i_1]) ? var_6 : var_15))))), (!250)));
                        var_25 -= (arr_25 [i_1] [i_7]);
                        var_26 = ((((255 ? (-682379860394691087 / 1) : (~15710297768346127073))) << (((arr_29 [i_1] [i_2] [i_2] [i_6] [i_7] [i_7]) + 1661539445))));
                        arr_30 [0] [i_1] [i_7] = (-((~(((-9 + 2147483647) >> (var_12 + 1935384692))))));
                    }
                }
            }
            var_27 = ((235 - ((min(16384, 15)))));
            arr_31 [i_1] [i_1 + 2] [i_1] = (min((((min(28, -2147483633)))), -0));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_28 = var_9;
            var_29 = (!var_8);
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_30 = (arr_0 [i_1 + 3]);
            arr_39 [i_1] [i_9] [i_1] = min(((-(((!(arr_36 [i_1])))))), (1 == var_9));
            var_31 = 3225528755;
        }
        arr_40 [i_1] [i_1] = ((~((min(127, 1)))));
        arr_41 [i_1] = var_2;
    }
    for (int i_10 = 4; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_32 = (min(var_32, ((((((!(!156)))) & (~var_5))))));
        var_33 -= var_9;
        arr_44 [i_10] [i_10] = var_6;
        var_34 = 14566;
    }
    for (int i_11 = 4; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_35 = ((var_15 << (var_0 - 13463637185588883707)));
        arr_47 [i_11 + 2] [i_11 - 2] = 2147483629;
        arr_48 [i_11] = ((~(!-54989786)));
    }
    var_36 = var_14;
    #pragma endscop
}
