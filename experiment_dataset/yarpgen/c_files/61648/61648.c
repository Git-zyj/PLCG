/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 -= (arr_1 [i_1]);
                arr_4 [i_0] [i_0] [i_1] = (((var_4 - -4245) * ((((((((arr_0 [i_0] [19]) ? 0 : var_3))) > (4294967295 % 4)))))));
                var_14 -= (min(-var_12, 1));
                var_15 = var_5;
            }
        }
    }
    var_16 = var_10;
    var_17 = (((((var_4 | var_3) >> (((var_1 & var_4) - 269623277))))) < (((((1811212563 ? 1 : 60))) ? 52 : ((var_5 ? var_3 : var_0)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            {
                arr_10 [i_2] [8] [10] |= (((((~(var_3 || var_10)))) ? (((-(arr_8 [i_3])))) : (((50331648 != var_2) ? (~var_9) : (2193895007 <= var_12)))));
                var_18 = (min(var_18, (((((~4294967295) ? -4055761421 : 4294967280))))));
                arr_11 [i_2] [i_2] &= var_7;
            }
        }
    }
    #pragma endscop
}
