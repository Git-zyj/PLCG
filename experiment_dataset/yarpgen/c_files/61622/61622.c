/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] &= (((arr_0 [i_0]) & ((13551688659352618201 / (-127 - 1)))));
        var_16 = (-23612 || var_5);
        var_17 = (min(var_17, (~-2)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_18 = (arr_3 [i_1] [i_1]);
        var_19 = (min(var_19, ((((max(2095104, 2693636261)) & (((max(-2095105, (-32767 - 1))))))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = min(((((((((arr_0 [i_2]) && (arr_5 [i_2]))))) <= 23593))), (max((((-9223372036854775807 - 1) ? -686439350543005015 : 10828888576237872073)), (!254))));
        var_20 = 1033242893;
        arr_8 [1] [i_2] = max((arr_0 [i_2]), (((!((min(-1681657566214508077, (arr_1 [19] [19]))))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_21 += (var_10 - -2095105);

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_22 = (min(var_22, (arr_11 [i_4])));
            var_23 = 0;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_24 = (min(((((max(2828250173115535687, 0))) ? (~6) : 686439350543005014)), (arr_16 [i_3])));
                            var_25 -= (((((((min(var_12, var_5))) ? (arr_11 [i_6]) : (((!(arr_21 [i_4] [i_4] [i_3]))))))) * (max(12683663018007800483, 24741))));
                        }
                    }
                }
            }
            var_26 = (((10 > 40819) ? ((((((7503948041358342454 >= (arr_17 [i_4])))) >> ((((arr_6 [i_4]) < var_12)))))) : ((max(8480055792878260791, 1)))));
        }
    }

    /* vectorizable */
    for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_27 = (arr_3 [i_8 - 1] [i_8 - 1]);
        arr_25 [i_8 - 1] [11] = ((13 ? 10998553661773817239 : (arr_16 [i_8])));
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_28 *= ((max((arr_28 [i_9]), -2095122)) > (((((var_8 & (arr_12 [i_9 - 1])))) ? ((-5384361370704813182 ? (arr_10 [i_9]) : (arr_1 [i_9] [i_9]))) : (arr_11 [i_9 + 1]))));
        var_29 *= (10998553661773817228 + (((1 ? 16384 : -2095122))));
        arr_29 [i_9 - 2] = (((max(-22804, (!2095123)))) ? ((max(1, (var_11 == -15289)))) : (((arr_5 [i_9 + 1]) ? var_10 : (arr_10 [i_9 + 1]))));
        var_30 = (max(var_30, (arr_10 [i_9])));
        var_31 = (min(var_31, ((((((-(arr_10 [i_9 + 2])))) ? (arr_27 [i_9 + 1]) : (arr_27 [i_9 - 1]))))));
    }
    var_32 &= ((((min((-36 < 15288), var_3))) < 2466));
    var_33 = (max(var_0, ((var_10 ? ((var_8 ? var_2 : var_1)) : -2467))));
    #pragma endscop
}
