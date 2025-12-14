/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((arr_0 [2]) <= var_2))) | (((arr_0 [4]) ? 221 : (arr_0 [0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((((!(arr_2 [i_0] [i_1] [i_0]))) ? ((min((arr_0 [i_0]), 18))) : (arr_0 [i_0]))) & (arr_3 [i_0] [i_0 + 2]));
                    arr_7 [i_2] [i_0] [i_0] [i_1] = arr_3 [i_0] [i_1];
                    arr_8 [i_2] [i_0] = ((219 ? (arr_4 [i_0] [i_0] [i_0] [i_0 - 1]) : var_14));
                    var_17 = ((((max(18446744073709551612, (16533798672626970558 < var_3)))) || ((min((min(18446744073709551612, var_4)), ((((arr_0 [i_0]) & 1885781001))))))));
                }
            }
        }
        arr_9 [i_0] = ((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0]) : (min(3077851396977642106, 15)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (max(var_18, ((((arr_11 [i_3] [i_3]) >= ((min(7687989534491849788, 22))))))));
        var_19 = (max(var_19, 536870911));
        arr_12 [i_3] = ((((!(arr_10 [i_3] [i_3]))) ? (246 | 30185) : (min(13365093806177080815, 18446744073709551612))));
    }
    var_20 = ((var_8 ? (((((min(var_14, var_6))) ^ 0))) : ((~(var_12 - var_1)))));
    var_21 = ((var_5 ? var_1 : var_4));
    #pragma endscop
}
