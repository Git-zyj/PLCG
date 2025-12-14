/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 65535;
    var_17 = (max(var_17, (((23 ? 0 : 2482948000)))));
    var_18 ^= (((((((min(26465, 17339303524761318319))) ? 0 : ((65535 ? -26465 : 3840))))) ? ((max((min(var_8, var_5)), ((max(52664, 16064)))))) : ((var_7 ? (((min(-26437, 65513)))) : 65513))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] = (min((min(16037, (max(var_1, 51958)))), (max(9223372036854775807, (min(-5239798830980431954, (arr_3 [i_0] [i_1])))))));
                var_19 -= (min(((-26476 ? 13578 : 26)), 49498));
                var_20 = ((max(((max(186, var_10))), (((arr_0 [i_0]) ? var_11 : 13578)))));
            }
        }
    }
    var_21 = (max(var_21, (((max(2218280149, 2218280149))))));
    #pragma endscop
}
