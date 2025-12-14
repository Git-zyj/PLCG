/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((((var_1 && var_1) || (var_1 || var_4)))) << (((var_0 || var_4) - (-35 >= var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_11 *= (((((((arr_1 [i_0]) && var_6)) && (((arr_2 [i_0] [i_1 + 3]) || (arr_2 [i_0] [i_0]))))) || (((23 && 147218968) || (73 || 361431801)))));
                var_12 = ((((((((arr_3 [i_0] [1] [i_1]) >> (var_5 - 20033))) & (((arr_1 [i_0]) >> (((arr_0 [i_0]) - 3462594214))))))) && ((((((var_9 < (arr_1 [10])))) << ((((arr_2 [i_0] [i_0]) == var_5))))))));
            }
        }
    }
    #pragma endscop
}
