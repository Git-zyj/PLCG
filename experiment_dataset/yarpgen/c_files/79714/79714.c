/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, ((((((((5276 ? 12734308910023559834 : 16832588770363412520))) ? ((~(arr_5 [i_1] [20]))) : (((min((arr_0 [i_2]), (arr_9 [4] [4] [i_2] [i_4]))))))) > ((-var_0 ? ((var_6 ? var_7 : var_9)) : (((var_7 ? (arr_3 [i_4]) : var_10))))))))));
                                var_12 &= (((!var_6) ? (min((!6034292397090742573), ((-(arr_6 [16]))))) : (((arr_7 [i_0] [i_0] [i_0]) ? (arr_6 [i_0]) : (arr_4 [i_4] [i_2] [i_0])))));
                                var_13 ^= var_9;
                                var_14 *= (min((((127 ? 4 : -12))), ((3550136443 ? (((12 ? 12 : 4294967295))) : 919607086649001283))));
                            }
                        }
                    }
                    var_15 = (min(var_15, (((!((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * ((~(arr_6 [i_2])))))))))));
                }
            }
        }
    }
    var_16 = (max(var_16, var_8));
    var_17 = (var_6 > var_2);
    var_18 *= (((var_1 <= var_4) ? ((((((4008015143 ? 3212935982 : 9223372036854775807))) ? (~-111) : (-32 < -32749)))) : var_2));
    #pragma endscop
}
