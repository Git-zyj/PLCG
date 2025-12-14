/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = 9223369837831520256;
                    arr_8 [i_2] [i_0] [i_0] |= ((((28 / (arr_3 [i_0 - 1]))) * -9223369837831520256));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_3] [i_2] [i_1 - 1] [i_0] &= (((((arr_2 [i_0 - 1]) ^ (var_16 == var_14))) < (arr_5 [i_0 - 1] [i_2] [i_3])));
                        var_21 = ((131072 - ((((((arr_4 [5] [i_1 - 1]) - 28))) - -9223369837831520257))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_22 = (245 != 3990664576);
                        var_23 += (245 && var_8);
                        var_24 += 245;

                        for (int i_5 = 3; i_5 < 8;i_5 += 1)
                        {
                            var_25 |= (arr_2 [i_0 - 1]);
                            arr_17 [i_0] [i_0] [i_4] [i_0] [i_5] = (40 ^ var_17);
                        }
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            arr_20 [i_1 - 2] [i_1 - 2] [i_1] [i_6] [i_1] [i_1 + 1] = (arr_5 [i_6 - 2] [i_1 - 2] [i_0 - 1]);
                            arr_21 [i_0] [i_2] [6] [i_4] [i_6] [0] [i_0] &= 33521664;
                            var_26 = (max(var_26, ((((645611880 && 71) << (-264470873 + 264470901))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (var_6 / var_19);
    var_28 = var_7;
    var_29 = (max(var_29, var_0));
    #pragma endscop
}
