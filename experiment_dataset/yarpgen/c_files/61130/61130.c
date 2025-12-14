/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((max((((min((arr_0 [i_0]), var_6)) * (arr_0 [i_0]))), (~1))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_3] = ((((((((var_7 & (arr_9 [i_0] [i_0])))) ? var_9 : var_1))) ? (arr_7 [i_0] [i_1] [0] [i_0]) : (((((arr_6 [i_0] [i_1] [i_2] [1]) ? (arr_3 [i_0] [i_3]) : 0)) ^ (1 % 1)))));
                            var_15 = (min((arr_6 [i_0] [10] [i_2 + 1] [0]), (min((arr_2 [i_2 + 1] [i_2]), ((4850104681181619395 ? 1 : (arr_1 [i_0])))))));
                        }
                    }
                }
                arr_13 [i_1] = ((((min((arr_10 [i_0] [i_0] [i_1] [11]), var_9))) >> (((((1 ? 1 : var_11)) <= (((arr_1 [1]) ? (arr_4 [i_0] [i_1] [i_1]) : 7526370053187646615)))))));
                var_16 = 1;
                arr_14 [i_0] [i_0] [i_0] = (min((((!(arr_0 [i_0])))), (var_5 * 14597389709884888279)));
            }
        }
    }
    var_17 = (min((min((70931694131085312 % var_5), ((0 ? var_6 : 1)))), 45007));
    var_18 |= (((((-(var_6 % var_2)))) || ((((var_8 + 18375812379578466296) + (var_3 ^ var_8))))));
    var_19 = var_4;
    #pragma endscop
}
