/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((~110), 536870908));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (((((((arr_1 [i_3]) + 2147483647)) << (59574 - 59574))) != ((((arr_2 [i_0] [i_2] [i_4]) && ((((arr_3 [i_0] [i_1] [i_0]) ? (arr_0 [i_0]) : 116))))))));
                                var_22 |= ((+(((var_7 || -1) << (((min((arr_5 [i_0] [i_0] [i_2]), 2112525864)) - 14664))))));
                                var_23 = (-31669 % 3758096365);
                                var_24 -= 120;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_25 = -2112525865;
                            arr_18 [i_0] = max((min((min((arr_5 [17] [i_1] [i_6]), 536870930)), ((-9479 ? (arr_0 [i_5]) : var_10)))), (max(((max(var_6, 65535))), var_18)));
                            var_26 = (max((max(0, -14)), (41 || 536870930)));
                        }
                    }
                }
                arr_19 [i_1] [i_1] [i_1] = var_14;
            }
        }
    }
    #pragma endscop
}
