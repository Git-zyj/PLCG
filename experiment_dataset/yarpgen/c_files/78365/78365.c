/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((-1927270962 ? (((max((arr_0 [i_0] [i_0]), var_14)) >> (((~1927270967) + 1927271027)))) : ((((var_14 >= (arr_2 [i_1])))))));
                arr_9 [i_0] [i_1] [i_1] = (((5 && -1) || (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 *= (((27643 ? ((0 ? 60379 : 60376)) : -22)));
                            var_19 = (max(((((min(20, 5154))) ? var_15 : (((3947902412337974962 ? 1450062734 : (arr_5 [i_1])))))), -63));
                            var_20 = var_9;
                            var_21 = (arr_15 [i_1] [i_0] [i_1] [i_0] [15] [i_3]);
                        }
                    }
                }
                var_22 = (max(var_22, ((max(20438, 3216713180)))));
                var_23 += (min((((-120 ? 419414603 : 119))), var_10));
            }
        }
    }
    var_24 = 17113546990564554683;

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_25 = ((((((!(arr_16 [i_4]))))) == (((arr_13 [i_4] [i_4] [i_4] [i_4]) ? ((-970474974 ? 8355647093258135939 : 3922543023)) : ((((!(arr_2 [i_4])))))))));
        var_26 = ((((min((arr_16 [i_4]), (min(1, 20403))))) ? (max((arr_6 [i_4] [i_4]), (max((arr_7 [i_4] [i_4]), 4691)))) : 16414));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_27 = (min(var_27, -1927270963));
        arr_21 [i_5] = 45746;
        arr_22 [i_5] [11] = ((((max(((18221 ? 39324 : 122)), (17011779686943376991 && 3950585110389753428)))) ? (-652898100 & -20071) : ((60349 ? 51229 : 6516))));
        var_28 = ((~((min((var_4 && 60844), (arr_16 [i_5]))))));
    }
    var_29 = (((!(185 + 232))) ? (!var_5) : var_0);
    #pragma endscop
}
