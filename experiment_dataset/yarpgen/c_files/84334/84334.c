/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(1882894153, 49152));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((!(((-(!18446744073709551614))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] = ((!((min((max(71, 12)), (max(18446744073709551615, 3)))))));
                            arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_1] [i_1] [i_3 - 1] = (min(1, ((min(-19452, 255)))));
                            arr_13 [i_3 + 1] [11] [1] [11] = -8200;
                        }
                    }
                }
                var_22 ^= (min(((min(737312559, ((min(-8200, 1)))))), ((~(min(-2077421066, 18446744073709551614))))));
            }
        }
    }
    var_23 = 30;
    var_24 = min(1, 88);
    #pragma endscop
}
