/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (((~7340032) ? ((4287627255 ? 7340032 : 4287627264)) : ((((((var_2 | (arr_1 [i_0] [i_0]))) != (489756203 <= 35086)))))));
                    var_19 = max(((18446744073709551601 ? -27483 : 25)), (((!(arr_5 [i_0] [i_1 + 1])))));
                    arr_9 [i_0] [i_2] [i_2] = (((arr_6 [i_2]) | (((arr_1 [i_1 + 1] [i_1 + 1]) ? ((max(var_6, (arr_0 [i_0])))) : (!var_4)))));
                }
            }
        }
    }
    var_20 = (min(var_20, ((max(((((var_9 ? var_17 : var_6)) >> (var_6 - 22512))), (min(-9022410053677572555, -489756203)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_21 -= ((((((arr_7 [i_3]) ? (arr_7 [i_3]) : (arr_7 [i_3])))) > ((9623107015246107451 ? 18446744073709551607 : -16887))));
                var_22 &= (((((((max(var_9, var_1))) ? var_15 : (arr_7 [1])))) > 7827443617177235900));
            }
        }
    }
    var_23 = (((--31) / ((-((234 ? 16 : 10754))))));
    var_24 = var_10;
    #pragma endscop
}
