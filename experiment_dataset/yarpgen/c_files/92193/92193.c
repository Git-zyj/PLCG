/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_3 - 2] [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_3 - 1] [i_3 + 1]) != ((((arr_9 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_0]) != var_12)))));
                        var_19 = var_1;
                        var_20 = (max(var_20, ((((((max(2246841980073381039, (arr_5 [i_0 - 1] [i_2] [i_1] [i_0 - 1]))) ? 1192794582 : (83 && -5446))))))));
                    }
                }
            }
        }
        arr_11 [i_0] [14] |= (arr_7 [19] [i_0] [i_0] [i_0 + 2]);
        var_21 = ((-((((max(var_7, 968318475))) / (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_22 = var_14;
        var_23 = (max((~-968318480), (arr_4 [i_0] [i_0])));
    }
    var_24 = (~var_8);
    #pragma endscop
}
