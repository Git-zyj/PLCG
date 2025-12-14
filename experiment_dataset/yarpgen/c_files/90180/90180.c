/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_16 = ((-(((-82 && (arr_2 [i_1] [5]))))));
            var_17 = var_10;
            arr_5 [1] [i_1] = (arr_4 [i_1 + 2]);
        }
        var_18 += ((-(131071 / var_12)));
        arr_6 [i_0] = -105;
        var_19 = (min(var_19, (!var_8)));
        var_20 = (min(var_20, (((4066735155 ? (!5219384794115586417) : 64076)))));
    }
    var_21 |= (max(var_12, ((((4095 <= var_8) + var_11)))));
    var_22 = (max((~var_7), 595858712861441229));
    #pragma endscop
}
