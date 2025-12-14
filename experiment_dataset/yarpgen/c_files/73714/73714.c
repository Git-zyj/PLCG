/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? (((var_7 <= var_7) ? var_4 : (7 % var_4))) : (((((21321 ? 7 : var_6))) ? 2078480269 : -4194240))));
    var_14 = (max(((((6575 ? var_9 : var_8)) ^ (((6322582225139743484 ? var_7 : var_5))))), var_9));
    var_15 = ((var_0 >= (((-18246 ^ var_12) / ((1 ? var_8 : 15423))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_5 [i_0])));
                arr_7 [i_1] = ((arr_6 [i_1] [i_1] [i_1 + 1]) >> (-var_1 - 565444571));
                var_17 = ((-(arr_1 [i_1])));
            }
        }
    }
    var_18 = ((((-(!var_10))) / (((var_6 != (var_6 <= var_11))))));
    #pragma endscop
}
