/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!(((var_5 ? var_10 : -1108097318234711095))))) ? ((var_10 % ((var_4 ? -1108097318234711082 : 1108097318234711077)))) : (((7 ? var_10 : ((max(32767, 32762))))))));
    var_19 -= (((560514278 ? 3054478140 : 1240489161)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((((-1108097318234711095 + 9223372036854775807) >> (arr_3 [i_1] [i_1])))) ? var_10 : (((arr_5 [1] [i_1]) - 1413454959))))))));
                var_21 = (arr_4 [i_0] [i_1]);
                arr_6 [2] [i_0] [i_1] = (!(arr_0 [i_1]));
            }
        }
    }
    #pragma endscop
}
