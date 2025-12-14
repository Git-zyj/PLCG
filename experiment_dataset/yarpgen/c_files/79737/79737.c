/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [6] [i_1] = (!1);
                var_11 = ((((!(18446744073709551604 > var_5))) ? (((var_4 == var_9) ? 12 : ((var_9 ? 18446744073709551614 : 1)))) : var_6));
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_7 [i_2] = ((-((max((max((arr_5 [i_2]), var_0)), (1 > var_2))))));
        var_12 = min(0, (max(var_0, (arr_6 [i_2 + 3]))));
    }
    #pragma endscop
}
