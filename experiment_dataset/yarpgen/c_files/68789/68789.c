/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((min((4503582447501312 ^ var_6), -var_7)))));
    var_14 = min(((~((18442240491262050304 ? var_0 : var_10)))), ((-65535 ? (!-1) : 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 *= (min(4503582447501312, 14563));
                var_16 = ((((min(((-(arr_1 [i_1] [i_0]))), ((min(1, -8)))))) ? (((((min(0, 4503582447501307))) && (-502765110 + 1)))) : ((((((arr_5 [i_0] [i_1] [i_0]) ? var_7 : (arr_3 [i_0] [i_1])))) ? ((-502765110 ? 0 : 1)) : ((~(arr_5 [i_0] [i_0] [i_0])))))));
                arr_7 [i_0] [i_0] [i_1] = ((-(((!(((3264521057044598357 ? var_3 : (arr_5 [i_0] [i_1] [i_1])))))))));
            }
        }
    }
    var_17 *= ((~(min((((var_5 ? var_0 : var_10))), ((2142102274226325704 ? 4503582447501312 : 2147483647))))));
    #pragma endscop
}
