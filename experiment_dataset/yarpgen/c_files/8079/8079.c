/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_9;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_0 [16])));
        var_20 = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 = ((1 == (arr_3 [i_0 + 4] [20] [i_0])));
            arr_4 [i_0] [i_0] = (arr_1 [i_0]);
            arr_5 [i_0] = var_10;
            var_22 = ((arr_2 [i_0]) - (arr_0 [i_0]));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = ((((((var_1 & var_6) ? (max((arr_3 [2] [i_2] [i_2]), (arr_7 [i_2] [21] [8]))) : var_1))) ? (((arr_0 [i_0]) ? (arr_2 [i_0]) : var_13)) : (arr_7 [i_0] [i_0] [i_2])));
            var_23 -= (min(1, 1));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_24 |= var_11;
                            arr_16 [i_0] [i_0] = ((-16 ? (arr_1 [i_0]) : (255 ^ var_12)));
                            var_25 = (min(var_25, (!var_6)));
                        }
                        arr_17 [i_0] [i_0] = ((~((~(min((arr_1 [i_0]), 520093696))))));
                        var_26 = (min(((min(47959, 107))), var_3));
                    }
                }
            }
            arr_18 [2] &= (min((((!(arr_6 [i_0] [i_0 + 3] [i_0])))), (max((arr_10 [i_0] [i_2] [12] [i_2]), (arr_6 [6] [i_2] [i_2])))));
            var_27 = (((((-var_7 || (var_13 <= 7463510412213108419)))) + (max((((arr_3 [i_0] [i_2] [8]) ? -15455880 : (-127 - 1))), (0 + 306084167)))));
        }
    }
    #pragma endscop
}
