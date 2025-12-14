/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((min(((~(min((arr_2 [i_0] [i_0 + 1]), -30232)))), ((-130816 ? (arr_2 [i_0] [i_0 + 2]) : (arr_0 [i_0 + 2] [i_1]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_21 = ((1832550817171167840 ? (arr_3 [i_0 + 1]) : (arr_1 [i_0 + 3])));
                    var_22 += ((((52 ? (arr_6 [i_1] [i_2]) : (arr_1 [i_0 + 1])))) ? (arr_3 [i_2]) : (4860547248329632634 != 220));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_23 = (min(var_23, (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                    var_24 = ((552472346 ? (((((-8836711393628492923 ? 0 : (arr_5 [6] [16] [i_3])))) / ((4294836488 ? -1 : var_0)))) : 1));
                    var_25 = ((var_9 ? ((var_6 ^ (arr_8 [12] [i_0] [i_0] [i_0]))) : 14));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_26 *= (((((((85 + (arr_1 [i_1])))) ? (((arr_9 [i_0 - 1] [1] [11]) - (arr_5 [i_0] [i_1] [i_4]))) : (((arr_0 [i_0 + 3] [i_6]) ? var_13 : 1)))) * (min((max(262143, 192)), (arr_16 [i_4] [i_1] [i_4] [i_5])))));
                                var_27 += ((var_2 ? (max(((593792223 ? (arr_13 [i_0] [i_1] [18] [i_5]) : var_2)), var_7)) : (((((((min((arr_9 [i_0 - 1] [i_5] [i_6]), (arr_16 [i_4] [6] [i_5] [i_6]))))) == (arr_1 [i_0])))))));
                                var_28 = (max(var_28, (((-1179083058 - (min(-1179083057, (((arr_7 [i_0 + 2] [19] [i_0]) ? (arr_8 [i_4] [i_4] [i_4] [i_5]) : (arr_0 [i_0 + 3] [i_1]))))))))));
                            }
                        }
                    }
                    var_29 = (max((((((arr_15 [10] [10] [i_4]) ? 4294836495 : (arr_16 [i_4] [i_0 - 1] [i_0 + 2] [i_0 + 2]))) & (((14909 ? -619811910 : -9530))))), (((min(1406656678, 7340032)) ^ (((arr_17 [i_0 - 1] [10] [i_4] [i_0 + 1] [i_0]) << 1))))));
                }
            }
        }
    }
    var_30 = var_6;
    var_31 = (max(var_31, (1 > 17)));
    var_32 = (min((3676140330631302857 >> 3), (((4294967295 || (((var_18 ? 1 : -352574459410046522))))))));
    #pragma endscop
}
