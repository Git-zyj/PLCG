/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((~((134217600 ? -1 : var_6))))) ? (max(248535877, ((var_15 ? 1129283934 : 31373)))) : ((~((var_12 ? 65521 : 96))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 ^= (min((min((arr_1 [4]), 2415632475)), (((27 < (arr_1 [18]))))));
        arr_2 [i_0] [i_0] = (((((((min(5963162987719868234, 1879334822))) ? 255 : 248))) ? ((435877299 ? (arr_1 [i_0]) : 134217600)) : ((min(((~(arr_0 [i_0]))), (((arr_0 [i_0]) / 715847787)))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_7 [i_1] [i_2] = ((-64 - (-2147483647 - 1)));
            arr_8 [i_1] [i_1] = (arr_4 [i_1]);
        }
        var_19 |= 248535877;
    }

    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_13 [i_3] = (~55);
        arr_14 [i_3] [i_3] = (((((((4194303 - (arr_12 [8] [9])))) ? 7 : 112)) <= (arr_12 [i_3] [i_3])));
        arr_15 [i_3] = (((!1879334820) ? ((~((-1202658966 ? 40993 : 4531707952410111209)))) : (((7 - (((min(960, -29816)))))))));
        var_20 *= (((((((arr_3 [i_3 + 1] [2]) + 2147483647)) >> (2415632475 - 2415632465)))) ? (min((arr_4 [i_3 + 1]), 0)) : -1098418540637565175);
        arr_16 [i_3] = ((((var_16 / 7760378972243972170) ? (!11627261779148472297) : (arr_3 [i_3 - 1] [i_3]))) / ((((var_2 ? 244990944 : var_15)) >> 1)));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    var_21 = (31345 > 1410630466119397315);

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        var_22 = (!var_11);
                        var_23 = (~1);
                        arr_28 [i_7] [i_7] [10] [12] [1] = (((((4242136052 ? (arr_5 [i_4] [i_7]) : -1627549204))) * var_14));
                        var_24 = (var_2 == 0);
                        var_25 += (((34208 == var_4) << ((((-2147483647 - 1) <= 1)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
