/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_7));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (!((max(1, (max(6727740656175097913, 3778216311))))));
        var_12 = var_7;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = var_0;
        var_14 = (((arr_5 [i_1]) ? var_2 : (min((-6727740656175097913 * var_9), ((6727740656175097926 ? 9410369792909127824 : var_5))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_4] [i_4] = (max(93, 1));
                    arr_17 [i_2 + 1] [i_4] [i_4] = ((min(((max((arr_9 [i_2]), (arr_4 [0])))), var_4)));
                }
            }
        }
    }
    var_15 = ((~(min((min(var_8, var_6)), (min(var_10, var_1))))));
    #pragma endscop
}
