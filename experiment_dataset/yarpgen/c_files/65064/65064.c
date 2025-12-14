/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_0;
    var_12 = ((((((((var_8 ? 17614 : 49331))) + (4815558519561977758 - 15025)))) ? ((11687 ? 47737 : -19074)) : (((max(273108144, var_3)) & ((32767 ? 1646326698 : -21377))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 2] = ((18446744073709551615 ? 37507 : (arr_0 [i_0 - 1])));
        var_13 = arr_1 [i_0] [i_0];
    }
    var_14 = (~var_4);
    #pragma endscop
}
