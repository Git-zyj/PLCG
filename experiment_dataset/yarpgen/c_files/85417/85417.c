/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (max((3652939556 & 116), ((~(arr_7 [i_0] [i_0 - 3] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 &= (arr_5 [i_0]);
                                var_18 = min((arr_0 [i_0]), var_1);
                                var_19 = (max(var_19, ((min(((1 ? var_8 : 7070626837519415002)), (((!(!11376117236190136614)))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = (max((11376117236190136613 || 17442), ((~(arr_14 [i_0 - 3] [i_0] [i_0] [i_0] [i_0 - 1] [2] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, 32835));
    var_21 = var_14;
    var_22 = var_14;
    #pragma endscop
}
