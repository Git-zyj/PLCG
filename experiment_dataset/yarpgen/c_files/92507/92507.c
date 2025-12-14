/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 = ((8870905200811667146 >> (3926 - 3913)));
        arr_4 [i_0] [i_0] = ((61609 << (61609 - 61603)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = ((((var_6 ? (arr_2 [i_0]) : (arr_2 [i_2]))) << ((((-(arr_2 [i_2]))) - 1616550252))));
                    var_21 = ((((((arr_6 [i_1]) ? (arr_8 [i_0] [i_1]) : 61609))) ? (arr_11 [17] [i_1] [i_1] [i_1]) : (((~(arr_7 [i_2] [i_0]))))));
                    var_22 *= (((((-((max(-31613, 32256)))))) ? ((((((var_16 - (arr_5 [i_0] [17] [17])))) != (max((arr_6 [i_0]), (arr_8 [i_1] [i_0])))))) : ((min(61609, (arr_10 [i_2] [i_1] [i_1] [i_0]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_23 = ((+(((arr_9 [i_3] [i_3] [i_3]) << (((arr_11 [i_3] [i_3] [i_3] [i_3]) - 4062357225911970101))))));
        var_24 *= 3915;
        var_25 = (min(var_25, ((((~(arr_12 [i_3] [i_3] [i_3])))))));
        var_26 = (min((arr_1 [i_3]), var_3));
    }
    var_27 = (max(var_27, -154167512));
    #pragma endscop
}
