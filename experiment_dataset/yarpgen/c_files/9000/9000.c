/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((1 <= (~30))) ? ((-(min(var_10, var_3)))) : (min(var_12, 70))));
    var_16 = (min(((var_6 ? -28 : 16)), (((((min(var_1, 95))) || ((min(-1, 524287))))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_17 = -29;
        arr_2 [i_0] [i_0] = 524284;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = ((4294967294 ? (max(var_2, (arr_6 [i_1]))) : (-90 - var_8)));
        var_19 = ((~(min((max(-118, 4294967295)), -614168673))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_20 = var_7;
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_21 = ((((min((8289 <= var_11), var_4))) ? 15 : (((((23 >> (549487378432 - 549487378418)))) ^ (min((arr_21 [1] [1] [i_4 + 1] [i_3] [i_6]), -3733))))));
                                arr_22 [0] [i_3] [i_3] [i_4] [0] [i_3] = (524287 <= 2113424765);
                                var_22 += ((!(((var_10 ? 1385393844 : 95)))));
                                var_23 *= (24576 ? 18446744073709551615 : 96);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_28 [i_2] [i_3] [i_2] [i_2] [i_2] = ((95 ? (((((min(4611686018427386880, -96))) ? (min(16515072, 32)) : 8192))) : ((-(max(0, var_10))))));
                                var_24 = (min(var_24, var_2));
                                arr_29 [i_4 + 2] [i_3] [1] [i_7] = ((((arr_25 [i_2] [i_2] [i_4] [i_7 + 2] [i_2] [i_7 + 2] [10]) ? (12178605278062007802 | 1) : -1024)) >> 0);
                                var_25 &= ((255 ^ ((12178605278062007802 ? 12178605278062007802 : var_3))));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (max(var_26, ((((((15892449089936105311 ? (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]) : 4294942695))) ? (max((arr_9 [i_2]), (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((1117342873 ? 81 : (arr_17 [0] [i_2] [i_2] [2])))))))));
    }
    #pragma endscop
}
