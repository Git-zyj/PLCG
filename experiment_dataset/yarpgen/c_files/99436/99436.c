/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_17 = (arr_9 [i_1]);
                        var_18 = (min(115, 9676));
                        var_19 -= ((82 ? -1391877043 : 370235501));
                    }
                    var_20 = (min(var_20, (((((arr_6 [i_0] [0] [i_2 - 1]) && (arr_6 [i_0] [i_0] [i_2 + 3]))) ? (((arr_6 [i_0] [8] [i_2 + 4]) | 16959369221596244900)) : ((((var_9 + 9223372036854775807) << (7491 == 1709294791720229430))))))));
                    var_21 = -370235502;
                    var_22 = (arr_4 [i_0] [i_1]);
                    var_23 = (((-((var_8 & (arr_4 [i_1] [i_2]))))));
                }
            }
        }
    }
    var_24 = (max(var_24, ((((var_15 - -var_16) ? var_13 : var_9)))));
    #pragma endscop
}
