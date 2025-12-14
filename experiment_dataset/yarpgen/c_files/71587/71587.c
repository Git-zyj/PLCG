/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (((arr_2 [i_0] [12]) ? ((~(!25382))) : ((((arr_0 [i_0 - 1]) == (arr_0 [i_0 - 2]))))));
                var_20 = (~16720455139848577174);
            }
        }
    }
    var_21 = ((((((min(var_14, var_16))) == ((12586 ? 16994029743564986641 : -123)))) ? (115 == 629532690) : ((var_15 ? var_7 : var_15))));
    var_22 &= (((((~var_11) / (var_4 + var_9))) % (((var_4 / ((226 ? var_17 : 115)))))));
    #pragma endscop
}
