/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0 + 2] [i_0] [i_0] = (max(9223372036854775807, (!8380416)));
                        var_12 = ((!((((~var_9) | (var_8 >= 4286586880))))));
                    }
                    var_13 |= ((max((((-(arr_8 [i_0] [i_1] [i_1] [i_2] [10] [i_1])))), ((4503595332403200 - (arr_4 [i_0 - 2] [14] [i_0]))))));
                    var_14 *= (max(13, (arr_1 [8])));
                    arr_11 [i_0] [i_1] [i_2] = -4294967295;
                }
            }
        }
    }
    var_15 = ((var_2 <= (((!(var_1 | var_1))))));
    var_16 = (((4294967295 ^ var_7) <= var_3));
    #pragma endscop
}
