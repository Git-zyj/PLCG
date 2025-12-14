/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~(~-120)))) ? var_10 : 12652193297938011375));
    var_16 = (max(var_16, (((((min((var_5 / -121), ((-119 ? var_13 : 18446744073709551608))))) ? (((var_13 < var_13) ? (4290073804720347296 > var_10) : (var_7 && 4572507080388813806))) : -2147483642)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = (((((min((arr_0 [i_0 + 2]), -1))) ? 2772612051890473522 : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [8] [i_0 + 3]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, 1650216292));
                    var_19 |= ((17605750013145519259 && (((min(var_12, 63334770)) > (((var_6 || (arr_1 [i_0] [i_2]))))))));
                }
            }
        }
        var_20 = (min(var_20, (arr_2 [i_0])));
    }
    var_21 = min(4589629000167819965, 5794550775771540236);
    #pragma endscop
}
