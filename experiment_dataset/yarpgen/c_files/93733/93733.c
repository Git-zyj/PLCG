/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((~(min(((1550 ? 15891797536857698574 : (arr_6 [i_1] [9]))), 2060924451))));
                    var_20 = (min((((((0 ? (arr_4 [i_1] [i_1] [4]) : var_8))) ? 3498279106127049910 : 7227501547022087097)), ((((53 >= -1619531519) ? (203 > 942592064) : 65535)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    var_21 = (min(var_21, ((((((((max(var_0, 2147483647))) ? -10269157658767876479 : (arr_11 [i_5 - 1] [i_3])))) ? (min(-2060924452, ((137 ? -585833503812354570 : -585833503812354570)))) : (((-7227501547022087097 ? ((-7227501547022087098 ? 23102 : var_13)) : (-28621 | 127)))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_22 = ((+(((!((max((arr_17 [9]), -8369257157425852893))))))));
                                arr_18 [7] [i_5 - 1] [i_5] [i_6] [i_3] [7] [4] = 23102;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
