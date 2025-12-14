/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_4 > var_8) ? ((max(39777, 59901))) : (var_4 < 35404))) % var_8));
    var_11 = ((var_7 ? ((4496 ? 61011 : 4510)) : (((!(var_6 / 41657))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = ((((((arr_2 [i_1]) ? 4521 : (3107 - 35391)))) || ((!((((arr_3 [i_0]) * (arr_3 [i_0]))))))));
                var_13 = 0;
                arr_4 [i_0] [i_0] [i_1] = ((4471 / (max(-61075, 17934))));
            }
        }
    }
    #pragma endscop
}
