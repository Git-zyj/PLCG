/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(4194303, ((var_4 ? 1 : -27253)))) + 2147483647)) >> (2363117149865345364 - 2363117149865345335)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((var_12 < 0) && 5415));
        var_14 = (max(var_14, (((-((~(arr_2 [i_0] [i_0]))))))));
        arr_4 [17] = ((-(arr_2 [i_0 - 3] [i_0 + 2])));
        arr_5 [9] = ((1 ^ ((1 >> (arr_2 [i_0] [i_0])))));
        var_15 *= (13529 != -24122);
    }
    var_16 = (((-(!7072))));
    var_17 = ((-1555415998 ? (max(((384 ? -540229336416560990 : 16767294745014140645)), (178 >= -6))) : 25912));
    #pragma endscop
}
