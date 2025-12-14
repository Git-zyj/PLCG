/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max((arr_1 [i_0] [i_0]), -230629089));
        var_12 = (((arr_0 [i_0] [i_0]) & ((-230629089 ? -230629089 : 230629089))));
        var_13 -= 10899;
    }
    var_14 = var_2;
    var_15 = ((((-10899 ? ((-10900 ? 248 : 2147483647)) : (-10906 ^ 1)))) ? ((~(-230629089 ^ -10907))) : 2147483647);
    var_16 = ((var_0 || ((max(((var_4 ? 10899 : 2147483647)), ((max(-10901, 10906))))))));
    var_17 -= ((min((!10899), (max(1, 1)))));
    #pragma endscop
}
