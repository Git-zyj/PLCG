/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = (-5946865662434163757 ? (arr_3 [i_0]) : (max(5946865662434163776, (!-5946865662434163757))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 += ((((((arr_9 [i_1]) ? (arr_0 [i_3]) : (arr_0 [i_1])))) ? (((arr_5 [i_2] [i_1] [i_4]) / 3166548146)) : (((arr_0 [i_3]) ? (arr_5 [i_2] [1] [i_2]) : (arr_0 [i_0])))));
                                var_21 = max(0, (-5946865662434163746 ^ -5853816532962734442));
                                var_22 = (arr_5 [i_1] [i_1] [i_1]);
                                arr_17 [i_1] [i_3] [i_3] [i_3] [i_2] = (arr_3 [5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 += (max(1, var_4));
    #pragma endscop
}
