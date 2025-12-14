/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = (min(var_8, ((min((var_11 || 3270013757), ((251108988 << (var_7 - 1913533118))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (min(((((((arr_0 [i_0]) ? 635111991 : 107102505))) / (min((arr_3 [19] [i_1] [i_2]), var_13)))), var_16));
                    var_22 = (min(var_22, ((max((arr_3 [i_2 - 1] [i_2 - 1] [i_2]), (min((max(var_8, (arr_0 [7]))), -3033193630446366821)))))));
                    arr_7 [5] = (max((4294963200 / -4046994423893748025), 852641170));
                }
            }
        }
    }
    #pragma endscop
}
