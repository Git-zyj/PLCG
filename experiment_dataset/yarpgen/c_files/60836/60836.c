/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [8] [3] [i_1] = (((((arr_3 [i_0]) || (arr_3 [i_0]))) || ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = 32767;
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] |= (min((((-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_9 [i_0])));
                    var_21 = (min(var_21, (((1412265489402304809 ? ((min(var_4, (arr_10 [i_2] [i_0])))) : (max((max(var_4, (arr_10 [i_0] [i_2]))), ((-581364278 - (arr_10 [i_0] [i_0]))))))))));
                    var_22 = (arr_10 [i_0] [i_0]);
                }
            }
        }
    }
    var_23 ^= ((max(var_5, (((var_18 ? var_15 : var_12))))));

    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_24 = arr_20 [10] [9];
        arr_22 [i_5] [i_5] = (((((18446744073709551615 ? ((((arr_19 [i_5]) ? -581364254 : 569569210))) : ((121 ? (arr_21 [i_5] [i_5]) : -122))))) ? -569569231 : ((((var_7 ? (arr_21 [5] [i_5]) : 127))))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] [8] = ((-581364278 + ((-(arr_24 [i_6])))));
        var_25 = var_1;
        var_26 = (arr_19 [i_6]);
    }
    #pragma endscop
}
