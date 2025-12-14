/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_6 >= var_0) ? -1403802824 : (((((var_3 ? 0 : 25)) != (!-5114180197593359069))))));
    var_19 = 1583066771049183465;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_20 = ((((min(6008429644291195655, 459321223))) <= (((!var_10) ? ((47 ^ (arr_8 [7] [i_0]))) : (max(1487469168557323049, var_13))))));
                            var_21 = ((((arr_9 [i_2 + 4] [i_0 - 2]) >= (arr_9 [i_2 + 1] [i_0 - 3]))));
                        }
                    }
                }
                var_22 += (((((arr_9 [i_0 + 1] [i_0 - 1]) ? (arr_9 [i_0 + 1] [i_0 - 1]) : (arr_9 [i_0 + 1] [i_0 - 3]))) - var_10));
                var_23 = (arr_8 [1] [i_1]);
            }
        }
    }
    var_24 = var_16;
    var_25 = (min((min(var_11, (!65519))), (max(var_17, (var_7 != var_0)))));
    #pragma endscop
}
