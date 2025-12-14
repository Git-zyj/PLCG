/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = 26;
                var_15 = (((((var_1 & (arr_3 [i_0] [1] [i_1 + 2])))) ? (((((arr_0 [i_0] [i_1 - 1]) > -18)))) : ((((!(arr_2 [i_0] [i_0]))) ? ((((arr_3 [i_0] [i_1] [i_1]) ? var_0 : (arr_3 [i_1] [7] [7])))) : ((-26 ? 4424745125909854529 : var_1))))));
                var_16 = ((var_11 ? var_11 : (((((var_3 ? -26 : var_1))) ? (arr_2 [i_1 + 1] [i_1]) : (((arr_2 [i_0] [i_1]) ? var_1 : 1))))));
            }
        }
    }
    var_17 = (var_13 || var_3);
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_18 -= -27;
                var_19 = ((((((0 ? 37 : (arr_4 [i_2])))) ? (var_9 || var_10) : (((-11 != (arr_8 [i_2] [i_2] [i_2])))))) & (((!(((var_6 ? var_8 : (arr_7 [i_2 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
