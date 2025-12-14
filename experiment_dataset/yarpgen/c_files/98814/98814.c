/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((12 ? -1492723246 : -7661697400007974987));
        arr_2 [i_0] = ((524256 ? 4294967283 : 4294967283));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (((((4294967288 ? var_2 : (arr_4 [i_1] [i_1])))) && (524256 != var_8)));
        arr_6 [4] |= var_4;
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_15 = (((((-((var_3 ? 3321964203 : var_1))))) ? ((var_12 - (min(var_3, 17074247392525084218)))) : (arr_7 [i_2] [i_2])));
        var_16 = arr_7 [i_2] [i_2];
        arr_9 [i_2] = (max((max(973003087, 2684688400)), ((((arr_7 [i_2] [i_2]) ^ (arr_7 [i_2] [i_2]))))));
        var_17 = (max(var_17, (((~((((-127 - 1) ? (arr_8 [i_2] [0]) : 75))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_17 [i_3] = (((arr_11 [i_3]) | (arr_11 [i_3])));
                    arr_18 [i_3] = (((((1 ? -524256 : (arr_3 [i_3])))) ? 944376493 : (arr_14 [i_4 - 2])));
                    var_18 |= (((arr_15 [i_3 + 1]) ? (arr_15 [i_4 - 1]) : (arr_3 [i_3 - 1])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_19 = (((arr_14 [i_6 - 1]) ? 17074247392525084220 : var_10));
                                var_20 = (max(var_20, ((((((524256 ? 17074247392525084218 : -72))) ? (arr_15 [i_3]) : ((var_9 ? (arr_14 [i_3 - 1]) : var_1)))))));
                            }
                        }
                    }
                }
            }
        }
        var_21 = 62;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_22 = ((24912 ? (arr_24 [i_8]) : (arr_7 [i_8] [i_8])));
        var_23 = (min(var_23, (((-2147483646 ? 34 : (arr_7 [10] [4]))))));
        var_24 = var_5;
    }
    #pragma endscop
}
