/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = (~var_12);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = (arr_0 [i_1] [i_1]);
                    var_17 = (((((-((((arr_1 [i_0 - 1] [4]) != 81)))))) ? (arr_3 [i_2] [i_0 - 1] [i_0 - 1]) : 223));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (!-17914);
                                arr_13 [i_3] [1] [10] [i_4] [1] [i_1] = var_5;
                                var_19 &= ((!(((5842716380791768431 + (arr_4 [i_0 + 1] [i_0 + 1]))))));
                                var_20 = (min(var_20, -23321));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 &= ((!44) >> (((min((max(13155420924282939957, 1)), var_0)) - 13155420924282939932)));
    #pragma endscop
}
