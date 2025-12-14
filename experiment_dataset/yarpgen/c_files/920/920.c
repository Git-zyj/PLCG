/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((var_2 != (min(17546418049586791821, var_0))))))));
    var_11 = ((((var_1 != var_1) ? (900326024122759795 == 5236569792363478983) : (max(17546418049586791795, var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (var_5 - var_2);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 *= (min((((((((0 ? var_0 : var_1)) + 2147483647)) << (((var_7 <= 8) - 1))))), ((~((900326024122759814 ? 900326024122759780 : 32767))))));
                                var_13 = (min(var_13, ((((900326024122759842 + 3) & (var_3 - 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
