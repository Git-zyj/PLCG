/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 ^= ((0 == (((arr_3 [2] [i_1 + 3]) ? ((min(117, var_6))) : (!var_15)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_22 &= ((((((((arr_8 [i_0] [i_0] [1] [i_3]) < var_8)) ? 4008546482724370868 : (~var_17)))) ? (var_3 + var_10) : var_1));
                            arr_12 [i_0] = ((((max((arr_4 [i_1 - 1]), (max(4008546482724370868, var_14))))) ? 4008546482724370868 : (max((var_19 % 18446744073709551615), (((var_11 ? (arr_4 [i_1 + 2]) : 0)))))));
                        }
                    }
                }
            }
        }
    }
    var_23 &= (max(((((min(var_15, 3492164445))) ^ -4008546482724370868)), (min((((-8800145101029071897 ? var_13 : var_5))), (max(4008546482724370868, var_9))))));
    var_24 = (max(var_24, var_5));
    var_25 -= ((((var_0 ? var_2 : (var_7 * var_15)))) & var_0);
    #pragma endscop
}
