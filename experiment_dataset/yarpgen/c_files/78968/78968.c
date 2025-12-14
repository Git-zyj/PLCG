/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_1] = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((~(((arr_13 [i_0] [20] [i_0] [i_3] [i_4]) ? -73 : 182)))))));
                                var_18 += (arr_10 [i_0] [i_0 + 3]);
                                var_19 *= ((min((arr_5 [i_4 - 2] [i_4 + 1]), var_4)) ^ (((46682 & (18853 ^ 46682)))));
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] = ((((((min(var_14, 11681179623570516825))) ? (arr_5 [i_2] [i_2]) : var_4)) - ((((max(-73, (arr_5 [i_0] [i_2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 |= var_16;
    #pragma endscop
}
