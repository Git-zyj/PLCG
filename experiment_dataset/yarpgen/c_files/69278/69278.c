/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_9 || var_15) ? (var_7 >= 12945) : ((min(116, (-127 - 1)))))) - (((((-127 - 1) ? -117 : 121)) % -117))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_1] = ((-127 - 1) ? ((~(max(14, (arr_0 [i_0]))))) : (((((((arr_0 [i_1]) ? var_1 : (arr_1 [i_0])))) ? (arr_2 [i_0 - 1]) : (max((arr_3 [11]), 1779216440))))));
            arr_5 [i_1] [7] [i_0] = (((((((4130569750 & (-127 - 1)))) ? (((arr_2 [i_0]) + (arr_1 [i_1]))) : (!var_8))) * (((122 ? (arr_1 [i_0]) : (arr_1 [3]))))));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (((arr_6 [i_0 - 2]) - (arr_6 [i_0 - 3])));
            arr_10 [i_0] = 22;
            arr_11 [i_0] [i_0] = ((~(arr_7 [i_0] [i_0 - 2])));
        }
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            arr_16 [i_0] = (arr_0 [i_3]);
            arr_17 [i_0] [i_0] = ((!((((((arr_14 [i_0] [i_3] [i_3]) > (arr_14 [i_0 - 3] [i_3] [i_0]))) ? (~-123) : (arr_13 [i_0]))))));
            arr_18 [8] [i_0] [i_0] = max((arr_0 [i_0 - 3]), var_5);
            arr_19 [i_0] [i_3] [i_3 - 2] = (min((((arr_0 [i_3 - 3]) ^ var_9)), ((((arr_13 [i_3 + 3]) ? 0 : ((min(20623, (arr_13 [11])))))))));
        }
        arr_20 [i_0 - 2] = (max((arr_15 [i_0] [6]), (((((18446743798831644672 ? -16604 : -122))) ? ((~(arr_0 [i_0 + 1]))) : ((((!(arr_12 [i_0] [i_0] [i_0 + 1])))))))));
        arr_21 [i_0] = var_7;
    }
    #pragma endscop
}
