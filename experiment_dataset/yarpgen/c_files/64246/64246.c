/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = var_8;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 += ((((max((134 && var_0), 134))) ? ((max((arr_4 [5] [5] [i_2]), 122))) : (((max(-663574753247131509, (((var_5 && (arr_0 [i_0]))))))))));
                    var_13 = (max(var_13, ((((-32767 - 1) <= (((1 && (((1 ? 1 : var_5)))))))))));
                    var_14 = (((((193467650294938324 ? 14458434393053363204 : 1))) && (((var_3 ? 1 : 6121889284022210685)))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_15 = -663574753247131520;
            arr_9 [i_3] = ((((!(((3757854020529408381 ? 167 : 40))))) && ((((((arr_3 [i_0] [10] [0]) ? 15 : 3757854020529408361))) || (var_5 || var_6)))));
        }
    }
    var_16 = (min(var_16, (((1628 ? 231 : 53)))));
    var_17 += (((((+(((-127 - 1) ? 22588 : 216))))) ? (-127 - 1) : var_3));
    var_18 = (~var_5);
    #pragma endscop
}
