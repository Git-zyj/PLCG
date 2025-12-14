/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = ((((min((min(var_13, -744141514541484947)), (max(9223336852482686976, var_8))))) ? (((max((max(var_3, 65535)), 72)))) : var_11));
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 |= ((~(arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (min((arr_0 [i_0]), 1));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 += (((+-72) / var_12));
        arr_8 [i_1] [i_1] = (((arr_5 [i_1] [i_1]) < -73));
        arr_9 [i_1] = var_15;
        arr_10 [i_1] [i_1] = ((~(((!(arr_2 [4] [i_1]))))));
    }
    #pragma endscop
}
