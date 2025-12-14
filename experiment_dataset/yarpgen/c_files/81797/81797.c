/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((var_14 ^ var_15) >> ((((var_4 ? var_0 : 1)) + 1971)))), ((((max(1, var_3))) >> (2601 - 2598)))));
    var_17 = (max(var_17, (((var_14 <= (((~3) ? (!var_11) : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (163 != -21490);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_18 = (max(var_18, (1 >= 1)));
                    arr_9 [1] [1] [i_0] |= var_12;
                }
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
