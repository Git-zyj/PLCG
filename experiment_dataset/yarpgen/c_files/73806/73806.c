/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 -= ((((max(var_5, (244 < var_0)))) ? var_9 : var_16));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((var_6 ? 0 : 1)) % var_0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 = var_9;
                            var_23 = 65524;
                            arr_10 [i_2] [i_0] [i_0 - 1] = ((((((4294967292 ? -11234 : (arr_4 [i_0] [i_0])))) ? 27 : ((min(-1, var_5))))));
                        }
                    }
                }
                var_24 -= (min((var_3 + var_6), -1));
                var_25 += (max(1, ((~((var_12 ? 4 : (arr_3 [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_26 = (((min(((var_7 ? var_18 : 244)), (arr_6 [1] [i_5] [1]))) / ((((32 ? var_4 : var_6)) / var_13))));
                var_27 = (max(((((min(var_8, var_18))) ? var_13 : (~12592827064740579141))), ((((10977007910953559863 && 317391339) || (!216))))));
            }
        }
    }
    var_28 = ((((((var_15 ? var_14 : var_18)) ? var_16 : var_18))));
    #pragma endscop
}
