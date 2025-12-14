/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_14 = ((~(max(var_12, ((min(var_7, (arr_1 [i_0]))))))));
                                var_15 ^= (min(var_11, (arr_10 [i_2] [6])));
                                var_16 = (max(var_16, ((max(1, (max(var_7, (arr_1 [i_3]))))))));
                            }
                            var_17 = ((-(((arr_11 [i_0] [i_2] [10] [17] [10] [i_0]) & (max(var_2, (arr_2 [i_0 + 3] [i_3])))))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (max((((((min(var_1, (arr_13 [i_0 + 3] [i_0] [i_0] [i_1])))) > (557173690602491544 >= -226718826)))), ((+(max((arr_0 [i_0]), var_13))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_18 = var_7;
                                arr_23 [i_0] [5] [i_0] = ((((((min(var_9, (arr_6 [i_7 - 2] [i_6] [i_1])))) & var_11))) || ((max((arr_22 [i_0] [16] [19] [i_5] [15] [i_7 + 1]), ((max(var_3, var_9)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((max(115, -21029))) | (32 * -123)));
    #pragma endscop
}
