/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((max(((min(var_5, var_5))), (var_6 % var_0)))) && var_7));
    var_12 = ((-3400 < (!var_1)));
    var_13 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (((((((arr_1 [i_0]) ? var_0 : 9)))) && 244));
                arr_4 [i_1] [i_1] = ((!((min((arr_1 [i_0]), (min((arr_2 [i_0] [i_1]), var_9)))))));
                arr_5 [i_1] = (min((max((arr_3 [i_1]), (arr_2 [i_1] [i_1]))), var_1));
                arr_6 [i_1] = (min((arr_2 [i_0] [i_1]), (((var_4 && (arr_3 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
