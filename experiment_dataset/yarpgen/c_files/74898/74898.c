/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = (max((123 >= 0), (!49)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_1 [i_0] [i_1]);
                var_18 = (arr_3 [i_0] [i_0]);
                var_19 = (max(((var_1 * (arr_2 [i_0] [i_0]))), ((max(var_14, 123)))));
                var_20 ^= ((((((arr_5 [i_0] [i_1 - 2]) == (arr_5 [i_0] [i_1 + 1])))) << (((0 && ((((arr_4 [i_0] [i_1]) ? (arr_5 [i_1] [i_1]) : var_13))))))));
                var_21 = var_14;
            }
        }
    }
    #pragma endscop
}
