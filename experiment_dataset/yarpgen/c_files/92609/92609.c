/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, (((((max(511, 3498703205))) ? 33521664 : (min(131071, 124)))))));
        var_18 = ((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? (max((max(var_14, 1)), 131071)) : ((((((var_10 ? 3190389051 : 1))) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = (((((-(((arr_0 [i_0]) ^ 514304089))))) ? ((max(((max(6784, 53))), ((-(arr_1 [i_0] [i_0])))))) : (min((min(411888199, (arr_0 [i_0]))), ((min(2147483630, 1)))))));
        var_19 = ((((var_14 ? ((1 ? (arr_0 [i_0]) : var_13)) : (((var_3 ? var_15 : var_11)))))) ? (((max(1819315393, (arr_0 [i_0]))))) : 16369310256062945977);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_2 + 3] = (!1104578217);
                    var_20 = (min(var_20, var_8));
                }
            }
        }
    }
    #pragma endscop
}
