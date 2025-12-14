/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((3619125517082662633 == var_8) ^ var_5))) ? var_10 : (((max(var_0, var_9)) << (((3416877618313477560 != var_11) - 1))))));
    var_13 = ((3416877618313477582 ? 0 : -30401));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = -7586041571033811739;
                arr_5 [i_0] [10] &= (((((16185341308655249104 > 96) ? (arr_3 [4]) : (((arr_2 [14]) >> (((arr_2 [10]) - 93)))))) <= 3));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (arr_4 [i_2 - 2] [i_2] [i_0]);
                                arr_15 [0] [i_3] [i_0] [1] [i_0] = ((((3416877618313477566 ? -64 : 1)) != (114688 != -43)));
                                arr_16 [i_0] [i_1] [i_0] = (min(33847, 17702237652502362496));
                            }
                        }
                    }
                }
                arr_17 [i_0] = ((~((max((!8), (1918532810 != -121))))));
            }
        }
    }
    #pragma endscop
}
