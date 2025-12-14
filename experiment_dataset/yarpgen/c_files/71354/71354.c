/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_6 + -30073) - (min((-30081 - var_6), -30073))));
    var_16 = -30081;
    var_17 = 1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 *= (min((((-(arr_9 [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_3] [i_2 - 3])))), ((var_3 / (arr_10 [i_0] [i_1] [i_2 - 2] [i_1] [i_4])))));
                                var_19 = (max((((min((arr_1 [i_0]), var_8)))), (((arr_5 [i_0] [i_1] [i_2]) ? (min(2068689195, 1)) : ((((arr_7 [i_0] [i_1] [i_2] [6] [i_4]) ? 0 : 30081)))))));
                                var_20 = (((-30096 ? (((arr_2 [i_0] [19]) >> (arr_11 [i_0] [i_1] [i_1] [i_3] [i_1]))) : 30096)));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = (min(var_0, ((min((0 * var_6), 1)))));
                                var_21 = (((((253 * 12955) * (max(65535, (arr_8 [i_0] [i_1] [i_2] [19] [i_3] [18])))))) ? var_12 : (min((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]) | 1222696718)), -30050)));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [7] [i_2] = (i_2 % 2 == zero) ? ((((min((max(var_2, (arr_1 [i_0]))), (2226278111 >= var_4))) << (((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_2 - 1]) - 1736469084))))) : ((((min((max(var_2, (arr_1 [i_0]))), (2226278111 >= var_4))) << (((((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_2 - 1]) - 1736469084)) + 358530552)))));
                }
            }
        }
        var_22 = (var_10 || -30080);
        var_23 = (min(((+(((arr_5 [i_0] [10] [i_0]) ? 255 : (arr_8 [i_0] [i_0] [i_0] [i_0] [16] [i_0]))))), 33609));
    }
    #pragma endscop
}
