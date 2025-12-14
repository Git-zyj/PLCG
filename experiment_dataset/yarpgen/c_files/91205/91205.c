/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0] = ((+(((arr_4 [i_1] [i_1 + 1]) ? (arr_2 [14] [i_1 + 1] [i_1 + 1]) : (arr_4 [i_1] [i_0])))));
                            arr_11 [i_0] [i_1] = (arr_4 [i_1] [i_2]);
                            arr_12 [i_1] [i_1] [i_1] [4] = (~14071450597219862732);
                            var_17 -= (!2147483647);

                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                var_18 = 56;
                                var_19 = ((-19 ? (max((arr_0 [i_2]), 239948823)) : (min((arr_5 [i_1] [i_1 - 3] [i_3 - 2]), (arr_7 [i_1] [i_1 - 3] [i_3 - 2] [i_4 - 1] [i_4 - 1])))));
                                var_20 &= arr_7 [i_0] [i_1] [i_2] [i_3] [i_1];
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_21 = ((((min(((min(-84, var_15))), ((0 + (arr_1 [i_0] [i_0])))))) ? (min(var_15, -60)) : (((-(arr_15 [i_3 + 1] [i_1 + 1]))))));
                                var_22 = (((((arr_17 [i_1] [i_1] [i_1] [20] [17] [i_1] [i_1]) >= (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) ? (min((arr_1 [i_0] [i_3 + 3]), (arr_1 [i_0] [i_3 + 1]))) : -28));
                            }
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    var_23 = (max(var_23, (((!(((var_2 ? ((((!(arr_9 [i_0] [22] [i_0]))))) : -2704877868579660746))))))));
                    var_24 = -1;
                }
                var_25 ^= ((((((arr_13 [i_0] [i_1]) ? -99 : (arr_8 [i_1])))) ? (((arr_14 [8]) % (arr_6 [2]))) : ((((min(2507383798, 1082241946)) >> (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) - 1130534151)))))));
                var_26 -= ((~(max(-2031835146, 1875372615))));
            }
        }
    }
    var_27 = var_10;
    var_28 = ((2147483626 ? (((-(min(1072693248, var_9))))) : var_14));
    var_29 = min(((((max(7495561542581592579, var_14)) != (~var_4)))), (((var_16 ? 3321624774 : 132))));
    #pragma endscop
}
