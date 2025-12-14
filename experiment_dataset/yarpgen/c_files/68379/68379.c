/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] = ((var_3 ? 1566112547216960233 : (9223372036854775807 ^ -97)));
            arr_5 [i_0] [i_0] = var_2;
        }
        arr_6 [i_0] = var_9;
        arr_7 [i_0] [i_0] = -var_0;
    }
    var_14 = (!var_4);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_2] = (((!(~80))));
                            var_15 = (((arr_17 [9] [9] [i_3]) != (arr_8 [i_2])));
                        }
                    }
                }
                var_16 = ((37366 - (((!(arr_12 [14] [1]))))));
            }
        }
    }
    #pragma endscop
}
