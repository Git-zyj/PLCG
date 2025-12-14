/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_12 || ((min(95, 4294967168))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 &= var_1;
                var_22 ^= (((((((~(arr_7 [i_0] [i_0] [1])))) ? (arr_1 [i_0]) : (~61))) ^ ((min(-61, (0 || 14691))))));
                var_23 = (max(var_23, ((min((min((((arr_3 [i_0] [i_1]) ? 61 : var_17)), ((min(var_18, (arr_7 [4] [i_0] [11])))))), (((arr_5 [i_0]) ? var_5 : (arr_7 [1] [1] [1]))))))));
            }
        }
    }
    var_24 = (~var_13);

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_25 = (min((((((18446744073709551615 ? (arr_9 [i_2 - 1] [i_2 - 1]) : (arr_8 [1])))) || (min(0, var_7)))), (((var_16 ^ var_16) || (min(var_18, (arr_9 [1] [2])))))));
        var_26 = var_8;
    }
    var_27 = ((((min(110, 0))) ? var_9 : ((min(var_13, (76 / 357569927))))));
    #pragma endscop
}
