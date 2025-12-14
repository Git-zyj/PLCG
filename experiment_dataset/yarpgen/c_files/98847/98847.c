/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_7);
    var_21 = (min(var_21, ((var_3 & (((max(var_1, (var_13 || 1)))))))));
    var_22 = ((23623 ? ((max((var_2 && var_19), var_0))) : (!var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_3] [i_2] [i_0] = (max(((((min((arr_6 [i_3] [i_2] [0] [10] [10]), var_12))) ? ((-(arr_2 [i_1] [i_3]))) : (((arr_9 [i_3] [1] [i_1] [i_1] [i_0 + 2] [i_0 + 2]) * (arr_2 [i_0] [i_0]))))), (arr_1 [i_1])));
                            arr_11 [i_0] [i_1] [i_2] [i_1] [4] [i_3] = ((~(max((arr_7 [i_3] [i_1] [1] [i_2] [i_3]), (arr_3 [i_2] [i_3 + 2])))));
                        }
                    }
                }
                var_23 = ((~(arr_9 [1] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])));
                arr_12 [i_0 + 2] &= var_11;
                arr_13 [i_0] [i_0] [i_0] = 0;
                arr_14 [i_0] [i_0] = (arr_5 [i_0] [i_1] [14] [i_1]);
            }
        }
    }
    #pragma endscop
}
