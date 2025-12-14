/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = -20435;
                arr_8 [i_1] [i_0 + 1] [i_1] = 131;
                arr_9 [i_1] [i_1] [i_0 + 1] = (((((arr_2 [i_0 - 1]) << ((((~(arr_3 [2] [i_0]))) + 12)))) << (((((min((arr_3 [i_0] [i_1]), (arr_6 [i_0] [i_1])))) && ((min((arr_1 [i_1]), -41))))))));
                arr_10 [i_1] [i_1 + 1] [i_1] = (arr_1 [i_1]);
            }
        }
    }
    var_11 = var_7;
    var_12 = (((((var_3 | var_8) >> (8689 - 8673))) / (min((~var_0), var_9))));
    #pragma endscop
}
