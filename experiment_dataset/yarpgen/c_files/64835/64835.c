/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = 2147483646;
                    var_15 = 9223372036854775807;
                    var_16 = (min((((var_3 || ((((arr_5 [15] [i_2]) ? var_10 : var_8)))))), (max(((((-9223372036854775807 - 1) || (arr_4 [i_2])))), (max(var_5, (arr_4 [i_0])))))));
                    var_17 = (max(var_17, ((min((((((var_5 ? (arr_1 [i_2]) : 2147483646))) || ((min((arr_7 [i_2] [5] [i_1] [5]), (arr_2 [i_0] [i_0])))))), (((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1]) || (arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_18 = (max(var_18, (((var_3 ? ((var_1 ? 2304562935 : var_2)) : var_2)))));
    var_19 *= (((min(var_7, 9223372036854775789))));
    var_20 = (min(var_20, ((((((var_12 ? (min(2304562945, 1637007099)) : var_8))) ? ((-652366599 ? -var_3 : (max(2304562945, 18446744073709551615)))) : var_3)))));
    var_21 = (((((((min(18446744073709551615, 1115203011))) ? 1230995559 : var_7))) || ((min((var_2 || var_4), 1726919647)))));
    #pragma endscop
}
