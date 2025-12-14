/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min((max(((1 ? 0 : 1357024662)), (((2 ? 4557842237703806271 : 6))))), var_4);
    var_20 = ((var_7 || ((!(!10051297956883629813)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((((max((arr_0 [i_0] [i_0]), (min(var_0, (arr_0 [i_0] [i_0])))))) + 12413781963663892855)))));
        var_22 = (((((((arr_0 [i_0] [i_0]) == (arr_1 [i_0] [i_0]))))) < ((0 ? (0 > 37) : -5373582730880405323))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_23 = ((4557842237703806271 >= ((1893920654 ? 0 : (arr_2 [i_1])))));
        var_24 = (max(var_24, (~127)));
        arr_5 [i_1] = ((-3 ? 2198748280 : 65119));
        arr_6 [i_1] [i_1] = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_25 = (arr_2 [8]);
        var_26 -= (((arr_2 [4]) ? (arr_2 [16]) : ((var_18 ? 1758403868 : 14556349542365774156))));
        arr_10 [i_2] &= (min(-960440162, (arr_4 [8])));
        arr_11 [i_2] |= (max(var_9, (arr_4 [i_2])));
    }
    #pragma endscop
}
