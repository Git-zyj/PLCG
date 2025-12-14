/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = 32767;
                var_12 = (((((min(32766, 33554431))) % -7364507470835346497)));
                var_13 = 625560374;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_2]);
                            var_14 = (arr_3 [i_1]);
                            var_15 = (1 + 511);
                            arr_15 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_0 + 1] = -46;
                            var_16 = (arr_12 [i_0] [i_0] [i_1] [i_3] [i_0] [i_3]);
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_17 = ((((arr_9 [i_4] [i_4] [i_4]) ? -32754 : 28600)));
        var_18 = (((arr_5 [1] [1] [i_4]) | ((((arr_17 [i_4]) && 3081719349)))));
        var_19 = (arr_16 [i_4]);
    }
    var_20 = 3857714274375716821;
    var_21 = ((1 & 168) | var_8);
    #pragma endscop
}
