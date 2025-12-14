/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_10 = (((!-1) ? (((!(-2147483647 - 1)))) : (((!(arr_1 [i_0 + 1] [i_0 + 1]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_1] [i_1] [i_0] = max(((~(max((arr_6 [i_0] [i_1]), var_6)))), var_1);
            var_11 |= (arr_5 [i_0] [i_0] [i_0]);
            var_12 = (max(var_12, (((~(arr_3 [i_0 - 2] [i_1]))))));
        }
        arr_9 [i_0 - 2] [i_0 - 2] = ((~(max((arr_1 [i_0 - 2] [i_0 - 1]), (arr_2 [i_0] [i_0 + 2])))));
        var_13 = (max(var_13, (((!((max(((~(arr_5 [i_0] [i_0] [i_0]))), (~119)))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_14 = (max(((((var_2 || 1) << (((max(var_3, (arr_11 [i_2] [i_2]))) - 242607150))))), ((-1 ? var_5 : ((max((-32767 - 1), 111167601)))))));
        arr_14 [i_2] [i_2] = ((~(((arr_10 [i_2] [i_2]) ? (arr_11 [i_2] [i_2]) : var_1))));
    }
    var_15 = (((~(~var_7))));
    #pragma endscop
}
