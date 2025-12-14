/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 - 1] [i_1] = (((((min(var_17, -7193849801544087538)) <= (min(var_7, 7193849801544087568)))) ? (((arr_3 [i_1]) ? 2279912685210738143 : var_12)) : ((((7193849801544087561 ? 4294967273 : 0))))));
                arr_7 [i_1] = (((-7193849801544087540 ? ((min(var_3, 32704))) : -var_8)));
                var_18 = 108;
            }
        }
    }
    var_19 = (((((((var_17 + 2147483647) >> (var_14 - 549605914))))) * var_7));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_20 = (min((arr_11 [7] [i_2]), ((-(max((-9223372036854775807 - 1), var_15))))));
                var_21 = arr_8 [i_2] [18];
            }
        }
    }
    var_22 = ((-((min(65528, ((max(155, var_16))))))));
    #pragma endscop
}
