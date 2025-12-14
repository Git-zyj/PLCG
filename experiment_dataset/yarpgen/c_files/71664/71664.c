/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 += ((((var_6 ? var_8 : var_14)) + ((var_13 ? var_11 : (var_13 | var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((arr_0 [i_1]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_1])))) ? ((-((6822093445721046742 ? 268427264 : -4412725173017944010)))) : (((((arr_3 [i_0]) >= -4412725173017944009))))));
                var_21 &= ((((!(((var_6 ? var_11 : (arr_4 [i_0])))))) ? (((((arr_3 [i_0 - 1]) != 4412725173017943993)))) : ((~((1375889852 << (((arr_0 [i_1]) - 1123372777152739792))))))));
            }
        }
    }
    #pragma endscop
}
