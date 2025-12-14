/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 ^= ((0 != (!var_12)));
                            arr_8 [i_0] = (min((min(0, ((max(-1, -966134903))))), var_7));
                        }
                    }
                }
                var_17 += 12546959114009646312;
                var_18 = max(5, (~-313161614));
                var_19 = (max(((((min(4068546553, 32767))) ? (max((arr_1 [i_1]), 18446744073709551615)) : (max(234881024, var_12)))), -1552202920));
            }
        }
    }
    var_20 = ((~(min(((max(var_4, -2))), (max(4, 5899784959699905285))))));
    var_21 &= (max(((-((var_3 ? 18446744073709551599 : 0)))), var_15));
    #pragma endscop
}
