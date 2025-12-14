/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        arr_3 [i_0] [i_0] = (15 | 255);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (15 >= 1073741823);
        arr_7 [i_1] [i_1] = (max(-16, -89));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_3] [i_1] [i_3] = ((min(54090, -2733713434105997521)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_15 = min((((min(4294967279, 1580195285)))), 1);
                                var_16 += 6904327314013131065;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 |= (max(6590522303318571334, ((max((min(0, 3038245867)), 11473)))));
                                arr_24 [i_1] = (max(((max((35184372088831 || 15), -8267970553920259665))), 6706530685726888571));
                            }
                        }
                    }
                    var_18 = (min(((min(1288404528, (-9223372036854775807 - 1)))), (23421 && 1)));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        var_19 = (max(-1997360757, -1536387259));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_20 = (-717273431 % 1);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_21 = -880276138;
                            arr_36 [i_12] [i_9] [i_12] [i_9] [i_9] [i_9] [i_12] = 3217166818;
                        }
                        var_22 = (54090 || 18446744073709551615);
                    }
                }
            }
            var_23 *= 9184;
        }
        arr_37 [i_8] [i_8] |= (((max(-1, 255))));
        arr_38 [i_8] [9] = (max((max(1, 255)), 2));
    }
    var_24 = ((-1 != (min((max(-2733713434105997521, 6590522303318571334)), 11446))));
    #pragma endscop
}
