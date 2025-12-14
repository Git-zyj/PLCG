/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_18 *= ((((((arr_0 [i_0]) ? (min((arr_4 [i_0] [6]), -6881973891311672881)) : (arr_4 [i_0] [i_1 - 2])))) ? ((~((0 ? 6881973891311672880 : -41)))) : 247));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [6] [i_3] [4] = (arr_7 [4]);
                                var_19 *= var_11;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_20 = var_1;
                            var_21 = 2;
                            var_22 = var_7;
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, (((-((max(var_10, var_4))))))));
    var_24 = var_0;
    #pragma endscop
}
