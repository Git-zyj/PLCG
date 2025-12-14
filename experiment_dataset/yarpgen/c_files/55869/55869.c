/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (1 * var_12);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [1] = (((arr_0 [i_0]) && ((((((((arr_2 [5] [i_0]) > 0)))) | (arr_2 [i_0] [i_0]))))));
        var_18 = (min(var_18, (((((2360592772 || (arr_1 [6] [16])))) - ((((arr_2 [i_0] [i_0]) ? 103 : (arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [1] |= ((+(((arr_1 [i_1] [4]) ? (arr_6 [6]) : (arr_6 [12])))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_12 [i_1] = (((-(2360592772 <= 134217726))));
            var_19 = arr_9 [i_1] [2];
            var_20 = ((((((((arr_6 [i_1]) <= (arr_7 [i_1] [i_1]))) ? (!-138654249) : 692379738))) + (((-127 - 1) ? (arr_9 [i_1] [1]) : (arr_7 [i_1] [i_1])))));
            arr_13 [i_1] = (((255 == 9223372036854775807) == (((!-971287599) ? -138654248 : (~181)))));
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] &= (((((arr_14 [i_3]) ? (arr_16 [i_3] [i_3]) : (arr_5 [i_3]))) + -138654249));
        var_21 = 9223372036854775794;
        var_22 = (min(var_22, (arr_6 [0])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_23 [i_5] [0] = (1 ^ -692379738);
                    var_23 += (((((2947502319 ? ((((4 < (arr_22 [i_4]))))) : 2947502319))) ? (((arr_5 [i_3]) ? (-127 - 1) : (arr_5 [i_4]))) : -474422148));
                }
            }
        }
    }
    var_24 = var_8;
    var_25 += var_6;
    #pragma endscop
}
