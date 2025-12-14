/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_1, (!var_8)));
                                var_12 = (arr_1 [i_0 - 1]);
                                var_13 = ((((((max(var_0, (arr_9 [i_2] [i_2] [i_2] [i_4] [i_4])))) ? ((((var_8 && (arr_2 [i_4]))))) : (min((arr_1 [i_3]), -7918138146097750826))))) ? ((((max(-1, 7918138146097750825))) ? ((max(-1, (arr_4 [i_0] [i_0] [i_0])))) : ((min((arr_3 [i_0]), (arr_4 [4] [i_1] [4])))))) : ((((arr_8 [i_3 - 1] [2] [i_3] [i_3] [i_3 + 1] [i_3 + 1]) > (var_10 >= 7918138146097750814)))));
                                var_14 = ((255 ? -28 : 9223372036854775807));
                            }
                        }
                    }
                    var_15 = (arr_6 [i_1 + 2] [i_0 + 1]);
                }
            }
        }
    }
    var_16 = (~var_10);
    var_17 = var_0;
    var_18 = ((~((((18446726481523507200 % var_3) >= 179)))));
    #pragma endscop
}
