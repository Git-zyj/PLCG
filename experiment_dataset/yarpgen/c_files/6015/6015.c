/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 -= (((((((max((arr_6 [i_0] [i_0] [i_0]), 1706065379)) != (max(0, var_4)))))) + (((((var_3 ? var_10 : var_11))) ? 91 : ((var_6 ? var_11 : (arr_0 [6])))))));
                var_13 = ((((max((max(var_0, (arr_5 [i_0]))), (((var_6 ? (arr_0 [i_0]) : -25656)))))) ? (((((var_10 ? (arr_3 [i_0]) : var_10))) ? 255 : (var_4 + var_9))) : var_3));
                arr_7 [i_1] [i_0] [0] = (max((((((((-32767 - 1) % (arr_2 [i_1] [i_1])))) && var_10))), ((-var_5 ? ((var_4 ? var_4 : var_0)) : (arr_2 [1] [i_0])))));
                var_14 ^= (((((var_10 ? var_8 : var_6)))) ? (max(((~(arr_5 [8]))), (((var_1 ? var_1 : var_8))))) : (((((arr_4 [i_0] [i_1] [18]) ? var_5 : var_6)) - var_4)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((max((119 << 0), (arr_0 [i_3])))) ? (((239 ? ((0 ? (arr_2 [18] [i_3]) : var_4)) : var_9))) : (max((arr_9 [i_2 - 1]), (arr_0 [i_3]))))))));
                                var_16 = (max(var_16, (((!(((0 ? 252 : 4))))))));
                                arr_17 [i_0] [3] [i_2] [i_1] [i_3] = (1460660792 == 164);
                                var_17 |= 34174;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max((((((max(var_8, var_7)))) + (var_1 | 6094866382123397127))), (((7503263627178200139 ? -87 : 0)))));
    #pragma endscop
}
