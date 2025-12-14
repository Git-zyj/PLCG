/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(15823, 0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 |= (((arr_2 [i_0] [i_0]) + 0));
        var_21 = ((0 ? 1 : 1));
        var_22 = (((1984553225 ? 0 : -1)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 |= (min((((((arr_0 [i_1] [i_1]) + 9223372036854775807)) << 1)), (1 <= 1)));
        var_24 = (max(var_24, (min(((~((18446744073709551615 ? 0 : (arr_3 [i_1] [i_1]))))), (arr_1 [i_1])))));
    }
    var_25 -= ((6 ? 1 : ((var_9 ? -1 : (2 & 1)))));
    var_26 = (~var_5);
    var_27 -= (~var_14);
    #pragma endscop
}
