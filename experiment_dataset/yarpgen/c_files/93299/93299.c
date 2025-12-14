/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? var_1 : ((~(!var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 *= ((((max((-5600 * 0), (arr_0 [i_0])))) ? ((((12 >= (arr_0 [i_1]))))) : (((((arr_6 [1] [1]) ? (arr_2 [17]) : var_11))))));
                arr_7 [i_0] = (!135);
                var_20 -= (((((-0 ? var_15 : (arr_4 [12])))) ? (arr_3 [i_0] [i_1] [i_1]) : ((max((arr_0 [i_0]), 1)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((min(858076945259241564, (((((arr_4 [20]) % var_1)) * (arr_1 [0]))))))));
                            var_22 += (arr_4 [6]);
                            var_23 = (min((~0), (min(var_1, (arr_2 [i_2 + 2])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_24 = ((min(0, (((arr_16 [i_4]) ^ (arr_18 [i_4] [i_4]))))));
                var_25 = (min(var_25, (((2130303778816 ? ((6841 ? 21 : 255)) : 1)))));
            }
        }
    }
    var_26 &= (min((((var_15 ? (!-7569708752107115381) : ((var_10 ? var_14 : var_12))))), var_6));
    var_27 = (min(((((var_15 && 29574) ? var_1 : (~var_11)))), (min((min(var_0, var_11)), var_17))));
    #pragma endscop
}
