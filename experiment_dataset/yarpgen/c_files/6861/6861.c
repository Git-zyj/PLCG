/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 |= ((+(max((!-12), ((18 ? (arr_2 [i_0] [i_0]) : 0))))));
                arr_6 [8] = (max(((((min(var_5, 1))))), (arr_0 [i_0] [i_1])));
                arr_7 [i_0] [i_0] [i_0] = ((+((~(max((arr_0 [i_0] [i_0]), var_3))))));
                arr_8 [i_0] [i_1] [i_0] = (!1);
            }
        }
    }
    var_12 = (((max((min(9068839439864942663, 1865502527852490144)), (((var_4 ? var_5 : var_0)))))) ? (((max(var_2, 4294967295)))) : (min(var_7, -var_8)));
    var_13 = (max(((((min(var_10, var_1))) ? (max(var_1, var_4)) : 8922479618372748541)), ((min(var_8, (min(var_8, var_8)))))));
    #pragma endscop
}
