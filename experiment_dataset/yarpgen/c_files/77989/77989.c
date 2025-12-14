/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2135606373;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((~(!var_10)));
                    var_17 = (min(((~(arr_7 [i_0] [i_0] [i_0] [i_0]))), ((~(arr_7 [i_0] [i_0] [i_1 - 3] [i_2])))));
                }
            }
        }
        var_18 = (min(var_18, ((max((1441542185711292225 || 32735), var_14)))));
        var_19 &= 2192474838827585265;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_20 = 8191;
                                var_21 = min((min(3121722045, (!-64))), (((max(5735326253756777958, 50125)))));
                                var_22 = ((~((57342 ? 57344 : 31))));
                                var_23 = ((((max(25982, 3587115956))) ? 40 : (~1)));
                            }
                        }
                    }
                    var_24 = 12877919835320995479;
                }
            }
        }
    }
    #pragma endscop
}
