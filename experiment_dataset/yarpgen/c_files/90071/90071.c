/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((1 ? 0 : 1)) >> var_0)) ^ var_9));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_11 = ((~(((arr_3 [i_1]) ? (arr_0 [i_1 - 2] [i_1 - 1]) : (~504)))));
            var_12 = 1;
        }
        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            arr_8 [i_2] [i_2] = ((39207 ? (arr_4 [i_2] [i_2]) : (arr_3 [i_2])));
            var_13 = (((max(1, 3997291211)) * (((var_1 ? (arr_4 [i_2] [i_2 - 2]) : (arr_4 [i_2] [i_2 - 2]))))));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_14 &= -5450515291154767062;
            var_15 = 8070450532247928832;
        }
        var_16 = (max(var_16, (arr_0 [i_0] [i_0])));
        var_17 = (min((arr_5 [i_0] [i_0]), (arr_4 [i_0] [i_0])));
    }
    var_18 = (max(var_18, var_8));
    var_19 = var_6;
    #pragma endscop
}
