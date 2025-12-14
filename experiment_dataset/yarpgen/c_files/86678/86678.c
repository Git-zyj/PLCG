/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [1] [i_0] = (((((6173 >> (17877705802456119129 - 17877705802456119117)))) ? ((127 ? 0 : -6077015724953305503)) : (((max(1, 40))))));
                    var_18 = ((((252 ? -972027423 : 120))));
                    var_19 = (max(var_19, ((((4136127978330689368 << 1) ? (-2867 + 1125899906842624) : 2)))));
                }
            }
        }
    }
    var_20 = (!var_15);
    var_21 = var_2;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            {
                arr_14 [i_4] |= (((57 < 2701854104351490017) != ((4235780610 ? 524224 : 255))));
                var_22 = -7228222427475774381;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_23 += ((14 ? (min(9223372036854775807, -120)) : 896535604));
                            var_24 = (max((max((-2639790851956983975 + 524224), (((20354 ? -524225 : 0))))), (-120 || 20369)));
                            var_25 = -2521629854396856078;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
