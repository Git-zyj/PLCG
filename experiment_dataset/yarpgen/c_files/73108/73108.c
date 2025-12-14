/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_11;
    var_14 = (max(var_14, ((max((max(var_2, -var_5)), (max(var_6, (!var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (min((((!(~var_10)))), (max(var_12, var_5))));
                var_15 ^= min(3128079753, 1459565356323295887);
                var_16 = max((max(var_8, 0)), (((~(((!(arr_1 [i_0]))))))));
                var_17 = (min(143, -2));
            }
        }
    }
    var_18 *= var_4;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                var_19 = max(((min(((min((arr_6 [i_2]), -1))), (min(1821049352, 1))))), ((~(max(16445103020644323440, 4)))));
                var_20 -= (((-(arr_7 [i_3 + 1] [i_3]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_21 = (min(((min((min(25779, 23670)), (((!(arr_6 [i_2]))))))), ((min(var_3, -5)))));
                            var_22 = (max(((min((arr_6 [i_2 + 3]), var_5))), ((~((min(var_4, 77)))))));
                            var_23 += ((~(min(var_2, var_4))));
                        }
                    }
                }
                arr_15 [i_2] [i_2] &= ((~(min((arr_11 [i_2 + 1]), var_3))));
                arr_16 [i_3] [i_2 + 2] [i_2] = ((~((-(arr_13 [i_3 + 1] [i_2 + 2] [i_2 - 1] [i_2 + 3])))));
            }
        }
    }
    #pragma endscop
}
