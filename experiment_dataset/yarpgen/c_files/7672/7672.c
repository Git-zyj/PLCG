/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (max(3996, ((max((((!(arr_0 [i_0] [i_0])))), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        var_14 &= ((-(min((~var_10), (((~(arr_0 [5] [i_0]))))))));
        arr_2 [i_0] = (max(((-(max(-635114902, -3963)))), (((-(arr_0 [i_0] [i_0]))))));
        var_15 = (min(var_15, ((min((min(var_1, ((min((arr_0 [i_0] [i_0]), 2288))))), (max(1, -63248)))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 = ((-(min((max(var_3, (arr_5 [i_1] [i_1]))), ((min((arr_4 [i_1]), 2275)))))));
        var_17 = (min(var_17, ((min(((max(-478652728401544293, 635114926))), ((max((max(var_2, -635114893)), -251372489))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_18 = ((-(arr_0 [i_2] [17])));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] = 15;
            var_19 = (min(var_19, (((-(~1))))));
            var_20 = var_10;
            var_21 = 63250;
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_22 = (((-(arr_0 [i_2] [i_4]))));
            arr_17 [i_2] [i_4] [i_4] = var_3;
        }
    }
    var_23 = (min(var_23, (((min(-251372489, (max(var_10, 11))))))));
    #pragma endscop
}
