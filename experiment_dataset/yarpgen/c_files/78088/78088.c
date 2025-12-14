/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max((4181977603 <= var_11), (~9359934239233954657)));
                var_16 = 9086809834475596959;
                var_17 = ((~(max(9086809834475596931, 9359934239233954685))));
                var_18 |= (((((min(-60, 9086809834475596931)) + 9223372036854775807)) << (((min((-60 < 124), var_12)) - 1))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 15;i_4 += 1)
                            {
                                var_19 ^= ((-14169 ? (53 != 32265) : (-var_1 | 39565)));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] [i_2] = min(((min(1460070966, var_3))), (-60 | var_12));
                                var_20 = -115;
                            }
                            var_21 = (max((min(1688849860263936, 9359934239233954657)), ((((((max(51366, 1)))) - var_6)))));
                            var_22 = (min(var_22, (((~(min(7626649530103242372, 14161)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
