/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((max(5, 1))), var_16));
    var_18 = ((max((min(var_15, var_7)), 65535)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = (min((min(18446744073709551615, var_8)), var_15));
                            var_19 = (max((((min((arr_6 [i_0] [i_0]), var_16)))), (min(((min(1, 0))), (arr_7 [i_0] [i_2] [i_3])))));
                            arr_12 [i_3] [i_2] [i_0] [i_0] [i_1] [i_0] = (max((min(-5836061088811819620, 9223372036854775807)), (min(-2623367562540868504, (arr_5 [i_3])))));
                        }
                    }
                }
                arr_13 [i_0] [0] |= (max((max(var_1, var_9)), ((min((arr_4 [1] [i_1 + 2]), 214)))));
                var_20 = (min(var_20, ((min(9223372036854775786, (min(2328785471359809366, var_5)))))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 = (min(-9223372036854775804, var_11));
                            var_22 = (min((arr_1 [i_5]), 6333427174878691688));
                            var_23 |= ((max(9223372036854775786, -5836061088811819620)));
                            var_24 = (min(1, 8015476207177681696));
                            var_25 ^= min((((max((arr_1 [i_5]), (arr_2 [i_5]))))), ((min(1, 1))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (max((min((max(var_10, var_7)), var_11)), (min((min(9223372036854775807, var_8)), (min(var_3, 20065))))));
    var_27 = var_10;
    #pragma endscop
}
