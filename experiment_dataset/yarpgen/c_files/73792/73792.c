/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max((((4294967288 < 0) ? var_1 : (((var_9 ? 0 : var_12))))), ((min((!-114620113), ((var_15 ? var_4 : var_14))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((!((((arr_3 [i_0] [i_0]) & var_15))))) && (arr_1 [7] [i_0])));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_19 = (arr_0 [i_0] [i_1]);
                    var_20 = (max((((34635 && ((((arr_7 [i_0] [i_1] [i_2]) ? (arr_4 [22] [22]) : var_12)))))), ((var_15 ? (((746313553 ? var_10 : var_0))) : (min(46528, 0))))));
                    var_21 -= 1;
                }
                arr_10 [i_0] [i_0] [i_0] = (!var_3);
                var_22 = (max(var_22, (((max(var_14, (max(114620113, var_7))))))));
            }
        }
    }
    #pragma endscop
}
