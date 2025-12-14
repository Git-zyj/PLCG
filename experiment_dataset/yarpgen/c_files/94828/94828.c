/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = ((((min((max(var_5, var_9)), ((max(var_1, var_12)))))) ? (min(var_0, var_11)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(((((arr_3 [i_1]) != ((((arr_2 [i_0] [i_0] [i_0]) >= (arr_1 [i_0]))))))), ((((max((arr_3 [i_0]), (arr_2 [i_0] [i_0 + 1] [i_0])))) * ((max((arr_3 [18]), var_3)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4] [8] [i_4] [i_4] [i_4 - 4] = (min((-39 >= -6482122873639614696), var_0));
                                var_17 ^= min((max((((var_9 ? (arr_5 [i_3] [i_3]) : var_5))), (min(var_2, var_5)))), ((((arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
