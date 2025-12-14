/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~(min((-2147483647 - 1), 3)));
    var_19 = ((!(((var_17 | ((max(var_5, 2147483630))))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] = (i_0 % 2 == zero) ? (max(var_8, (((((~70368744046592) + 9223372036854775807)) >> ((((-88 ? (arr_4 [i_0] [i_1] [i_1]) : -1)) - 9807051990601197594)))))) : (max(var_8, (((((~70368744046592) + 9223372036854775807)) >> ((((((-88 ? (arr_4 [i_0] [i_1] [i_1]) : -1)) - 9807051990601197594)) - 1522070809318021589))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_2 - 2] [i_2 - 3] [i_2 - 2]);
                        var_20 = (arr_0 [i_3]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_21 = (min((max(1920027227549164064, ((((-2147483647 - 1) < var_0))))), (((-2147483630 ? (2147483630 < 38283) : (var_16 & var_6))))));
                    arr_20 [i_0] = -2147483630;
                    arr_21 [i_0] [i_0] [i_0] = ((-(!var_1)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = (((((-(arr_0 [i_6])))) ? (var_14 && 31) : (((var_1 <= (arr_3 [i_6]))))));
        var_22 -= -32763;
        arr_26 [i_6] = ((!(arr_6 [i_6] [i_6] [i_6] [i_6 + 3])));
    }
    #pragma endscop
}
