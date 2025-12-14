/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_6 == var_0) >= var_1));
    var_12 = ((((~(13934346784610193773 == 4929))) > (var_8 == -var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 += ((~(max((arr_3 [i_2 - 3]), var_9))));
                            var_14 = var_3;
                            var_15 = ((arr_5 [i_2 - 2]) < (arr_5 [i_2 - 2]));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, (arr_2 [i_1])));
                            var_17 = (max(var_17, (((((((var_3 - (arr_9 [i_0]))))) == (((!((13934346784610193773 < (arr_1 [i_1] [i_4])))))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
