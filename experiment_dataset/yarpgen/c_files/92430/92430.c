/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((+(max((~var_1), 17782))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (min((max(((max(var_17, 64))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : 2720)))), 3842895312));
        arr_2 [i_0] = -15077;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_21 = (min(var_21, (((((((~var_0) ^ (!var_13)))) ? ((((((arr_3 [i_1]) ? 0 : 2704))))) : (((((50 ? var_17 : (arr_1 [i_1])))) ? (((-113307578 ? (arr_5 [i_1] [i_2 + 1]) : -31))) : 3)))))));
            var_22 |= (max(((var_6 ? (min(var_6, (arr_6 [i_1] [i_2 + 3]))) : -319909838)), (arr_5 [i_2] [i_1])));
        }
        arr_7 [i_1] = (min((((arr_5 [i_1] [i_1]) ^ (var_6 / 1805))), (arr_4 [i_1])));
        var_23 = ((((max((((var_6 ? var_2 : (arr_0 [i_1])))), (min((arr_3 [i_1]), -2720))))) ? 255 : (min(((0 ? (arr_1 [i_1]) : 14282634284084417413)), 32034))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_24 = max(33517, var_0);
                        var_25 -= ((33 ? (min((max(var_13, var_13)), (var_0 + var_13))) : var_2));
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = (min((((!2147483647) ? 45110 : (min(3659737613, -14218)))), (min(var_6, (var_0 - 0)))));
                    }
                }
            }
        }
    }
    var_26 = 255;
    var_27 = (((((((min(-14245, 6))) ? (((4294967295 ? 33 : var_5))) : (max(2905972578, var_14))))) && var_16));
    #pragma endscop
}
