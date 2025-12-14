/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((14 && 70368744173568) ? 20960 : ((var_1 ? 25 : 32))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (1374824210 ? (173 * 0) : 41286);
                    arr_9 [i_0] [i_0] [i_1] [i_0] = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, 41286));
                                arr_15 [i_0] [i_0] [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_3 - 1] |= (((max(24250, 50151))) ? ((((min(50144, 65535))) | (50151 / 42))) : (max(1914620983, 124)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, ((min(-800628756, var_4)))));
    #pragma endscop
}
