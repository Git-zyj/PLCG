/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((var_12 ? ((((min(var_10, var_15))) & (var_0 % var_11))) : (((3584 + 32767) * var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = var_3;
                var_19 = (max(var_19, (115 || 0)));
                var_20 = (var_4 / -1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1 + 1] [i_0] = (((arr_7 [i_3] [i_1 + 2] [i_0]) != (max(((125 ? 29488 : 254)), var_2))));
                            var_21 ^= var_2;
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (var_15 ? (((!((min(var_11, (arr_0 [i_1]))))))) : (arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3]));
                            var_22 = (arr_7 [i_2] [i_2] [i_2]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
