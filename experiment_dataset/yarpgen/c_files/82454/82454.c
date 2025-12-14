/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 ? (((var_1 ? ((65215 ? 1733 : 38)) : ((2834230444 ? var_11 : var_3))))) : 1361063870));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((min((arr_3 [i_0] [i_1] [i_1]), 18601))) ? ((9 + (arr_3 [i_0] [i_0] [i_1]))) : ((max(var_10, (arr_3 [i_0] [i_1] [i_1])))))))));
                var_14 = ((((((((-38 ? var_10 : -30338))) ? (!var_9) : ((min(var_7, var_2)))))) & (max(((max((arr_3 [i_1] [i_0] [i_0]), 244))), (min(var_3, (arr_2 [i_0])))))));
                arr_4 [i_0] = (((var_4 ? (arr_2 [i_0]) : 65215)));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_15 = ((((~(arr_2 [i_2 + 1]))) % (((((min(-1, var_1))) * (arr_6 [i_0] [i_1] [i_1] [i_0]))))));
                    var_16 = (var_10 >= var_10);
                    var_17 = (min(var_17, 122385791871037851));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (max((((18324358281838513765 ? 14207 : (arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))), ((min(1361063870, 3)))));
                                var_19 = (max((((arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? (arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]))), ((max(28370, 51329)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
