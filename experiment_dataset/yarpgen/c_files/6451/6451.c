/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(var_5, 3874))) ? var_17 : (61645 * 4906566526200780089))) ^ (((((min(var_15, var_3))) ? (!var_13) : (min(var_7, var_18))))));
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (min(103, (min(-3891, (arr_5 [i_0] [1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [11] [3] [0] [i_3] [i_4] = 331616523;
                                var_22 = ((3966476364357974916 ? 3849 : 331616506));
                                var_23 = (((max(((-(arr_5 [i_0] [i_0] [i_0]))), ((((arr_2 [i_4] [i_3] [i_0]) <= 105))))) << (((max((((arr_9 [i_2] [i_2] [i_2] [i_3] [i_4] [i_3]) ? 17969 : (arr_11 [i_0]))), (arr_2 [i_0] [i_1] [i_2]))) - 21037))));
                                var_24 = ((min((((!(arr_11 [i_1])))), (arr_0 [i_0]))) > ((max((((!(arr_8 [i_0] [i_1] [i_1] [i_1] [i_1])))), (min((arr_1 [i_1] [i_1]), (arr_9 [i_0] [2] [i_2] [i_3] [i_4] [i_4])))))));
                            }
                        }
                    }
                    var_25 |= ((!((max((min((arr_1 [i_2] [i_2]), (arr_1 [i_0] [i_2]))), (arr_1 [i_1] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
