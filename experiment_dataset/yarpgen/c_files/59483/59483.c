/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [9] [i_1] = (((var_8 * var_10) ^ var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = min(-5, 11608327651098559604);
                                var_13 = (min(var_13, ((max((min(var_5, var_6)), ((var_4 + (var_10 >= var_2))))))));
                                var_14 = ((var_11 ^ (((var_5 | var_0) / ((var_11 << (var_11 - 3622)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_1;
    var_16 = (max(var_16, ((min(6838416422610992013, 1465970769889121299)))));
    var_17 = var_0;
    var_18 = (min(var_11, var_5));
    #pragma endscop
}
