/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((((max((min((arr_5 [i_0] [8] [i_2] [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])))) ? (((max((arr_1 [i_0]), var_0)))) : 10503)))));
                    arr_8 [i_1] [3] [3] = ((+(max((((-32767 - 1) / (arr_3 [i_0]))), (arr_0 [i_0 - 1])))));
                    arr_9 [i_0] [i_1] [5] = ((var_5 - ((55032 >> (((arr_3 [i_0 - 2]) - 19286))))));
                    var_14 = var_5;
                    var_15 ^= (((arr_7 [i_0] [i_1] [i_1] [i_1]) ? ((63448 ? 55032 : 32767)) : ((((min((-32767 - 1), 6309845400794586029))) ? ((18446744073709551615 ? (arr_2 [i_0]) : 32767)) : ((18330371151087538414 ? (arr_0 [5]) : 30994))))));
                }
            }
        }
    }
    var_16 = (min(55032, (65535 > var_12)));
    #pragma endscop
}
