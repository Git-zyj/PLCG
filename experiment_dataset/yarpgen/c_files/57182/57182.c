/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = min(((((arr_5 [i_0 - 1]) ? (arr_1 [i_2 - 1] [i_0 - 1]) : (arr_1 [i_2 + 1] [i_0 + 1])))), ((2032 ? (arr_1 [i_2 + 1] [i_0 + 1]) : 14358360523338199595)));
                    var_14 = 1;
                    var_15 = (min(var_15, ((min((max(((max(var_11, var_7))), (min(var_1, 693311017)))), (((!(((var_7 ? 1936080479 : var_9)))))))))));
                }
            }
        }
    }
    var_16 += -var_11;
    var_17 = var_10;
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_18 = ((~(((arr_1 [i_4 + 1] [i_5]) ? (arr_1 [i_4 - 1] [i_5]) : (arr_4 [i_3 - 2] [i_3 - 2])))));
                    var_19 = var_1;
                }
            }
        }
    }
    var_20 = 18446744073709551615;
    #pragma endscop
}
