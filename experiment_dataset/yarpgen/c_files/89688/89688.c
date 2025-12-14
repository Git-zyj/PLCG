/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_11 != var_5) ? (((54319 ? (var_5 - 387113339) : ((var_8 ? var_12 : var_5))))) : (((1108307720798208 != 119) ? (max(var_9, var_3)) : var_4))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((((max(1402504474, (var_3 | var_11)))) ? (arr_2 [i_0] [i_1]) : (((((-112 ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0] [7])))) ? 44 : ((max(var_11, 255)))))));
            arr_5 [i_0 + 1] = ((-var_0 != (((arr_3 [i_0] [i_0 + 1]) << (arr_3 [7] [i_0 + 3])))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_14 |= ((((max((((arr_8 [i_0] [i_3]) - 179)), 1))) + (((var_11 <= 56492) ? (arr_9 [i_0]) : var_1))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = (max(((((var_7 * (arr_0 [i_3]))) + (arr_3 [i_0] [1]))), ((((((((arr_11 [i_0] [i_0] [i_2] [i_3] [i_3]) || (arr_11 [i_4] [i_4] [i_3] [i_2] [i_0]))))) < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_15 = ((max((arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_10 [i_0 - 1] [i_0 + 3] [i_0 + 2] [i_0 - 2]))));
                    }
                }
            }
            var_16 *= ((((-(arr_1 [i_0] [i_0 - 2]))) & ((((arr_11 [i_0] [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_2]) == (arr_6 [i_0]))))));
        }
        arr_13 [i_0] = min((arr_1 [i_0] [i_0]), (min(var_10, var_1)));
    }
    #pragma endscop
}
