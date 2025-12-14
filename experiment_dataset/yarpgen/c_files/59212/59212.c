/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = ((~((((min(137438953471, var_4))) ? (arr_1 [i_0] [i_0]) : (max(var_3, 137438953471))))));
        arr_2 [i_0] [i_0] = ((-(13487738121393259428 || -7759945408856525580)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 = (max(var_17, -137438953470));

            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                var_18 = ((-(min((arr_1 [i_1] [i_1]), (arr_3 [i_1])))));
                var_19 = (((((arr_5 [i_3 + 2]) >> (var_2 - 2443631949))) >= (arr_5 [i_3 + 2])));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_11 [i_1] [8] [i_2] [i_2] [i_3] [i_2] &= 173;
                    arr_12 [i_1] [i_1] = 127;
                    var_20 = ((3867826861738387523 / ((((arr_0 [i_2]) ? 1628914350 : 119)))));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_15 [18] [18] [18] &= (min(65448, -1));
                    var_21 -= (2447530336 || 29440);
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 137438953483;
                    var_22 = (!2046);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_23 &= (arr_14 [i_2] [2] [2]);
                    arr_22 [i_1] [i_1] [i_3 - 2] = ((-137438953484 ? 7759945408856525586 : -137438953462));
                }
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_24 = (max(((max((arr_8 [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_8] [i_8])))), ((-137438953471 ? 137438953462 : -1200407088880644800))));
                var_25 *= ((((137438953476 >= var_1) ? 255 : (arr_7 [4]))));
                var_26 = (min(((max(192889969, 41816))), (max((max(var_11, (arr_16 [i_1] [i_1] [i_1] [1] [i_1] [i_1]))), -37032))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_27 = (((arr_7 [i_1]) ? (((arr_9 [i_1] [i_1] [i_1] [i_1]) ? 0 : (var_13 & 63290))) : ((var_12 / (arr_23 [i_9 + 2] [i_9 + 4] [i_9 + 2])))));
                            arr_31 [17] [i_10] [i_1] [i_9] [i_10] = min(var_0, var_13);
                        }
                    }
                }
            }
        }
        arr_32 [i_1] [i_1] = var_6;
    }
    #pragma endscop
}
