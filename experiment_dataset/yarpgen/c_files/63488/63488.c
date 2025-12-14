/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(var_13, var_0))));
    var_16 = var_12;
    var_17 |= (((((var_5 | (var_13 + var_10)))) ? var_1 : (min(var_4, var_14))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((((arr_2 [i_0]) | (((arr_7 [i_1] [i_1] [i_1] [i_1]) ? (arr_2 [i_0]) : var_3)))) % (((var_2 != ((((!(arr_0 [i_0 + 3]))))))))));
                    var_19 = ((((min(var_8, (arr_0 [i_0 + 3])))) & (max(((var_0 ? var_7 : (arr_3 [i_0] [i_1] [i_2]))), (arr_3 [i_0] [i_1] [i_0])))));
                    var_20 ^= (((arr_4 [i_0] [i_1]) ? (arr_0 [i_0 + 3]) : (arr_7 [i_2] [17] [i_1] [i_0])));
                    arr_9 [i_0] [11] [i_0] = ((((((arr_6 [i_0] [i_0 + 2] [i_0 + 2]) ? var_14 : var_10))) == (((arr_3 [i_0 - 1] [i_0 + 2] [i_0 + 2]) | (arr_5 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
