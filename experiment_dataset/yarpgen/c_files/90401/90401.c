/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((~(0 != var_5)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_19 = (((~((var_14 ? 254 : var_0)))));
                                var_20 = 1;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_20 [i_0] = (max(((((((max((arr_19 [i_0] [i_0] [i_6] [i_7 + 1] [i_7 + 1]), -24009)))) <= (var_15 - 3553671994)))), var_9));

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_24 [i_6] [i_6] [i_6] [14] = var_3;
                            var_21 ^= 24009;
                            arr_25 [i_0] [10] [i_6] [i_7 - 2] [i_0] = (~-104);
                            var_22 -= (((arr_4 [i_8]) ^ (arr_17 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 2])));
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_23 = 2392821563;
                            var_24 -= (min(((var_6 ? (max(13752024720661906138, 0)) : (var_17 + 6102))), ((((arr_15 [i_5 - 1] [i_6] [i_7]) / ((((arr_14 [i_0 + 1] [i_0 - 1] [11]) != (arr_16 [i_5] [6])))))))));
                        }

                        for (int i_10 = 3; i_10 < 21;i_10 += 1)
                        {
                            var_25 = (((((23 - ((max(var_5, 58926)))))) ? (arr_18 [i_0] [i_5 - 2] [i_6] [i_7]) : (((((var_12 ? (arr_16 [i_0] [14]) : 6621))) ? (~var_14) : 4398046511096))));
                            arr_31 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0] = var_8;
                            var_26 = ((((!((max(102, -2783787714936525558))))) ? ((((max(1163631693, 1)) > ((((arr_30 [i_0 - 2] [i_5] [14] [i_7] [i_10]) >> (2315236596 - 2315236570))))))) : ((~((~(arr_8 [i_0] [i_0 - 4] [1] [1] [12] [i_0 - 1])))))));
                        }
                    }
                }
            }
        }
        var_27 = var_2;
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {

                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        arr_39 [i_13 + 1] [i_13 + 4] [16] [i_13] [i_12] = (4694719353047645478 ^ 63);
                        arr_40 [i_0 + 1] [i_11] [i_12] [i_12] = (((!var_17) & var_4));
                        var_28 -= var_0;
                    }
                    var_29 = (max(((((arr_34 [i_0] [i_0]) != ((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & var_11)))))), var_8));
                    arr_41 [i_12] [i_11 + 3] [i_12] = (!-6);
                }
            }
        }
        var_30 = var_12;
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            {
                var_31 = 5430554432457621705;
                arr_46 [i_14] = (max(((~((~(arr_17 [i_15] [i_15] [i_15] [i_15] [i_14]))))), 1));
            }
        }
    }
    var_32 -= (((~((13752024720661906121 ? var_6 : 26032)))));
    #pragma endscop
}
