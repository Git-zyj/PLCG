/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((((var_13 == 152) * 103)))));
    var_18 = 152;
    var_19 = ((!(28354 | 103)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (((min((arr_0 [i_0] [10]), ((var_4 ? 40305 : (arr_1 [i_0]))))) > (((((25231 ? (arr_4 [i_0] [i_0] [i_0]) : 22188)) ^ (arr_2 [i_0]))))));

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_21 = (min(var_21, (((((((arr_1 [i_2]) ? (arr_8 [i_0 - 1] [i_3 + 1]) : (arr_0 [i_2] [i_3 - 3])))) ? (((152 - (arr_5 [i_3] [i_3 - 1])))) : (min(((1997262152 ? 11095756782068787753 : 16911158354608375337)), (18415812409929064527 <= 15450205988215462295))))))));
                        var_22 *= var_4;
                        var_23 |= (((((var_14 ? (arr_3 [i_1] [i_3]) : 1006632960))) ? (arr_3 [i_2] [i_2]) : (min((arr_3 [i_1] [i_3 - 1]), var_0))));
                    }
                    var_24 ^= ((+(max((((arr_3 [i_1] [10]) ? (arr_1 [i_1]) : 40678)), (((16911158354608375340 ? 17321 : var_11)))))));
                }
            }
        }
    }
    #pragma endscop
}
