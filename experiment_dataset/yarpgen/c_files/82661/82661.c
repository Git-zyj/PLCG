/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!var_11) / (max(4332524825654997310, var_11))))) ? (!4332524825654997328) : (((!((max(var_3, var_0)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) <= (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = 14114219248054554267;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            {
                arr_8 [i_2] = ((max(var_5, ((var_5 ? var_4 : 5436567314694747835)))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_16 += (arr_13 [i_1] [i_3]);
                                var_17 = var_9;
                            }
                        }
                    }
                }
                arr_18 [i_1] [i_2] = (max(((max((arr_4 [i_2 - 2]), (min(var_4, -2091435110))))), ((var_6 ? var_12 : 0))));
            }
        }
    }
    var_18 = (min(var_18, ((((var_4 ? var_3 : var_3))))));
    #pragma endscop
}
