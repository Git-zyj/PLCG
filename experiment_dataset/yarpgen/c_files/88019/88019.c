/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = ((((((((var_8 ? -5059462492702984227 : var_3))) / var_16))) ? (((((4151195720 ? var_9 : 143771575)) < (arr_1 [i_0 + 1])))) : (arr_1 [i_0])));
        arr_2 [i_0] = (((var_7 ^ 143771598) | ((~((var_8 ? (arr_0 [i_0]) : 4151195698))))));
    }
    var_21 = var_12;
    var_22 = ((((((!(var_13 >= var_12))))) <= var_16));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                var_23 *= max((arr_5 [i_1 + 1] [i_1 + 1]), ((var_1 ? (arr_4 [20]) : (arr_5 [i_1 - 1] [i_1 + 1]))));
                arr_8 [i_1] [i_1] = (max((arr_4 [i_1]), (((1739806213 && (arr_4 [i_1]))))));
            }
        }
    }
    var_24 = (((max(((max(1460595762, var_10))), (max(var_4, var_7)))) >= var_14));
    #pragma endscop
}
