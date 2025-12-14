/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [8] [8] [i_0] = (-127 - 1);
                    var_17 = (min(var_17, ((3293312819 ? 2944784088161767141 : (-127 - 1)))));
                    var_18 = ((57125 ? 27595 : 37940));
                    arr_9 [5] [i_1] [i_2] = (-6350887322203885799 ^ 37940);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_3] [i_3] [i_4] = ((((((((var_4 > (arr_7 [i_1] [i_1])))) >> (arr_1 [i_0])))) >= ((-var_3 ? ((((arr_10 [i_0] [i_1] [i_1] [i_2] [i_4] [i_0]) % (arr_0 [i_0])))) : (((-131193169023160621 + 9223372036854775807) << (((-26801 + 26828) - 27))))))));
                                var_19 = (min((max(10935554074096790055, (-127 - 1))), (arr_2 [i_0] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_17 [i_5] = (arr_16 [i_5]);
        arr_18 [i_5] = (arr_15 [i_5]);
    }
    var_20 = 27597;
    #pragma endscop
}
