/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_11 = (min((((((arr_6 [i_0] [i_1] [i_2]) + 2147483647)) << (var_4 - 24698))), (((arr_6 [i_0] [i_1] [i_0]) * (arr_6 [i_2] [i_2] [i_2])))));
                    var_12 = (!65535);
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_4] [i_3] [i_1] [i_0] = (-((((!(arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] [i_5] [i_5]))) ? ((var_8 ? (arr_9 [i_0] [i_3] [i_5]) : (arr_8 [i_5] [i_4] [i_3]))) : (arr_13 [i_0] [i_1] [i_0] [i_1] [i_5]))));
                                var_13 = (65529 ? ((((min(15, 40990))) ? 1 : 4)) : (min((arr_7 [i_0]), (arr_7 [i_1]))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_1] [i_1] = -18;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1] [i_6] [i_1] = -140937061;
                            var_14 = (((19 % (arr_7 [i_1]))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((((126 ? var_7 : var_5))) ? 37248 : (var_5 || var_8)))) ? (min(-var_1, ((max(65533, 27496))))) : ((((((-2147483647 - 1) < var_9)) && var_7))));
    #pragma endscop
}
