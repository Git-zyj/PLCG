/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((-(max(((var_7 ? var_6 : var_5)), ((min(var_8, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((-((((((arr_1 [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_2 [i_0])))) ? ((((arr_3 [i_0] [i_0]) < (arr_2 [i_1 + 1])))) : ((~(arr_2 [i_1])))))));
                var_11 = (arr_0 [i_1]);
                var_12 = (((((((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_4 [i_0] [i_1 - 1])))) ? (arr_0 [i_1 + 1]) : (arr_2 [i_1 + 1])))) ? ((min((((((arr_1 [i_0]) + 2147483647)) << (((arr_0 [i_1 - 1]) - 147)))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) : (~332995389135465949)));
            }
        }
    }
    var_13 = (max(((((((var_3 + 9223372036854775807) << (var_6 - 154)))) ? (var_4 ^ var_0) : var_2)), ((((var_4 && var_0) >= var_8)))));
    var_14 = (max((!var_4), ((((var_3 || var_7) > ((var_3 ? var_9 : var_4)))))));
    #pragma endscop
}
