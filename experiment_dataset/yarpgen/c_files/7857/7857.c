/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min((min(9223372036854775804, 709099157)), ((min(8, var_2))))), ((min((min(var_8, var_10)), ((min(var_0, var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(((min(((min((arr_3 [i_0]), 47811))), (min(981431975, 9239))))), (max(((min(var_0, var_11))), (min(1, 238648388658156094))))));
                arr_6 [i_1] [i_1] [i_1] = (max((min((min(36028779839094784, var_7)), (min((arr_2 [i_0]), -9223372036854775788)))), (min((min(var_5, (arr_4 [i_0] [i_1]))), (min(var_13, (arr_3 [i_0])))))));
            }
        }
    }
    var_17 = (min((min((min(65535, var_3)), ((min(var_12, 255))))), ((min(((min(var_7, var_4))), (min(251, var_6)))))));
    #pragma endscop
}
