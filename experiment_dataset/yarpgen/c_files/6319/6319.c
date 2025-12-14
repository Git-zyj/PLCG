/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((!(((-(min(2221832409516172168, 800583667)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((((((max(2431394616, -1530568879))) ? 1615366037 : (max(1863572679, var_13)))) + ((0 ? (((arr_5 [i_0] [i_0] [i_1] [2]) + -1530568899)) : ((((arr_4 [i_0] [i_1]) ? 34 : (arr_0 [i_0]))))))));
                    var_20 = (((arr_3 [i_0] [i_2]) ? -var_6 : (arr_4 [i_0] [i_0])));
                    arr_8 [5] = (max((((((max(var_18, (arr_6 [i_0])))) << (((((arr_2 [i_0] [i_1]) & 1863572679)) - 131))))), ((219 ? ((1838272860 ? 4271135867189234319 : (arr_1 [i_0] [i_2]))) : (min(var_3, 8631288807490753273))))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((~(12207829219785936867 ^ var_9))))));
    #pragma endscop
}
