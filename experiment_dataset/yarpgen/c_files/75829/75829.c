/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(max((min(-9223372036854775804, var_1)), ((max(6122, var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_4;
                arr_7 [i_0] [i_1] [i_0] = var_7;
            }
        }
    }
    var_12 = ((((-(!var_3))) / ((((var_6 ? var_5 : var_10))))));
    var_13 = (((min(var_8, -9223372036854775786)) <= (((var_9 ? ((var_1 ? 13029 : var_2)) : ((var_7 ? var_4 : var_5)))))));
    var_14 = (max(31711, (min((((var_9 ? var_9 : -4079726421184801570))), (min(1801883622946281431, 1852))))));
    #pragma endscop
}
