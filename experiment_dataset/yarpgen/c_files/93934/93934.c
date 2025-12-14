/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 &= (max((max(var_2, (((var_4 ? 38 : 954443111))))), -var_1));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((!((min(1, 1333042016))))))));
                    arr_9 [i_0] = ((((max(((var_11 ? var_2 : var_7)), var_13))) ? var_12 : 245955853));
                    var_17 = ((((min(var_6, (max((arr_1 [i_0]), var_12))))) ? (((-((8994416590538564090 ? 13488 : -6471))))) : ((max(var_10, var_5)))));
                }
            }
        }
        arr_10 [i_0] = ((~((((62764 ? 126 : 13842868293613296004)) & var_3))));
        arr_11 [i_0] [i_0] = ((((!(~var_0))) ? ((-((var_4 ? (arr_7 [i_0] [i_0]) : var_13)))) : (max(((max(var_7, var_5))), (max(var_2, var_8))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_18 [i_4] [i_4] [i_4] = (max(((max(var_13, -29763))), (max(var_8, (var_7 - var_10)))));
                var_18 = (max(247319993, -63));
            }
        }
    }
    #pragma endscop
}
