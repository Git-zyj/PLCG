/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 -= ((!(!4738865245517635344)));
                var_18 = ((-(!1025777655)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_19 = ((-(~-9223372036854775801)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_20 = -9223372036854775801;
                            arr_19 [i_2] [i_2] = ((~((-((~(arr_0 [i_3] [i_5 - 1])))))));
                        }
                    }
                }
            }
        }
    }
    var_21 += ((~(~-var_0)));
    var_22 &= (~-1154459022);
    #pragma endscop
}
