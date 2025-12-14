/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 6;i_1 += 1) /* same iter space */
        {
            var_10 = (((((arr_3 [i_1 + 4] [i_1]) + var_0)) + (1 + 1976043742)));
            var_11 = ((((((arr_1 [i_0] [i_0]) ? (~var_9) : (max(var_5, (arr_2 [i_0])))))) ? (((arr_2 [i_1 + 2]) ? (arr_4 [i_1 + 2]) : 1976043729)) : (!1976043742)));
        }
        for (int i_2 = 1; i_2 < 6;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] = ((((!((min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_2] [i_0])))))) ? ((((arr_1 [i_2] [i_2 + 3]) ? 1976043738 : (arr_1 [i_2] [i_2 + 4])))) : ((~(arr_5 [i_2] [i_2 + 1] [i_2 + 1])))));
            var_12 = ((((max((arr_5 [i_0] [i_0] [i_2 + 2]), (arr_5 [1] [i_2] [i_2 + 4])))) && ((max((arr_5 [i_0] [i_2] [i_2 + 2]), var_7)))));
        }

        /* vectorizable */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            arr_11 [i_3] [i_3] [i_0] = (((arr_4 [i_3 + 2]) != (arr_1 [i_3] [i_3 - 1])));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_14 [i_3] [i_0] = var_0;
                var_13 = 1976043732;
            }
            var_14 = arr_4 [i_0];
            var_15 -= (arr_7 [i_0] [i_3] [i_3 - 1]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 6;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_22 [2] [i_3] [i_5] [i_5] [i_5] [i_5] = (((~1976043738) ? (arr_18 [i_3 - 1] [i_6 - 2] [i_5] [i_6]) : (((arr_6 [i_5] [i_5]) ? (arr_3 [i_0] [i_3]) : var_6))));
                            arr_23 [3] [i_3] [3] [3] [i_3] = ((-(arr_17 [i_6 - 3] [i_6 - 1] [i_6 - 3] [i_6 - 3])));
                            arr_24 [i_3] [i_3] [7] [i_3] [i_3] = (((var_9 || (arr_16 [i_0] [i_0] [i_0]))));
                        }
                    }
                }
            }
        }
        var_16 ^= ((((arr_15 [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [8]) : (arr_15 [i_0] [i_0] [i_0]))));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_17 = (max(var_17, (max((max(((-4 ? 0 : 2318923566)), 1)), ((min((788122099 != 1976043733), (min((arr_25 [i_8] [i_8]), (arr_25 [i_8] [2]))))))))));
        arr_27 [i_8] = ((13399 ? 1 : 0));
        var_18 = (max(var_18, 57));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    arr_33 [i_8] [i_8] = (min((max((min((arr_32 [i_8] [i_8] [i_8]), (arr_30 [i_8]))), (arr_28 [i_8] [i_8] [14]))), (arr_25 [i_8] [i_9])));
                    arr_34 [i_8] [i_8] [i_8] = ((-(!1976043742)));
                }
            }
        }
    }
    var_19 = (((!var_1) << (var_1 ^ var_1)));
    var_20 = var_6;
    #pragma endscop
}
