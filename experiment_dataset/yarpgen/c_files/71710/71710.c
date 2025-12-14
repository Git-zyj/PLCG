/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((~4003123302796735850) ? 4856471642572816390 : (119 ^ -4003123302796735851)))) ? 13590272431136735225 : -244801822));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = 0;
                            var_13 = (max(var_13, ((max(0, (max((arr_2 [i_1 + 1]), (arr_11 [i_0] [i_1] [i_1 + 1] [i_2 - 1] [i_2]))))))));
                            var_14 += ((-1 ? ((((-3609654066594920525 || (arr_8 [i_0] [i_0] [i_0] [i_0]))))) : 4003123302796735850));
                            arr_12 [i_0] [i_2] [i_2] = max((((arr_6 [i_2 + 2] [i_1 + 1]) ? (arr_6 [i_2 + 1] [i_1 + 1]) : (arr_6 [i_2 - 2] [i_1 + 1]))), ((-(arr_6 [i_2 + 3] [i_1 + 1]))));
                        }
                    }
                }
                var_15 = (!14248);
            }
        }
    }
    var_16 = (((min(var_1, (var_10 <= var_2)))) ? ((~((var_6 ? var_9 : 13590272431136735225)))) : (((((4076279090 << (110 - 105)))) ? ((var_0 ? 15681547922586131993 : var_6)) : var_8)));
    #pragma endscop
}
