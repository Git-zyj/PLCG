/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (max((max((((arr_6 [i_0] [i_0] [i_1 - 1] [i_0]) ? (arr_1 [i_0]) : var_12)), (!var_12))), (((min((arr_5 [i_0] [i_0] [i_2]), (arr_3 [i_0])))))));
                    var_19 ^= (((arr_4 [i_2]) ? (min((arr_7 [i_0] [i_1 + 2] [i_2]), (~var_1))) : ((max(var_11, (arr_4 [i_2]))))));
                    var_20 = min(-25163, 11341);
                    arr_9 [i_0] [i_0] = (min((max((~6144), (arr_5 [i_0] [i_1] [i_2]))), ((((max((arr_2 [i_0] [i_1] [i_2]), var_15))) ? ((max(var_15, (arr_3 [i_0])))) : (arr_2 [i_1 - 2] [i_2] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
