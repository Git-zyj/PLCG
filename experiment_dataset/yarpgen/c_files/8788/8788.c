/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max(((min(255, 0))), var_11));
    var_14 = (min(var_14, var_4));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] &= -264115525;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (arr_8 [i_0] [i_0]);
                        var_16 = (((((3230699699 + (arr_11 [i_0 - 1] [i_0 + 1] [i_1 + 1])))) && ((max(3230699699, 255)))));
                    }
                    arr_12 [i_0] [i_0] [i_0] = ((264115509 % (arr_5 [i_0 - 2] [i_1 + 1])));
                    var_17 = (((~(arr_0 [i_0]))));
                }
            }
        }
    }
    var_18 = (!14482693159412088247);
    #pragma endscop
}
