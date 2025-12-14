/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_14, ((((min((-2147483647 - 1), 28877)) == (min(var_12, 2147483647))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 2] [i_2] [i_2] [i_1 - 2] = (((-2147483647 - 1) && ((min((max(3316771467, (arr_2 [i_2] [i_0 + 2] [i_0 + 2]))), (arr_6 [9] [i_1 - 1] [i_0 + 2] [i_0]))))));
                    var_20 = (max(var_20, (((((var_15 ? var_1 : (min(var_12, (arr_5 [i_0] [i_1]))))) >= (((((arr_2 [i_1 - 1] [i_1] [i_1 - 2]) >= 2272014432)))))))));
                    var_21 = 2504926696;
                }
            }
        }
    }
    #pragma endscop
}
