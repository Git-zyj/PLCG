/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_3 - var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [8] [i_0] [i_0] [i_0] = (min(1, 1));
                            var_19 ^= ((((min((arr_3 [i_3]), ((max((arr_5 [i_1] [i_2] [i_3]), (arr_8 [i_3] [i_2] [1] [i_3]))))))) ? (((-2951 ? ((((arr_9 [i_3] [i_1] [i_1] [i_2 - 2] [i_1] [i_3]) ? (arr_9 [i_1] [i_1] [i_2 - 1] [i_3] [i_1] [i_1]) : 3968))) : (arr_6 [i_2 + 2] [i_2 - 3] [i_2 - 2])))) : (max(((max((arr_4 [i_3] [4] [i_3]), var_9))), (arr_1 [i_3] [i_3])))));
                        }
                    }
                }
                var_20 = (((min(12, (-32767 - 1))) * ((((((((arr_6 [i_0] [i_1] [i_1]) ? 110 : (arr_4 [7] [i_0] [i_0])))) >= 35184372088320))))));
            }
        }
    }
    var_21 = var_16;
    #pragma endscop
}
