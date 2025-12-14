/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((!16) ? (!249) : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_13 = 11524811218621013782;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 -= (min((((min(-8731, 234)))), (((!(((-8731 ? 412943629942821888 : -8748))))))));
                                var_15 -= ((!(((1 ? (max(3051458747149794891, (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3]))) : ((-(arr_8 [i_0] [i_0] [i_1] [i_3] [4] [i_0]))))))));
                                var_16 = (min(var_16, (arr_7 [i_2] [i_1] [i_3] [i_2 - 1] [i_4] [i_4])));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (max((arr_12 [6] [i_2] [5] [5] [i_0]), (2147483647 / -2933359953844147054)));
                    var_17 = (arr_2 [i_0]);
                }
            }
        }
    }
    var_18 = (max(var_18, ((max(var_1, (max((~8732), var_9)))))));
    var_19 = ((3 ? (max(((min(-1069356303, -1981175880748605280))), (max(15617693725662231066, 1)))) : 819045580));
    var_20 = var_7;
    #pragma endscop
}
