/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_10 = ((~(max((arr_6 [i_0]), ((var_9 ? var_8 : (arr_9 [i_0])))))));
                            var_11 = var_8;
                        }
                    }
                }
                var_12 *= ((2839479048 >= ((((var_6 ? 10651386478990176976 : (arr_0 [i_0]))) / 129))));
                var_13 = ((13358 ? (((((7795357594719374637 ? (arr_1 [i_1]) : var_1))) ? (arr_9 [22]) : 1)) : 43634));
            }
        }
    }
    var_14 = (max(var_14, ((((max((max(7795357594719374663, 0)), (var_7 * 21903))) << var_2)))));
    var_15 += ((var_9 & var_7) >> (((((((var_5 ? var_3 : 3811785210))) - ((var_4 ? var_1 : 10651386478990176948)))) - 1975288156)));
    #pragma endscop
}
