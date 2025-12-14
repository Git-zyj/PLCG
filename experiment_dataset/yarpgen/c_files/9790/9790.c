/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((var_8 ? ((min(20910, 1))) : var_0));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((5620985124210490913 ? (arr_0 [i_0]) : (arr_2 [i_0])))) ? ((((arr_0 [i_0]) ^ (arr_0 [i_0])))) : (min((max(var_6, var_9)), ((max(20910, 44626))))));
        var_15 = min(((max((arr_2 [i_0]), var_6))), ((-(((arr_2 [8]) ? 3307341792 : (arr_1 [i_0] [i_0]))))));
        var_16 += ((!(((((max(44619, (arr_2 [2])))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_17 ^= ((-16324 < (max((!var_11), var_0))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_18 = var_9;

        for (int i_2 = 3; i_2 < 7;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_1] [1] [2] &= (arr_9 [i_2 + 1] [i_2 + 1]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_19 = var_6;
                            arr_20 [i_5] [i_4] [i_3] [i_2] [i_1] = (arr_12 [i_1] [i_2] [i_2 - 1]);
                        }
                        arr_21 [6] [i_3] [i_3] [i_1] [i_1] &= ((((((arr_9 [i_1] [i_2 + 3]) ? (arr_11 [i_2 + 3]) : (arr_9 [i_1] [i_2 - 3])))) ? (((arr_5 [i_3]) >> (((((arr_11 [0]) >> (127 - 71))) - 83)))) : (((arr_8 [i_2 + 3] [9] [i_2 + 1]) ^ (arr_8 [i_2 + 3] [7] [i_2 - 1])))));
                    }
                }
            }
            var_20 = (max((~var_0), (((arr_5 [1]) | ((16337 >> (((arr_19 [7] [7] [7] [4] [i_2 + 3] [i_2] [i_2]) - 8377554778524839862))))))));
        }
        for (int i_6 = 3; i_6 < 7;i_6 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((-6 ? 34 : -1)))));
            var_22 -= (min(-var_7, (+-32750)));
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            var_23 = (arr_1 [i_1] [i_1]);
            arr_29 [i_1] [i_7] = (max(var_3, (min((arr_12 [i_7 + 1] [i_7] [i_7 - 1]), ((max((arr_5 [i_1]), var_1)))))));
        }
        var_24 = (arr_0 [i_1]);
    }
    var_25 *= (max(((((max(var_6, -1202875156))) ? ((var_6 ? 65535 : var_9)) : 65535)), ((max(-var_4, ((min(var_11, 44619))))))));
    var_26 *= (44619 & 44618);
    #pragma endscop
}
