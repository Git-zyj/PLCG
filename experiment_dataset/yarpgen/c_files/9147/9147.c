/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = ((-(min((((var_11 + 2147483647) << (((-5730081656646840034 + 5730081656646840053) - 19)))), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((max(((8646911284551352320 ? (arr_1 [i_0]) : 5)), var_7)) + 896);
                arr_7 [i_1] [i_0] [i_1] = ((~(((arr_6 [23] [i_1]) << (((max(var_4, var_7)) - 90))))));
                arr_8 [i_1] = (((((!var_9) - ((-7235134425251716777 ? -4329064733332358418 : 7235134425251716798)))) << (((!(((var_11 - (arr_6 [i_0] [i_1])))))))));
                arr_9 [i_1] = 15387;
            }
        }
    }
    #pragma endscop
}
