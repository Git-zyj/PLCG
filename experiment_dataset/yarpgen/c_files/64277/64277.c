/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ? ((((max(46338, -1))) ? (var_9 - var_12) : ((((-11625 && (-2147483647 - 1))))))) : ((((((1126715698 ? 1 : 2798419921110327869)) <= 1))))));
    var_16 = var_10;
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = ((var_7 >> (var_4 - 670812563)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((((min((~var_5), var_9))) ? (max((max(12184, var_8)), ((var_8 ? var_3 : var_10)))) : var_2));
                    var_20 |= ((1 <= (((max(1422936369, (arr_3 [15] [15]))) - ((var_3 ? -1 : var_14))))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        var_21 = 7883;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    var_22 = (min((((((max(0, var_6))) ? var_0 : (max(var_6, (arr_11 [i_5] [i_4] [i_3 - 2])))))), var_11));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 = (((((var_2 ? (arr_17 [i_3 - 2]) : (!10983214623469326528)))) ? ((min(var_7, ((16705 ? -1579879092 : 1))))) : ((74291197 ? -693707488 : 3621503021939389820))));
                                var_24 = (arr_7 [7] [i_3]);
                                var_25 -= max(9520836035665211459, 1679413740);
                            }
                        }
                    }
                    var_26 = ((((((arr_1 [i_3 + 2]) || var_4))) <= (((24096 >= (var_10 == var_3))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_27 = ((((min(var_12, (arr_22 [i_8])))) ? (((min(var_14, (arr_22 [i_8]))))) : (((arr_22 [i_8]) / var_9))));
        var_28 ^= (arr_20 [i_8]);
    }
    #pragma endscop
}
