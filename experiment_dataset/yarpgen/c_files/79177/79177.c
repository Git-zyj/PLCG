/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (~(((((228 ? var_2 : var_6))) ? (~var_3) : var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_1]);
                var_18 = (((min(215, 898938089)) == (max(210, (min(var_7, (arr_5 [i_1])))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = ((var_15 ? ((max((!var_9), (arr_7 [i_1])))) : (((!var_6) ? (!var_13) : ((var_5 ? (arr_5 [i_1]) : (arr_6 [i_0])))))));
                    var_19 |= -var_13;
                    var_20 = (((((18446744073709551600 ? -1 : (((var_5 > (arr_4 [i_1]))))))) ? (arr_3 [i_0]) : (((((((arr_1 [5]) - (arr_4 [i_1])))) ? var_13 : (arr_2 [i_1] [i_2]))))));
                    var_21 *= (~var_3);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        {
                            var_22 = ((~var_5) ? (((arr_12 [i_0] [i_1] [i_3] [i_0]) & -1384853473)) : (((var_8 ? var_8 : var_12))));
                            var_23 = (((-5092 ? 46891 : -15057)));
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((((((50601 ? var_12 : 1))) ? (var_4 > var_3) : ((var_6 ? var_3 : var_4))))) ? var_8 : (--24)));
    #pragma endscop
}
