/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min((min((var_7 + 18446744073709551608), ((min(var_0, -34))))), var_6)))));
    var_13 = 240;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [15] = (!7);
                    var_14 = ((((((((var_3 ? var_10 : 18446744073709551604))) ? var_7 : (18446744073709551603 | 15167395590362990837)))) ? (((((var_7 ? (-9223372036854775807 - 1) : var_5))) ? ((max(1732056770, var_2))) : (max(65535, 26)))) : (max((((arr_6 [i_2] [i_0] [i_0] [i_0]) - var_8)), (((14387989321021636069 ? 46419 : var_0)))))));
                    var_15 ^= (var_4 ? var_5 : var_11);
                }
            }
        }
    }
    var_16 = (((max(((min(119, (-2147483647 - 1)))), ((-1854280667 ? var_4 : 38))))) ? (((((((7334 ? 4058754752687915549 : -1617628661045926718))) || 19117)))) : 13728609087467757338);
    #pragma endscop
}
