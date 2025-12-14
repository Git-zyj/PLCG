/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 -= (max(var_9, 127));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 -= (min((((var_2 ? (arr_1 [i_0 - 3] [i_0 - 3]) : -101))), (((max(0, 4096)) | 1959610153))));
                var_18 = ((((((arr_0 [i_0] [i_1]) ? ((-4 ? var_6 : -73)) : (min(12, 1220569114))))) ? var_0 : ((((arr_2 [i_1] [i_0 - 4]) ? (arr_0 [i_1] [i_1]) : (min(2147483647, 12)))))));
            }
        }
    }
    var_19 = var_0;
    var_20 = (!var_13);
    #pragma endscop
}
