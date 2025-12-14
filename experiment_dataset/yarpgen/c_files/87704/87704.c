/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((0 == var_7) ? (max(var_14, 2204144234)) : (((max(var_2, 1))))))) ? -var_9 : (((var_16 != ((var_0 ? var_12 : 2090823056)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_1] = max((((arr_4 [i_0] [i_1] [i_1]) ? (1 || 10320535822218354516) : (2147483647 && 0))), (((((var_14 != (arr_1 [i_0] [i_1])))) + (1 || 10320535822218354516))));
                arr_6 [i_0] [i_1] = ((-(((var_0 - (arr_2 [i_1] [2]))))));
                arr_7 [i_1] [i_1] [i_0] = 0;
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
