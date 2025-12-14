/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(((max(-544876829, (!544876828)))), (max(var_3, (~4128768))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_1] [i_1] [16] [i_1] [i_1] [i_1] = 36191;
                                var_14 = ((((max(((((var_3 + 2147483647) >> (((arr_0 [1]) - 4528808999104413271))))), (4290838528 + -32754)))) ? (-74 % 544876828) : ((max((arr_4 [i_0 - 1]), (-32767 - 1))))));
                            }
                        }
                    }
                    arr_14 [i_1] = ((~(arr_4 [i_0 + 1])));
                    arr_15 [i_0] [i_1] = ((((~0) | -174018402)));
                }
            }
        }
    }
    var_15 |= (!-100);
    var_16 = (max(var_12, ((var_1 <= (((max(var_11, var_10))))))));
    #pragma endscop
}
