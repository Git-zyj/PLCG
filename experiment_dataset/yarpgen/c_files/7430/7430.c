/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min((!-1), var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((max(var_11, (arr_2 [i_0])))) ? (((((arr_2 [i_0]) && -var_2)))) : (((((~(arr_1 [i_0] [i_1])))) ? ((((!(arr_2 [i_1]))))) : (arr_3 [i_0] [i_1]))))))));
                var_17 = (max(var_17, (((((((((arr_1 [i_0] [i_1]) + 2147483647)) >> (((arr_0 [i_1] [i_0]) - 645467499))))) ? 1 : (max((arr_1 [0] [i_0]), (((arr_0 [i_1] [i_0]) ? (arr_2 [i_1]) : (arr_1 [i_0] [i_0]))))))))));
                var_18 = ((1 ? 3040393054393460146 : 1090));
            }
        }
    }
    var_19 += (~var_2);
    var_20 = (max(var_20, ((var_13 ? ((max(4294967295, var_9))) : var_13))));
    var_21 ^= (((((!((max(var_2, var_9)))))) & var_12));
    #pragma endscop
}
