/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((((239 ? var_5 : ((var_7 ? var_2 : var_0))))) ? (((min(var_8, var_8)))) : ((max(var_10, var_9)))));
    var_12 *= ((65535 ? (((var_5 > (var_3 ^ 35184372080640)))) : (((!(((239 ? 2523808570 : var_2))))))));
    var_13 = 404716018101413572;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [12] [17] = ((arr_1 [i_0 + 2] [i_0 + 2]) | (arr_3 [i_1] [i_1]));
                var_14 = ((!(arr_2 [i_0] [i_1] [23])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((var_2 * ((((var_2 >= (arr_1 [i_2 + 1] [i_0 + 1]))))))))));
                            var_16 = (min(var_16, ((max(65535, ((((min(-1448963295408748332, (arr_1 [i_1] [22])))) ? (arr_1 [i_0 + 1] [i_2 + 1]) : (arr_0 [i_0] [i_0]))))))));
                            var_17 = arr_3 [i_0] [i_2];
                        }
                    }
                }
                var_18 = (max(var_18, (arr_6 [i_0] [i_0] [5])));
                arr_9 [i_0 + 3] [i_1] [i_1] = ((-(1 && var_2)));
            }
        }
    }
    var_19 = (max(var_19, (((var_3 ? var_4 : (((var_6 ? ((34085 ? var_9 : 30914)) : 229))))))));
    #pragma endscop
}
