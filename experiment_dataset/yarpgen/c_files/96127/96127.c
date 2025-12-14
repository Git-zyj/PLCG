/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 4180908474;
    var_19 = 5100082300481068845;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (((((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : var_5)) | (max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_2] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (((114058822 + var_9) % (((((((arr_2 [i_0] [i_0]) ? var_2 : 2833406717))) ? (arr_0 [i_2]) : var_0)))));
                                var_21 = (max((max((arr_0 [i_1]), ((802544991 ? (arr_1 [i_1]) : (arr_4 [i_0] [i_0] [i_3]))))), (((((arr_6 [7] [i_0]) ? (arr_5 [i_3]) : var_13))))));
                                var_22 = var_11;
                                var_23 = (max((arr_1 [i_0]), 205));
                                var_24 *= ((-(arr_8 [i_0] [i_1] [i_3] [i_3])));
                            }
                        }
                    }
                }
                var_25 = (min(1008137569032126569, (((((arr_3 [i_0] [i_0] [i_1]) || var_6)) ? 16947 : ((-4406 ? 1287617755629479608 : 5100082300481068843))))));
            }
        }
    }
    #pragma endscop
}
