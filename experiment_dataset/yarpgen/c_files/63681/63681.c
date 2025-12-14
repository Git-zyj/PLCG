/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((44447 / 21089) ? 63 : ((-(21072 * 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (((min(1, (!7))) || 1816197166003935346));
                                arr_10 [i_2 + 1] [i_3] [i_2 + 1] [i_1] [i_0] = (-(((!(1568878647377103841 / 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 21060;
    var_19 = (((1 % 1) ? -8882769603254461495 : (max(10164692, (0 >= 0)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_20 = (~-1);
                    var_21 = (min(var_21, (((((619650627 || (((134217727 >> (21084 - 21073)))))) ? 1 : (((~6) & (((1 ? 67108863 : -31387))))))))));
                }
            }
        }
    }
    #pragma endscop
}
