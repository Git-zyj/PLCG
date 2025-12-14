/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = var_4;
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = (4231181795 ? 489338276 : 117440512);
                            var_14 = ((!(((992573687 ? 117440533 : 1854912930)))));
                            var_15 -= max(var_8, ((var_1 / (arr_10 [i_0] [i_1] [i_2] [i_3]))));
                            var_16 = (var_6 - ((((var_0 != (arr_2 [i_0]))))));
                        }
                    }
                }
                var_17 = min((min(((var_3 ? 3987384627 : 3867197531)), (max(var_3, 4294967288)))), (arr_3 [20] [i_1] [i_1]));
                var_18 = 4294967295;
                var_19 = (((max(var_8, (arr_2 [i_0])))) ? (arr_5 [i_0] [i_0] [i_0]) : (max((arr_5 [i_0] [i_1] [16]), (arr_8 [i_0] [i_1]))));
            }
        }
    }
    #pragma endscop
}
