/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_13 += ((25661 && ((((1997910241 + var_3) ? ((1997910241 ? var_9 : var_8)) : 11)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = (((((-3912545324808539800 ? 1997910228 : 1997910241))) ? (((1997910241 ? -1997910229 : 16384))) : ((1997910241 ? -1997910242 : 549755813887))));
                                var_15 ^= 14777632999258139558;
                                arr_10 [i_1] [i_1] [i_0] [i_0] [i_0] = ((((19397 ? ((1997910226 ? -1074457182 : 1997910241)) : 5025)) <= (!-14599)));
                                var_16 = ((1997910239 & 16408) ? (6707823582657946221 & 0) : ((11795797844990230118 ? 1152921504602652672 : 1528858691763924740)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((var_12 ? ((8175447209483334159 ? var_12 : 17944029765304320)) : var_5))) ? ((((-1032651227 % -16409) ? ((6764411192828798151 ? 5953 : 249)) : var_8))) : ((((14582 ? -5937 : 9223372036854775808)) & (((1505477425 ? var_4 : 1))))));
    #pragma endscop
}
