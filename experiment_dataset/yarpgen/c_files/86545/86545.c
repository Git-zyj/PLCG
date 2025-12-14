/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((max(((var_7 ? var_2 : var_10), 64462))));
    var_14 *= (max((((((var_2 ? var_0 : var_6)) == ((var_5 ? var_3 : 64462))))), (max((var_12 & var_12), var_9))));
    var_15 = -var_10;
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 ^= ((((((!(arr_2 [8] [4]))))) == ((520844478 << (-86 + 106)))));
                var_18 = (max(var_18, (((!(arr_2 [i_1 + 1] [12]))))));
                var_19 = (max(var_19, ((max(520844459, 1)))));
                var_20 -= ((520844478 ? 11300384047281151393 : 2147483647));
            }
        }
    }
    #pragma endscop
}
