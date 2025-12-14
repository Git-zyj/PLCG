/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] [i_0] [i_0] = (min((arr_8 [2] [2] [i_2] [i_3]), ((((arr_6 [i_0 + 1] [i_3 + 1] [i_0 + 1] [i_0 + 1]) < 1137142622)))));
                            arr_11 [i_0] [i_1] [i_3] [i_0] = (max(((((((arr_0 [i_0 - 1]) ? -5318878429854618920 : 1790040118855770972))) ? 5318878429854618919 : (((arr_4 [i_0] [i_0 - 1]) + (arr_2 [8]))))), ((((min((arr_8 [6] [i_1] [i_1] [i_3]), (arr_7 [i_0] [i_0] [7] [i_0] [i_0 + 1]))) - (var_1 == var_7))))));
                        }
                    }
                }
                arr_12 [i_0] = (min((arr_9 [i_0] [i_1] [i_1] [i_0]), var_4));
            }
        }
    }
    var_10 = (max(var_10, (~4294967295)));
    var_11 = var_6;
    #pragma endscop
}
