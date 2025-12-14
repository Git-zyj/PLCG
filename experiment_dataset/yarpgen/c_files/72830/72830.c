/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((min(((var_7 ? var_5 : var_3)), ((min(var_10, var_3)))))) > ((6346587653366762192 ? var_1 : ((48 ? 69 : 4294967245)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((((16809 ? 56 : 5395545900420325947)) << ((((var_9 ? (arr_2 [i_0] [i_0] [9]) : (!var_6))) - 2301))));
                arr_4 [i_0] = (((((((arr_3 [i_0] [i_1]) || var_4)) || (((var_7 ? 3610464894 : var_11))))) ? (((((~(arr_0 [i_0])))) - var_2)) : -24950));
                arr_5 [1] [i_0] = -1023;
            }
        }
    }

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_14 = ((!((min((((var_10 ? (arr_7 [i_2]) : (arr_6 [i_2])))), ((var_2 ? 5541 : var_2)))))));
        var_15 |= arr_6 [i_2];
        arr_8 [i_2 - 1] = ((-(((-20110 > -26756) ? ((var_2 << (((arr_7 [i_2]) - 4802)))) : -73))));
    }
    #pragma endscop
}
