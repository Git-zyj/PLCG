/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 += (max(var_10, ((((var_14 ? var_2 : var_4)) % var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((~(arr_6 [i_0] [i_0] [i_0] [i_2])))));
                    arr_8 [i_1] [i_0] [1] = ((var_14 % (~1)));
                    var_18 -= var_11;
                    arr_9 [i_0] = ((var_4 ? (((45 < -2147483633) ? (arr_5 [i_1]) : (((arr_7 [i_0] [i_1]) | (arr_4 [i_0] [i_0] [i_0]))))) : (((min(var_1, (arr_3 [i_0])))))));
                    var_19 = (max(var_19, var_8));
                }
            }
        }
    }
    var_20 = (max(var_20, (var_10 < var_1)));
    #pragma endscop
}
