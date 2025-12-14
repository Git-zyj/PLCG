/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_20 = (max(var_20, 1089792081418468892));
                        var_21 ^= (arr_10 [i_1] [13] [i_1] [i_3]);
                        arr_11 [i_3] [i_1] [i_3] = (min(((~(~1))), ((min((!var_16), -5)))));
                    }
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (~var_5);
                    var_22 = var_0;
                }
            }
        }
        var_23 = (min((((!((max(7981860695054748978, var_13)))))), (min(-12128, (((1298736669148609680 == (arr_5 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_24 = (arr_10 [i_4] [i_4] [i_4] [i_4]);
        var_25 = (min(((((7981860695054748973 | 12127) >= (~32765)))), (max((arr_1 [i_4]), 17480800342546158956))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_26 += var_7;
        var_27 = var_7;
        arr_17 [i_5] = (arr_5 [6] [i_5] [i_5]);
    }
    var_28 ^= ((-(((((max(79, 29))) == ((max(240, -30496))))))));
    var_29 &= var_8;
    #pragma endscop
}
