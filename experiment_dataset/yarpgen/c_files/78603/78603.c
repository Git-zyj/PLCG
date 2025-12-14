/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = ((-4125 ? ((8323072 >> (552199727133205603 - 552199727133205594))) : ((29535 ? 35 : (-64 > 1)))));
                    arr_7 [i_0] [i_1 + 1] [i_2] = (((min(((min(-14671, (arr_1 [i_0])))), (1 * var_1)))) ? (((!(44842410 < var_11)))) : (max(-304457640, var_16)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 &= 16360;
                                var_20 = 16365;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 ^= var_5;
    var_22 += min((var_14 || var_8), (max((max(-1172734793021707522, 19652)), 55)));
    var_23 = (((((((165 >> (152 - 152)))) >= var_14))) & -23111);
    #pragma endscop
}
