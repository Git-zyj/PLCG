/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 > ((var_2 ? (~var_9) : ((max(16110, var_5)))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_2] = var_2;
                        arr_12 [i_0] [i_1 + 1] |= 49426;
                        var_12 = (arr_4 [i_3] [5] [i_1]);
                        var_13 ^= (((arr_7 [i_1] [i_1 + 3] [i_1]) || var_3));
                    }
                }
            }
        }
        var_14 = (((arr_3 [i_0] [i_0 + 2] [i_0 + 1]) + var_5));
        var_15 += ((190 ? 43420 : 1));
        arr_13 [i_0 + 1] = ((43833 ? 1366738659 : 2107088073));
        arr_14 [i_0] [i_0] = (!var_8);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_19 [1] [i_4] = (arr_1 [i_4 + 2]);
        var_16 = (~var_2);
    }
    var_17 = (min(var_17, var_6));
    var_18 = var_8;
    var_19 = ((((max((max(var_2, var_10)), var_5))) ? ((((!(!6626))))) : var_6));
    #pragma endscop
}
