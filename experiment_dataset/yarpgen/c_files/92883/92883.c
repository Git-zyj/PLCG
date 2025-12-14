/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = max((arr_1 [i_0]), (min(1, (arr_8 [i_0] [i_1] [i_3]))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] = min((min(((-(arr_7 [i_0] [i_1] [i_2] [i_0]))), var_8)), (((arr_6 [i_0] [i_1] [i_2]) - (arr_6 [i_0] [i_1] [i_3]))));
                        var_10 = max(((min((arr_0 [i_0]), (arr_0 [i_0])))), (min(((min((arr_9 [i_3] [i_0] [i_0] [i_0]), -74))), (max(5306, 0)))));
                        var_11 = -3205715217564270317;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_12 = (max(var_12, (arr_0 [i_4])));
                        var_13 = (min((var_1 ^ var_8), var_1));
                        arr_15 [i_0] [i_0] [i_2] [i_4] = 3681405671;
                    }
                    var_14 = ((5295 ^ (-127 - 1)));
                    var_15 = ((-(max((arr_5 [i_0] [i_1] [i_2]), var_3))));
                }
            }
        }
    }
    var_16 = (min(var_16, ((max(2147483635, 129024)))));
    #pragma endscop
}
