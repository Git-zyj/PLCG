/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-78 ? 470384105467028151 : (1069547520 & var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (max(var_17, (((-(arr_11 [i_3]))))));
                        var_18 = ((max(18446744073709551615, 1)));
                    }
                    arr_13 [1] [i_1] = 2884;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_19 = (min(var_19, (1069547517 != 15)));
                                arr_19 [i_0] [i_1] [i_0] [i_4] [i_4] [i_0] [i_5] = (((-5556689823089917844 + 7) - (18446744073709551605 - 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
