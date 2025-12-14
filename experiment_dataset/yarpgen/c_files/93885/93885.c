/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((min((~7), var_3))) & var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] &= 1;
                var_20 = ((9223372036854775806 ? (((((min(var_13, var_12))) ? 1 : ((var_2 ? 127 : 1))))) : ((var_10 / (arr_3 [i_0])))));
                arr_5 [18] = ((((max((arr_1 [i_0]), (arr_1 [i_1])))) | ((var_6 >> (125 - 114)))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_21 = (((max((arr_0 [i_0]), ((5353406877305385914 << (var_9 + 5511517610337878579))))) << (((~4294967283) - 18446744069414584326))));
                    var_22 = ((((var_0 ? ((max(var_2, var_16))) : 252)) - (((min(var_13, 1))))));
                    var_23 = (((-var_15 - (arr_2 [i_2 + 3] [i_2 + 1] [i_2 - 1]))));
                    var_24 = (min(var_24, (((-((var_13 ? (var_9 / 121) : (arr_0 [i_0]))))))));
                }
                var_25 = var_5;
            }
        }
    }
    var_26 = ((var_5 ^ (((113 | var_7) ? var_7 : 2700977004247406532))));
    var_27 = var_15;
    #pragma endscop
}
