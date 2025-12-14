/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 ^= (((2147483647 & 8402194449999090655) | (((max((arr_3 [6] [i_0]), (arr_3 [1] [1])))))));
                var_14 = (arr_2 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_15 ^= (max(-1298051902, (((arr_8 [i_2 - 1] [i_2]) * var_7))));
                var_16 |= (((max((arr_6 [1]), (min((arr_8 [i_3] [4]), 571754776)))) & 1));

                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    var_17 ^= arr_12 [i_2] [i_2];
                    var_18 = (((1 - 106) - (arr_13 [i_2 - 1] [i_4 - 1] [i_4])));
                    var_19 = (((max((var_8 & var_0), 4294967295)) == (((((max((arr_9 [i_2] [i_2] [i_2]), (arr_7 [i_2])))) | (arr_13 [i_3] [18] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 = (~1);
                                var_21 = ((((max(-4535, 0))) >> (((~0) + 12))));
                                var_22 = var_12;
                            }
                        }
                    }
                    var_23 = (-126 - ((((max(2, -2094590882))) ? (((arr_11 [i_2] [i_3] [i_2] [i_3]) - 2147483647)) : 31459)));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_24 = ((((-(arr_13 [i_2] [i_2 - 1] [i_2 + 1])))) ? (((-(arr_13 [i_2] [i_2] [i_2 + 1])))) : (5778680260209842184 - var_8));
                    var_25 = ((-((-(((arr_6 [i_3]) / -59))))));
                    var_26 += ((+(((!((min((arr_19 [i_7] [i_2] [i_2]), 1))))))));
                    var_27 -= (((5778680260209842184 ? 14708 : 140737488224256)));

                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        var_28 = (var_7 ? (((~(arr_18 [i_2 + 1] [i_3] [i_8 + 1] [i_8 - 1])))) : (((arr_9 [i_8 + 2] [i_2 - 1] [6]) ? -4632076832980688047 : (0 >= -1))));
                        var_29 = (arr_14 [i_2] [i_2] [i_2] [i_2 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
