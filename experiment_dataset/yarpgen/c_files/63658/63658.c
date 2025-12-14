/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((((max((arr_2 [9]), (arr_4 [i_0])))) || ((!(arr_0 [i_0 - 1])))));
                var_20 = (((((((arr_2 [i_1]) ? (arr_4 [i_1]) : (arr_0 [i_0]))))) ? (arr_1 [i_0]) : ((~(((arr_0 [i_0]) ? (arr_4 [i_1]) : (arr_0 [i_0])))))));
                var_21 = ((!(arr_3 [i_1])));
            }
        }
    }
    var_22 = ((((~var_11) ^ (max(var_18, var_1)))) << (((max((max(var_9, var_4)), (((var_2 >> (var_1 - 11657445710812029605)))))) - 18446744073709520293)));
    var_23 = (((((((var_3 ? var_17 : var_11))) ? ((var_0 ? var_8 : var_9)) : ((var_13 ? var_8 : var_15)))) == var_14));
    #pragma endscop
}
