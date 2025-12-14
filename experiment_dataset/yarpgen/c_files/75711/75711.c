/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = ((((((arr_0 [i_0]) ? 1 : 127))) && (((arr_0 [i_0]) || (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] [i_1 + 1] [i_1 + 1] = (((((((max(1, -123))) / (arr_11 [i_0] [i_1 + 3] [i_2 + 4] [i_2 + 4])))) ? ((var_6 << (arr_11 [i_0] [i_3] [i_1 + 2] [i_1]))) : ((((((20134 + (arr_10 [i_0] [20] [i_2] [i_3])))) < (min(125, var_4)))))));
                        arr_13 [i_0] [i_3] [i_3] [i_3] = ((((max(2119734485, 37968))) ? (arr_10 [i_0] [i_0] [i_0] [i_3]) : (min((116 | -16893), ((max(1, var_8)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    arr_18 [i_4] = ((((0 + 1) ? 19467265 : 30117)));
                    arr_19 [22] [i_4] [i_4] [i_5] = ((1 ? -80 : (((max((arr_6 [i_5] [i_0]), 18446744073709551615)) / 30075))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = ((1 <= (-32767 - 1)));
        arr_23 [i_6] [i_6] = 4843816684254575002;
    }
    var_13 &= var_3;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = ((0 ? 197 : (arr_2 [i_7])));
        arr_27 [i_7] = ((251 & 0) <= (-32767 - 1));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_14 += (arr_5 [i_10] [i_9] [i_9] [i_8]);
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_15 = ((-(arr_33 [i_11 + 1] [i_11 + 1] [i_10] [i_11])));
                                var_16 = (arr_9 [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_10]);
                            }
                        }
                    }
                    var_17 ^= (arr_37 [i_9] [i_9] [i_10] [i_10] [i_9]);
                    arr_43 [i_8] = (((arr_37 [i_8] [i_8] [i_9] [i_9] [i_10]) ^ ((-19467266 ? (arr_25 [i_10]) : -32755))));
                }
            }
        }
        var_18 = (arr_29 [1] [i_8]);
        var_19 = (min(var_19, (arr_10 [i_8] [i_8] [i_8] [i_8])));
        var_20 = (var_5 >= (arr_42 [12] [i_8]));
    }
    #pragma endscop
}
