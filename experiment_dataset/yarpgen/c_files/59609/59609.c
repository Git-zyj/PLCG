/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max(((max(var_8, (-9223372036854775807 - 1)))), ((18024877307729101997 << (((10684601343289258129 ^ -2038257356328795214) - 8642957390177170170))))));
    var_20 = (!4384295889992740054);
    var_21 *= var_10;
    var_22 -= var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [13] = ((4384295889992740053 ? 7000181825728717366 : (arr_2 [i_0] [i_0])));
        var_23 -= (!14062448183716811549);
    }
    #pragma endscop
}
