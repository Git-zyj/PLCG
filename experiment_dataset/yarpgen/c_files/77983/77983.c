/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77983
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
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [16] = ((((!((max(0, (arr_4 [9] [9] [i_2 + 1])))))) ? 0 : ((max(((min((arr_4 [i_0] [i_1] [i_2]), (arr_3 [10])))), (max(3243138228, 4294967295)))))));
                    var_10 += (min((max(-2, (((arr_0 [18] [18]) ^ (arr_2 [i_0] [i_1] [i_2 + 1]))))), ((~((~(arr_2 [i_0] [i_1] [i_2])))))));
                }
            }
        }
    }
    var_11 = (max(44503, 28));
    var_12 = (max(var_12, var_6));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_9 [i_3] = 13;
        var_13 += ((var_3 < (arr_8 [i_3])));
    }
    var_14 = var_8;
    #pragma endscop
}
