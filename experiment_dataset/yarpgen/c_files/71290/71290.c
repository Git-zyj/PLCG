/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (!var_8);
                arr_6 [i_0] = (arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]);
                var_13 = (((((((((arr_3 [i_0] [i_0] [i_0]) ? 6070018536939886192 : 3974571580041984626))) ? (arr_4 [i_0] [i_1 - 2] [i_1 + 1]) : (min(var_9, (arr_3 [i_0] [i_0] [i_1])))))) ? (arr_0 [i_0]) : ((min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1]))))));
                var_14 = (((!9223372036854775807) % (min((max((arr_2 [i_0] [i_1 - 1]), -9223372036854775807)), (arr_2 [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    var_15 = (((((!var_4) ? var_11 : (min(var_9, var_6)))) << ((((var_6 ? (((max(-114, -106)))) : 4294967288)) - 4294967175))));
    var_16 = (max((((((42386 ? var_1 : var_5))) ? var_1 : (~var_2))), ((min(var_10, (var_9 && var_3))))));
    var_17 = var_4;
    var_18 = ((var_10 ? var_2 : var_10));
    #pragma endscop
}
