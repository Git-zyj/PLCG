/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-5702584551930560581 && (~0)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = (max(var_9, (max((!var_6), (arr_0 [i_0])))));
                    arr_8 [i_0] [i_1] [i_0] = (arr_1 [i_0] [i_1]);
                    var_11 ^= (min((min(249971983493877679, 0)), 0));
                }
            }
        }
        var_12 ^= ((var_8 % ((((var_0 * (arr_4 [i_0] [i_0] [i_0]))) / (arr_5 [i_0] [i_0])))));
        var_13 = (min(var_13, (((((((arr_3 [i_0] [i_0] [i_0]) < (arr_3 [i_0] [i_0] [i_0]))))) + (min(2199023255536, -2199023255517))))));
    }
    var_14 = (var_5 && 2199023255536);
    var_15 = (-8077160275702865311 % (max(((2199023255517 ? var_7 : var_8)), ((-2199023255517 ? 9223372036854775807 : 127)))));
    #pragma endscop
}
