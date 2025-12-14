/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((var_6 != (93 != var_3)))) << (((((var_4 * var_14) + var_1)) - 2150088087)))))));
                                var_17 += ((var_4 ? (84 / 218) : ((var_3 ^ ((223 << (var_6 - 10793380259794673057)))))));
                            }
                        }
                    }
                    var_18 = (((((min(var_2, var_3)) / (((140 ? 138 : -1)))))) ? (max(162, (1 ^ var_6))) : (156 <= 36833));
                    arr_12 [i_0] [i_0] [i_2] = ((min(var_7, -113)));
                }
            }
        }
    }
    var_19 = (min((max((15 != 108), 16454)), 78));
    var_20 = var_12;
    #pragma endscop
}
