/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_13 ? ((-1559283624108619441 ? ((min(var_6, var_10))) : ((2419792024 ? var_15 : var_5)))) : ((var_7 ? var_3 : 1))));
    var_18 = ((((min(-19278, (((684860732 ? var_12 : 178358388)))))) ? var_3 : ((((min(25112, var_14))) ? ((min(75, -4193569861226059049))) : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = 18936;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 ^= 8334;
                            var_21 = 1;
                            arr_10 [i_1] [i_1] [i_3] [i_3] = (((((max(9063988033110097225, -2037025149))) ? -9063988033110097226 : 42)));
                            arr_11 [i_0] [i_1] [6] [i_0] = ((13536842033805790186 ? ((((min(var_7, var_1))) ? ((var_0 ? -17687 : var_3)) : ((var_5 ? 6137698109575334120 : var_2)))) : 5001208788325008550));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
