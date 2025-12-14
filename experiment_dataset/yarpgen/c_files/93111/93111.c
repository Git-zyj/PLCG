/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_2));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] [i_0] = (4294967295 | 917504);

        /* vectorizable */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = 4294967295;
            var_14 = ((var_6 ? (~var_12) : (arr_4 [i_0 - 1] [i_1 - 2])));
            arr_9 [0] [i_1] [i_0] = (917504 * 2147467264);
            var_15 = (arr_1 [i_0]);
        }
        arr_10 [i_0] [i_0] = (((arr_1 [i_0]) < (18446744073709551615 + 0)));
    }
    var_16 = (((var_9 % 1048575) < var_3));
    var_17 = max(4294967271, var_0);
    #pragma endscop
}
