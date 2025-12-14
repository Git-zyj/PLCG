/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (min((1 | 4398046511103), ((min(var_16, (((var_18 ? var_13 : -15))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (max(var_21, (((+((((arr_2 [i_0]) < var_10))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = (((var_19 && (arr_9 [i_0]))));
                                var_23 = var_7;
                                var_24 = (min(var_24, (arr_8 [i_0] [i_0] [i_4])));
                                var_25 = (arr_0 [i_3] [i_4]);
                            }
                        }
                    }
                    var_26 += (arr_12 [i_0] [i_1] [i_1] [i_1] [10] [i_2] [1]);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_27 = ((1 ? 4398046511106 : -1));
                                var_28 = 83;
                                var_29 ^= (((arr_17 [i_1] [i_1] [i_1] [i_5 + 3]) ? (arr_17 [i_5] [i_5] [i_5] [i_5 + 3]) : (arr_17 [i_5] [i_5] [i_5] [i_5 + 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_30 &= (min((arr_18 [i_7]), (arr_18 [i_7])));
        var_31 = 4398046511106;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_32 = (min(var_32, ((((!var_1) ? 1 : ((((arr_19 [i_8]) || var_3))))))));
        var_33 = (max(((min((((arr_19 [9]) ? var_18 : (arr_21 [i_8]))), ((min(var_16, (-32767 - 1))))))), 1069547520));
        var_34 = ((((((3 ^ 1) << ((((var_2 << (1155891310 - 1155891295))) - 1277948))))) + ((1155891316 ? (-4398046511111 * 46838) : (min(4398046511083, 4294967277))))));
    }
    var_35 = (min(var_35, 0));
    #pragma endscop
}
