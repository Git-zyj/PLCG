/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((min(var_9, var_5)) + 2147483647)) << (!var_5)));
    var_11 *= ((0 == ((((((-2109249584 ? var_7 : 8))) ? var_8 : (~1))))));
    var_12 = (min(var_12, 66));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (min(var_13, 0));
                var_14 = (((-9223372036854775807 - 1) + (arr_3 [i_1 + 3] [i_1 + 3] [i_1])));
                var_15 = ((((max(var_7, (max(111, -6628710485380825428))))) ? ((18446744073709551600 ? 1617504631 : (((arr_0 [i_0]) << (12845345385849314294 - 12845345385849314286))))) : (max(var_2, (((1 - (arr_2 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
