/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((((((((arr_6 [i_0] [3] [i_1 - 1] [i_2]) ? 822039655 : -11841))) || (arr_1 [i_0]))) || -11835));
                    arr_8 [i_0] [i_0] [i_1] = (min((max(((11841 ? 4619601977729016093 : 2113530766)), (arr_1 [i_0]))), ((min((2113530767 * 2563596656), var_2)))));
                    arr_9 [i_1] [i_1] = (((((min(1731370618, 2181436530))) ? (((max(var_4, var_2)))) : (arr_2 [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 = ((!(((((max(var_8, 1731370657))) ? var_1 : (max(2563596664, 2113530766)))))));
                                var_11 = (max(var_11, ((((((-(arr_1 [i_1 + 2])))) * (arr_12 [i_3] [i_2] [i_2] [i_3] [i_3]))))));
                                var_12 = (max(var_12, (!var_1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((8171398739976068496 / ((max((~var_7), var_8)))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            {
                var_14 = (max(var_14, ((max((((arr_19 [i_5 - 1] [i_5 - 1]) ^ ((min((arr_17 [i_5]), (arr_22 [i_5])))))), var_9)))));
                arr_23 [i_5 - 1] [i_5] = ((((((((21944 << (((arr_22 [i_5]) - 899819739))))) > var_0))) > (((((var_6 ? 191936105 : 6961780050375279728))) ? 17753 : (!-21927)))));
            }
        }
    }
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            {
                arr_29 [i_7] = (min((~21944), (((arr_27 [i_8 - 1] [i_7 - 2]) << (var_4 - 55737)))));
                var_16 = (max(-11726, (max(var_3, ((~(arr_25 [i_7])))))));
                var_17 = (~var_0);
                arr_30 [i_7 - 1] = (min(-2563596664, var_1));
                var_18 *= (((~6291456) ? 12701950910646487899 : ((2563596678 ? var_3 : (arr_25 [i_8 - 2])))));
            }
        }
    }
    #pragma endscop
}
