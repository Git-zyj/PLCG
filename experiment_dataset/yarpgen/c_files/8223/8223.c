/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((-13490 ? var_5 : 7466236411894400288))) ? ((934831540 ? var_19 : 10980507661815151327)) : (var_10 || 7466236411894400288))));
    var_21 = ((9217282541051066432 ? 1214252518 : 7466236411894400276));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_22 -= (((((2450608217 / 9229461532658485183) / ((var_5 ? var_11 : var_4)))) * (((9229461532658485183 ? ((9217282541051066432 ? 1844359078 : (arr_3 [0] [0]))) : (((var_1 ? (arr_3 [4] [4]) : var_0))))))));
                var_23 ^= ((17782 ? (((((1 ? 1844359079 : -2820274566817010272))) ? ((-2820274566817010272 ? 7466236411894400288 : var_1)) : (((65535 ? var_2 : 1))))) : (((((arr_3 [6] [6]) == var_1))))));
            }
        }
    }
    var_24 = ((((((var_2 ? var_6 : var_6))) * ((2795454555 ? var_12 : 18446744073709551615)))));
    #pragma endscop
}
