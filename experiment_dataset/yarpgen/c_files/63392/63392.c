/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((((max(var_10, 22693)) - var_13))) ? ((2 ? (~229) : ((max(0, var_9))))) : ((max((!var_5), var_13)))));
    var_20 = (max(((~(~var_9))), (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((((((-2147483647 - 1) - -2147483643)) + 28)) - 23))))));
    var_21 += var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((!(((23 ? 229 : 242)))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_2] = 237;
                    var_22 = max(32767, (((arr_8 [i_1]) & (arr_8 [i_1]))));
                    arr_10 [i_0] [i_2] [i_2] = (arr_2 [i_0] [1]);
                }
            }
        }
    }
    #pragma endscop
}
