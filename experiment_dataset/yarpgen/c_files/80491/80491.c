/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(var_2, (var_7 & 596219749515357866))), var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] = (min(240977410, 27));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_12 |= 3887599025963290847;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 |= (arr_11 [i_4 - 1] [i_3 - 1] [i_2 - 2] [i_2 + 1]);
                                var_14 = (!1064980051);
                                var_15 *= (arr_16 [i_1]);
                            }
                        }
                    }
                }
                var_16 = ((((~(min(17850524324194193753, var_10)))) >= 1064980067));
            }
        }
    }
    #pragma endscop
}
