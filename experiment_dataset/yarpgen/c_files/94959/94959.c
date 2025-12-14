/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((((((var_5 ? var_3 : var_9))) ? var_4 : var_5)), var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 = (!4209803159);
            var_13 ^= ((~(((85164136 || (arr_1 [i_0] [i_1]))))));
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_0] [22] &= ((~(arr_0 [i_2 - 2])));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_14 = (max(var_14, 8715199889698975624));
                var_15 = ((((-(arr_1 [i_0] [i_3]))) == ((((arr_10 [i_3]) > (arr_1 [i_0] [i_0]))))));
            }
            var_16 = (0 - 224);
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_17 = (min(var_17, (arr_12 [i_4 + 1] [i_4 - 2] [22])));
        arr_15 [i_4 - 1] [i_4 + 1] = (arr_1 [i_4 + 1] [i_4 - 1]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 -= (((((~(arr_6 [i_5] [i_5])))) ? (((((~19392) && (arr_6 [i_5] [i_5]))))) : (min((arr_0 [i_5]), (((3702244361 ? (arr_11 [23] [23] [i_5] [i_5]) : 1820084995)))))));
        var_19 = var_1;
    }
    var_20 = ((-4209803164 == 42) ? ((max((var_5 && 32), (max(var_6, var_2))))) : ((-(max(3689919566087975393, var_1)))));
    var_21 -= var_9;
    #pragma endscop
}
