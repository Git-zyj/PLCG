/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-(min(var_2, var_7))))) + ((2 << (((((-2147483647 - 1) - -2147483595)) + 68))))));
    var_21 = ((var_9 << (var_19 / var_15)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [1] [i_0] = (max(((249 ? (0 / 1848389726739208417) : 65532)), 255));
        var_22 ^= (min((arr_2 [10] [10]), -var_11));
        arr_4 [i_0] = (max(((((var_16 ? (arr_0 [i_0] [7]) : var_13)) ^ (arr_2 [i_0] [i_0]))), (~65559)));
        arr_5 [16] [i_0] = (((arr_0 [i_0] [i_0]) + ((((min(2, 255)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [8] [8] &= ((!((((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : 3526687528660887569)))));
        var_23 = -23137;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_24 *= (min(var_2, ((min(((0 ? 1548765193 : 0)), 186)))));
                        var_25 &= (max((69 / 8388607), (arr_11 [i_2] [i_2])));
                        var_26 = 255;
                    }
                    var_27 = (max(var_27, (((18446744073709551610 << (((min(((min(16550, var_4))), (70 / 26))) + 143)))))));
                }
            }
        }
        var_28 = ((((~(((arr_17 [i_2] [i_2] [i_2]) + (arr_2 [i_2] [4]))))) > ((((((arr_16 [14] [12] [12] [i_2]) << (74 - 55)))) ? (0 + 1) : (max(-8388608, (arr_7 [i_2] [7])))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_29 &= (((arr_20 [i_7] [i_7] [i_6]) ^ ((max((arr_23 [i_2] [i_2] [i_7]), 3004367775878908816)))));
                    arr_26 [i_7] = (((-11 << (75 - 44))));
                }
            }
        }
        var_30 ^= (((((4852353198592116776 || (arr_21 [i_2] [i_2]))))));
    }
    #pragma endscop
}
