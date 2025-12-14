/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((8658654068736 - -79) - (((var_4 ? (arr_2 [i_1] [i_0]) : -9181687380694330655)))));
                var_20 = max((max(((max(-55, var_8))), (var_5 / var_14))), ((var_6 ? (~var_5) : (arr_1 [i_0] [i_1 + 1]))));
                arr_5 [i_0] [i_0] = var_10;
            }
        }
    }
    var_21 = ((var_3 ? ((((((-123 ? var_10 : var_4))) && (((1071074627 ? 9888050436175401944 : var_2)))))) : ((-((55 ? 6144 : 183))))));
    #pragma endscop
}
