/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (!-92);
                var_19 *= (arr_2 [i_0] [i_1]);
                arr_4 [i_0] &= (18446744073709551605 ? ((min((((var_6 > (arr_0 [12] [12])))), ((4464671571613846940 ? 0 : var_2))))) : (min(((703002191 ? var_2 : (arr_0 [i_1] [i_1]))), (((arr_2 [i_0] [i_1]) ^ var_4)))));
                var_20 = min(1, 10826424863867647885);
                arr_5 [i_0 - 1] [i_1] = ((((~(arr_0 [i_0 - 1] [i_0 - 1]))) ^ (((arr_0 [i_0 + 1] [i_0 + 1]) << 24))));
            }
        }
    }
    var_21 = (var_7 > var_6);
    #pragma endscop
}
