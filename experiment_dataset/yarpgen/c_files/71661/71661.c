/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((-(((arr_1 [i_1 + 1] [i_1 - 1]) ? (arr_7 [6] [i_0] [i_0]) : (~-9223372036854775791))))))));
                arr_8 [0] [i_1] |= ((((((-2147483647 - 1) ? (((arr_6 [5]) ? 38598 : 18446744073709551615)) : 1))) ? 38598 : (arr_4 [i_0] [i_0] [i_0])));
                var_19 = (((((((var_0 || (arr_1 [2] [2]))) <= 239)))));
                var_20 = (min(var_20, var_5));
            }
        }
    }
    var_21 = (((((min(var_2, 255))) ? (max(var_7, var_10)) : (var_16 || var_16))));
    #pragma endscop
}
