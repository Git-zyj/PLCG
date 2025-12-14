/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [1] [1] [i_1] = ((-((((max(0, var_5))) % (min((arr_4 [i_2]), (arr_6 [2] [i_1] [i_0])))))));
                            var_16 = (max(var_16, (8761733283840 <= 2035348852)));
                            var_17 += ((!(((((((arr_8 [i_0] [14] [10] [i_3]) * var_0))) ? (max(-4096, (arr_3 [i_3]))) : (~var_14))))));
                        }
                    }
                }
                arr_14 [i_1] = var_13;
                var_18 = var_0;
                var_19 = var_4;
                arr_15 [0] [9] [i_1] = ((!(((~(max(32481, var_1)))))));
            }
        }
    }
    var_20 = (max(((max(32475, 174))), (min(((var_4 ? 18446744073709551615 : 7)), var_6))));
    var_21 = var_11;
    #pragma endscop
}
