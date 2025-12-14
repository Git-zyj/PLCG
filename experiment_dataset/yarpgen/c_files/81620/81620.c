/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_0] [i_0 + 1] = ((~((~(4294967295 >= 225)))));
                var_19 = ((((((10875610171044579644 && 11181) >= (1 + 5129376519736830210)))) << ((((1 == -83) <= (var_17 == var_8))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 *= (((max(var_4, 282716479911524604)) ^ ((((var_18 ? 14342437569593894235 : 2147483647))))));
                            var_21 = ((-(((729913316987108399 <= (~28))))));
                        }
                    }
                }
            }
        }
    }
    var_22 *= 2147483647;
    var_23 = (max(var_23, (var_15 && var_10)));
    var_24 = ((!((max((max(21, -1793071816)), var_17)))));
    #pragma endscop
}
