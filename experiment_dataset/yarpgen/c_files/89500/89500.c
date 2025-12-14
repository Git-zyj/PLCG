/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0 + 2] [2] = 2147483647;
                var_18 = ((((((-9223372036854775807 - 1) + 9223372036854775807))) / (9223372036854775807 & 18446744073709551606)));
                var_19 = ((-124 + (arr_3 [i_1 - 1] [i_0 - 1])));
                var_20 = (min(var_20, ((max(((((((-127 - 1) > -20352))) | -2089257574)), ((((var_11 - (arr_2 [i_0] [i_0]))) + (arr_4 [i_1] [i_1 - 1]))))))));
            }
        }
    }
    var_21 = ((127 ? (max((255 / var_14), 117)) : (!var_5)));
    var_22 = (max(var_22, var_17));
    #pragma endscop
}
