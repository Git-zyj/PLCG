/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 -= (((var_15 == 4294967295) % (arr_8 [i_0])));
                    var_17 = (min(var_17, (arr_4 [i_0] [i_1] [i_0])));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_18 = ((!((min((min(var_14, var_10)), (!var_3))))));
                        arr_11 [i_0] [i_3] |= (max((arr_3 [i_0] [i_0 - 1] [i_2 - 2]), (max(213, 36028797018963964))));
                    }
                }
            }
        }
    }
    var_19 = ((-(min(-4784055042680273453, -var_2))));
    var_20 = (min(((-1111118646 ? 4784055042680273452 : (!var_14))), (((19 >= (9223372036854775807 != 1))))));
    #pragma endscop
}
