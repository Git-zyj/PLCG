/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = 0;
                    var_14 = ((((min(5685028012393059787, 19282))) ? ((2061584302080 ? (arr_0 [i_2 + 1] [i_1 + 1]) : (arr_0 [i_2 + 2] [i_1 + 2]))) : (arr_0 [i_0] [i_0])));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_1] [i_1] [i_0]);
                        var_15 = (max((min(1605361793, ((19277 ? var_4 : -22)))), ((-(var_9 - var_4)))));
                        arr_11 [i_0] [i_0] [i_3] = (arr_8 [i_1] [i_3]);
                    }
                }
            }
        }
    }
    var_16 = ((max(-18111, 0)));

    /* vectorizable */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        var_17 = (min(var_17, (((var_2 >= ((-13 ? var_6 : (arr_5 [i_4] [i_4] [i_4]))))))));
        arr_14 [i_4] = ((arr_12 [i_4 - 2]) ? -6136769754768394976 : 7);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_18 = var_0;

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                arr_23 [i_5] [i_5] [i_7] = var_11;

                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    arr_27 [i_7] [i_8] [i_5] [i_5] [i_5] [i_7] = (arr_24 [i_5] [i_5] [i_5] [i_5]);
                    arr_28 [i_6] [i_6] [i_6] [i_6] &= (((arr_26 [i_8 - 1] [i_5] [i_6] [i_5]) >= (arr_20 [i_8] [i_8 - 1] [i_8 - 1])));
                    var_19 = (arr_18 [i_7] [i_7]);
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_31 [i_7] [i_7] [i_7] = (((arr_21 [i_6] [i_7] [i_6]) < -26453));
                    arr_32 [i_9] [i_5] [i_7] [i_5] [i_5] = ((-1 ? 13566401523050474973 : 240));
                    var_20 ^= (((11 ? var_4 : 17895106637481150117)));
                    var_21 = var_11;
                }
            }
            var_22 = (((arr_16 [i_5] [i_5]) << ((((var_4 ? var_11 : (max(18446744073709551615, 15)))) - 18446744073709532082))));
        }
    }
    #pragma endscop
}
