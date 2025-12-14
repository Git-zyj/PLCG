/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((!((((((var_9 ? var_5 : var_7))) ? var_2 : (max(-20, 7835264766917951070)))))));
                    var_18 = ((((var_6 ? -var_11 : (76659202942822662 - -1694)))) ? (((-76659202942822671 + 9223372036854775807) << (var_4 - 30543))) : var_5);
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_19 = ((((max((arr_8 [i_0] [i_0] [i_3 + 3]), (((arr_4 [i_0] [i_0]) ? 177 : var_8))))) ? (((~((var_3 ? 1 : 16384))))) : (min(((2205842889 << (76659202942822662 - 76659202942822637))), var_7))));

                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_20 = (min(var_20, (arr_10 [i_1] [2])));
                                var_21 = (max((((~(26325 >= 49152)))), 3));
                            }
                        }
                    }
                }
                var_22 = (((!var_11) || ((!(!48)))));
                var_23 = (max(var_23, 4));
            }
        }
    }
    var_24 = max((((((min(208, var_11)))) & (-7835264766917951076 | 25))), (((33804 ? var_15 : ((max(var_1, 21)))))));
    #pragma endscop
}
