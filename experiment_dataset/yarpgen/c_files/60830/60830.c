/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (-(((arr_1 [i_0]) ? 98 : (arr_1 [i_0]))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] = ((!(((-(arr_2 [i_2 - 1]))))));
                    var_14 = (min(var_14, (((~(((arr_1 [i_1]) ? (max((arr_3 [i_2 - 1]), -13363)) : (~34498))))))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_10 [i_3] = (max(((17 ? 173 : 31024)), var_7));
                    arr_11 [i_3] [i_3] [i_0] = 11840980083985352623;
                    var_15 = (min(var_15, ((max(((max(244, 31011))), (min(2147483647, (arr_5 [i_0] [i_0] [i_3]))))))));
                }
                arr_12 [i_0] [i_1] = ((((31024 ? 246 : 33554431)) - 6926203212706217985));
            }
        }
    }
    var_16 = (max(var_16, (((((max(var_12, ((max(178, 171)))))) ? var_10 : 197)))));
    var_17 = 98;
    #pragma endscop
}
