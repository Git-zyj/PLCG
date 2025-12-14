/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (max(127, (-127 - 1)));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_16 = (max(var_16, 3637557888));
                    var_17 *= (arr_0 [i_1]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_18 *= (min((arr_4 [i_2] [i_1] [i_1]), (((!((((arr_1 [1]) ? (arr_6 [i_0] [i_0]) : 736381223))))))));
                        arr_11 [i_2] = (max(((~(arr_10 [i_1] [i_1] [3] [i_2]))), (((((((arr_10 [i_0] [i_0] [i_2] [i_0]) ? (arr_0 [i_3]) : -127))) ? (max(86287773, var_1)) : (((!(arr_7 [i_0] [i_0] [i_0] [i_3])))))))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_19 = (max((arr_4 [i_4] [i_4] [i_4]), (((arr_10 [i_2 + 1] [i_2] [i_2] [0]) ? (min(var_1, (arr_4 [i_0] [i_3] [i_0]))) : ((174 ? (arr_8 [i_0] [20] [i_2]) : (arr_6 [4] [i_3])))))));
                            var_20 = (max(var_20, ((max((arr_3 [i_2]), ((((~1152) && var_12))))))));
                            var_21 = ((((min((((-127 - 1) ? 30 : -127)), (arr_12 [i_1] [4] [i_1] [i_1] [i_1])))) & ((((~(arr_0 [i_4]))) & ((3558586072 ? 3218871820 : -4792862959423202547))))));
                            var_22 = (max(var_22, (((((arr_12 [i_0] [i_1] [i_1] [6] [i_4]) ? 4294967295 : (max(4294967295, (arr_4 [i_0] [i_0] [i_0])))))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] [i_1] [i_2] [i_2] = (min(((var_6 ? (arr_15 [i_0] [i_2 + 1] [i_2] [i_5] [i_0]) : (arr_15 [i_0] [i_2 + 1] [i_2] [i_0] [i_1]))), (max((arr_15 [i_0] [i_2 + 1] [5] [i_0] [i_5]), -35))));
                        arr_17 [i_0] [i_1] [i_0] [i_5] |= ((((((max((arr_8 [i_2 + 3] [i_2 + 3] [i_0]), (arr_8 [i_2 + 2] [i_2 - 1] [i_5])))) + 2147483647)) << ((((var_4 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_2] [i_2 + 1] [i_2] [7]))) - 2348348420113707279))));
                        var_23 ^= ((~(((((max(var_5, var_8))) && (arr_13 [i_2 + 1] [i_2] [i_2]))))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_24 = (arr_19 [i_2]);
                        var_25 = ((~((((min(2177635631, -32764))) & ((1 ? -7850425418187651749 : 255))))));
                        arr_20 [i_0] [i_1] [i_2] [i_1] [i_6] [i_2] &= 1635788930;
                    }
                }
            }
        }
    }
    var_26 += var_7;
    var_27 = (min(var_27, ((((var_15 | var_11) ? (max(var_3, var_8)) : (min(((max(2133630833, 7663))), (min(var_7, 2362356379989632194)))))))));
    #pragma endscop
}
