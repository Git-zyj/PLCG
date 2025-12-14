/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((-(arr_2 [9] [1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = (~534127958846468820);
                            var_19 = ((534127958846468806 || ((min((!var_9), (arr_2 [i_3 - 1] [i_1]))))));
                            var_20 = ((3155593435709468163 ? (arr_3 [i_2 - 1] [4] [i_3 + 4]) : 534127958846468838));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_5;
    var_22 = (min(var_22, ((max((var_2 ^ var_6), (((var_2 & var_15) ? (((var_14 ? 105 : var_14))) : ((17912616114863082795 ? 534127958846468820 : 0)))))))));
    #pragma endscop
}
