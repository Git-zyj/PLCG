/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_8, (2626806574 * 2626806595)));
    var_21 = (min(var_21, (((((((((var_16 ? var_15 : 1)) > var_12)))) * var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = -1336550611189930893;
                    var_22 = (min((arr_0 [i_2] [i_0]), ((var_19 * (arr_1 [i_1])))));
                    arr_8 [i_0] [i_0] [i_0] = max((min((((~(arr_5 [i_1])))), var_2)), (((((max(222, -71))) ? 15 : (((arr_4 [i_0] [i_1] [i_2 - 4]) << 1))))));
                    var_23 = (max(1668160704, -42));
                    var_24 = ((!(arr_2 [i_2 - 4])));
                }
            }
        }
    }
    #pragma endscop
}
