/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_2 ? -1 : (-32767 - 1))))) ? (((912702069 <= (((min(8191, (-32767 - 1)))))))) : var_6));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (-32767 - 1);
        var_11 = ((((((~(arr_1 [i_0]))) + 2147483647)) >> (((!(arr_1 [i_0 - 1]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_12 = (max(-32761, -7));
        arr_7 [i_1] = (min((arr_4 [i_1]), (~44561)));
        arr_8 [i_1] = (((max((var_1 - var_2), (((-(arr_6 [i_1] [i_1]))))))) ? (~1689433738) : 2710788972);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_13 &= ((+(((arr_5 [i_2]) >> (((arr_5 [i_2]) - 63966))))));
        arr_11 [11] [i_2] = (((((arr_9 [i_2] [i_2]) ? (-32767 - 1) : (arr_2 [i_2]))) > (arr_9 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_14 = (max(var_14, var_8));
        arr_16 [2] &= ((-(arr_1 [i_3])));
        var_15 = (((--46807) - 157274835));
        var_16 = (((arr_12 [7] [i_3]) % (arr_12 [i_3] [i_3])));
    }
    #pragma endscop
}
