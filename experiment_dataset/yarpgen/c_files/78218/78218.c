/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((max(((max(1, 1))), 65532))), (max((max(1, 664220484794397300)), ((max(var_2, var_3)))))));
    var_13 -= (max(((max(0, 4))), (max((max(-1851796093, 0)), ((max(var_4, var_2)))))));
    var_14 = (max((max((max(var_10, -30022)), (max(17782523588915154302, var_0)))), ((max((max(-2498224695824117227, var_1)), ((max(var_0, 65523))))))));
    var_15 = (max(((max(((max(var_3, -1277720801))), (max(1, 0))))), (max(((max(48, 106))), (max(var_2, 17782523588915154289))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_16 += (max((max(4294967295, (-32767 - 1))), ((max((max(var_7, (arr_3 [12] [i_0]))), ((max(139, 68))))))));
                var_17 &= (max((max((max((arr_2 [1]), var_2)), ((max(-1, var_4))))), ((max(49904, 1)))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (max((max((max((arr_5 [i_3] [i_1] [12]), 63)), ((max((arr_9 [i_1]), (arr_6 [i_0] [i_1] [i_1] [1])))))), (max((max((arr_3 [i_1] [9]), (arr_4 [i_1]))), ((max(930848786, var_8)))))));
                        var_19 = (max(((max((max(129, (arr_9 [i_1]))), ((max(-1407, (arr_8 [i_1]))))))), (max((max(1, -930848786)), (max((arr_9 [i_1]), var_6))))));
                        arr_11 [i_1] [i_3] [7] [i_1 - 2] [i_1] = (max((max(((max((arr_9 [i_1]), 1001717943))), (max(134, 15497134195765181191)))), (max(((max(var_1, (arr_6 [i_0] [i_0] [i_1] [i_0])))), (max(var_10, (arr_6 [5] [i_1] [i_1] [i_1])))))));
                    }
                    var_20 = (max((max((max((arr_5 [5] [1] [i_2 + 3]), (arr_10 [i_0] [6] [9] [i_0] [i_0] [i_1]))), (max(var_1, var_10)))), ((max(((max(var_8, -34))), (max((arr_2 [i_1]), 25729)))))));
                    var_21 = (max((max(((max(var_4, var_4))), (max((-32767 - 1), 17782523588915154315)))), (max((max(13529455424020247547, (-127 - 1))), 664220484794397327))));
                }
                var_22 |= (max(127, 1851468495));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_23 |= (max(62, 0));
                            var_24 = (max(((max(((max(0, (arr_7 [i_1])))), (max(var_0, 1358354549))))), (max((max(0, (arr_4 [i_1]))), ((max(var_4, var_6)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
