/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 88;
    var_14 = min(((((88 ? 58 : -14479)) / var_10)), ((min((max(15357, 90)), var_1))));
    var_15 |= -728026330;
    var_16 = (((((1599622782 % (min(426977609, var_8))))) ? 58 : -127));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] [13] [i_3] [i_3] [4] [i_3] = -1;
                                var_17 = (max(var_17, ((((max(0, (arr_12 [i_0] [i_1] [i_2] [i_1]))) / (arr_12 [i_1] [i_2] [i_3] [i_4]))))));
                                var_18 = (min(-80, 127));
                            }
                        }
                    }
                    arr_18 [i_0] = min(var_0, (min(37, -4)));
                    var_19 = (min((1885647223065466912 == 165), (((arr_14 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2] [i_0]) ? (arr_14 [i_0] [i_0] [1] [i_1] [15] [i_2] [i_2]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_2])))));
                    arr_19 [i_0] = -28186;
                    var_20 = ((127 ? (arr_2 [16]) : 18446744073709551615));
                }
            }
        }
    }
    #pragma endscop
}
