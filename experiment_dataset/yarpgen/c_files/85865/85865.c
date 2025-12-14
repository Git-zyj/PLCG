/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_12 = ((((1 ? 1 : 1)) * (1062785738 - 1658993567)));
        arr_3 [i_0] |= ((~(4294967275 & 134)));

        for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_1] = var_9;
            var_13 = 1893943649;
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_13 [i_0] [i_0 + 1] = (1 ? ((1 % (28503 != -421848298))) : -230635829);
                var_14 = (min(var_14, ((max((arr_10 [i_0] [i_2] [i_3]), (((((var_5 * (arr_4 [i_2])))) ? (var_7 / var_9) : 1)))))));
                arr_14 [i_3] [24] [i_2] = (min((arr_2 [i_0] [i_2]), (((((((arr_1 [i_0]) + (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? (1 - 268435452) : ((1 ? 1920 : 1)))))));
                arr_15 [20] [i_2] [i_3] [i_3] = ((min((arr_6 [i_0] [i_2 - 1] [i_2 - 1]), (arr_10 [i_3] [i_0] [i_0]))) * 0);
                arr_16 [i_2] [i_2] [i_3] [i_3] = (((arr_2 [i_0] [i_3]) ? ((((10 == (arr_0 [i_0]))))) : ((var_9 ? (arr_4 [i_0]) : (min(var_1, (arr_2 [i_3] [i_2])))))));
            }
            var_15 |= (arr_11 [i_2]);
            arr_17 [i_0] [i_0 - 1] = arr_6 [i_0] [i_0] [i_2 - 1];
            arr_18 [i_0] [i_2] [i_0] = ((-1893943641 + (((!((1 <= (arr_0 [i_2]))))))));
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_21 [i_4] |= var_3;
        var_16 = (min(var_16, ((((max((((-32767 - 1) + 1893943649)), -1))) < (max(((var_10 ? 9148815269267718957 : (arr_10 [22] [i_4] [i_4 - 1]))), (arr_8 [i_4] [i_4])))))));
    }
    var_17 = (min(var_17, var_6));
    var_18 = (((((3335889085 ? 1 : 27918))) ? (min((var_1 / var_10), (var_6 / var_9))) : (((16886008597091655178 * 164) ? -1 : var_5))));
    #pragma endscop
}
