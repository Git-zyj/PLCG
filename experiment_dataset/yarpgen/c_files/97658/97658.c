/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_4;
    var_11 = ((var_7 || (var_4 * var_5)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = ((~((var_7 ? (arr_4 [i_0] [i_0] [i_3 + 2]) : (arr_4 [i_0] [i_0] [i_3 + 2])))));
                                arr_15 [i_0] [i_0] = ((-((var_9 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                                arr_16 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0 - 1] [i_0] = ((((((!(arr_2 [i_0]))))) > (arr_2 [i_0])));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_0, ((((arr_6 [i_0] [i_3 + 1] [i_0]) ? var_3 : (arr_11 [i_1] [i_2] [i_2]))))));
                                var_13 = ((((!(var_7 > -5525432876041388502))) ? (!125) : (arr_9 [i_3] [i_2] [i_0 - 1])));
                            }
                        }
                    }
                    var_14 = (max(var_14, (((-((0 ? 18217 : 0)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 &= (((((-1 / var_2) ? -6183537301573056158 : 18446744073709551607)) + 122));
                                arr_24 [i_0 - 1] [i_0] [i_5] [0] [i_2] [i_0] [i_0 - 1] = 30;
                                var_16 = ((((((arr_4 [12] [i_0] [i_5]) ? ((0 ? -1 : 2194146775)) : var_2))) ? ((-3395463020900233345 ? (arr_22 [i_0]) : (arr_22 [i_0]))) : 27));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_17 &= (((!((max((arr_1 [i_0]), var_1))))));
                                arr_30 [i_8] [i_0] [i_8] [i_8] [i_8] = ((((max(-117, ((125 ? -5447891353043169771 : 325136108))))) ? 0 : 117));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
