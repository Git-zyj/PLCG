/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-((-(min((arr_4 [i_1]), (arr_4 [i_0 - 2])))))));
                arr_7 [i_1] [i_1] [i_0] = (min(((min(var_6, var_9))), (((min(618573670, 4))))));
                arr_8 [i_0] [i_1] [i_1] = 32746;
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = ((+(((!((max((-2147483647 - 1), 6506316164936639177))))))));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_13 = (min((((-(((!(arr_10 [i_2]))))))), ((((max((arr_13 [i_3]), 65535))) ? (min(var_0, (arr_14 [i_3]))) : (~65535)))));
            var_14 = (-((((min((arr_14 [i_3]), (arr_10 [i_2])))) ? (((var_4 ? var_3 : (arr_11 [i_3])))) : -8402901964894051158)));
        }

        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            arr_17 [i_2] [i_2] [i_2] = (min((min((((var_9 ? 8402901964894051158 : var_1))), ((-(arr_14 [i_2]))))), 12));
            arr_18 [i_4] = (~-var_7);
        }
    }
    var_15 = ((max(((min(13, var_9)), (max(2147483647, -19777))))));
    #pragma endscop
}
