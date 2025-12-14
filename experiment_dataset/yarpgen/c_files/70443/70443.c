/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_3, 1465398799)))) + var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-(arr_0 [i_0])));
                var_12 = ((((-4 != (~var_7))) ? -15707168596433140240 : (var_4 >= var_5)));
                arr_6 [i_0] [i_0] [i_1] = ((~((15707168596433140240 | (4 >= 973232480)))));
                arr_7 [i_1] = (min((1 == var_9), var_4));
                var_13 = ((arr_4 [i_1] [i_0] [i_0]) ? ((var_2 ? (arr_4 [i_0] [i_1] [i_0]) : (arr_4 [12] [i_1] [12]))) : (((var_0 != (arr_4 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_14 = (((((3386446182 ? 1023 : 165)))) + var_10);
    var_15 += (min((159 + 98), ((((var_8 ? var_0 : var_9)) + var_0))));
    #pragma endscop
}
