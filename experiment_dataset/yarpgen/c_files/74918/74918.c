/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = ((((((97 && -5728) ? -9 : (arr_3 [i_0])))) ? (min(-1, -1200290950601152677)) : (arr_7 [i_0] [i_0 + 2] [i_2 + 2] [i_3 - 2])));
                            var_21 = (((var_14 ? 26708 : 32749)));
                        }
                    }
                }
                arr_11 [1] [i_0] = ((arr_7 [i_0 + 3] [i_0 + 2] [i_1] [i_1]) ? ((~(arr_7 [i_0] [i_0 + 2] [i_0] [i_1]))) : ((-(arr_7 [i_0] [i_0 + 2] [i_0] [i_1]))));
                var_22 = 469762048;
            }
        }
    }
    var_23 -= (((-3293 + 97) ? (((((max(7971, -8731462932143586400))) ? var_5 : (min(41821, var_0))))) : ((var_17 ? var_3 : var_16))));
    #pragma endscop
}
