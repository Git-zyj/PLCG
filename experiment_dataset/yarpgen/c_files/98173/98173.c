/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_0 - 1] [i_0] [i_2] = ((((min((arr_5 [i_0 - 3] [i_0 + 1]), (arr_9 [i_0 - 1] [i_1] [i_0 + 1])))) == (arr_9 [i_0] [i_0 - 1] [i_0])));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] = ((((max((arr_5 [i_0 - 1] [i_0 - 1]), 38660))) ? (arr_5 [i_0 - 1] [i_0 + 1]) : (!26877)));
                            var_11 = (max(var_11, ((max((((arr_12 [i_0 + 1] [i_1] [i_1] [i_0 + 1]) ? 38675 : (max(26861, var_5)))), ((max((min(38660, var_1)), (!2147483647)))))))));
                            var_12 = (max((max((~11003498939954792437), (!112))), (arr_14 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 3])));
                        }
                        arr_18 [i_0] [i_2] [i_1] [i_0] = (!26849);
                    }
                    var_13 = ((~(((~(arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0]))))));
                }
                var_14 = (((!(((arr_7 [i_0 - 1] [i_0 - 1]) >= (arr_0 [i_0]))))));
            }
        }
    }
    var_15 = (((max(var_1, var_3)) >= var_0));
    var_16 = (max((((35 ? var_1 : var_3))), (!var_10)));
    #pragma endscop
}
