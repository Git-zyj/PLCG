/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= -2773461771954023897;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [15] [1] = ((arr_1 [i_0]) || (1249676477 - var_12));
                var_20 = (((arr_3 [i_1]) ? (((((((1 ? var_18 : 287198318))) != ((var_11 ? (arr_5 [i_0] [13] [i_0]) : 1309824538)))))) : (max((arr_5 [13] [i_0] [13]), (((32815 >= (arr_2 [i_1]))))))));
            }
        }
    }
    var_21 = ((var_3 ? (max(4072950385274903937, 48)) : (((65530 ? var_1 : (287198298 <= var_12))))));
    #pragma endscop
}
