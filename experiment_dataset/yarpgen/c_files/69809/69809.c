/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(min(1, -1335834789))));
    var_20 = ((((min(2147483644, (57344 + var_15)))) ? ((94 ? (~1602064014) : var_12)) : ((var_11 ^ ((2147483647 ? var_16 : 65528))))));
    var_21 = ((var_15 ? -1936503026 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_2] = (((arr_1 [i_1 - 1] [i_1 + 1]) ? 1 : (((-863207163 + 2147483647) >> (((arr_2 [8] [4]) - 15646))))));
                    arr_7 [i_2] [i_2] = var_12;
                    arr_8 [i_2] [i_1 + 1] [i_2] = ((var_9 ? (arr_1 [i_1 - 1] [i_1 - 1]) : 8176));
                    var_22 = (max(var_22, (((var_5 ? 10 : -3601)))));
                }
                arr_9 [2] = ((-(((1 < (((!(arr_0 [12])))))))));
                var_23 = ((-(arr_5 [i_0] [i_0] [10])));
                var_24 = (max(var_24, (((~(((!(!var_9)))))))));
            }
        }
    }
    #pragma endscop
}
