/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max((max(4294967277, 16)), 41021));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1] = ((23967 ? (((arr_1 [i_0] [i_1]) ? (arr_1 [i_1] [i_0]) : (arr_2 [2] [i_1] [i_0]))) : var_4));
            arr_5 [i_0] = (((arr_0 [i_0] [i_0]) ? 64438 : (arr_3 [i_0])));
            var_17 = 4294967277;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_18 &= (((max(((~(arr_2 [i_0] [i_2] [i_2]))), (var_1 % var_5))) > (((23967 ? 511 : 23942)))));
            arr_8 [i_0] [i_0] = ((~(min(var_9, 41553))));
            arr_9 [i_0] [i_0] = -14571;

            /* vectorizable */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                arr_12 [i_0] [i_2] [i_2] [i_3 - 1] = 0;
                var_19 += 12;

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_20 = (65015 && var_6);
                    arr_15 [i_0] [i_2] [i_3] [i_3] = var_1;
                }
                var_21 -= 511;
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_22 *= var_13;
                arr_18 [i_0] [i_0] [i_0] [i_0] = (max(var_12, var_15));
                var_23 *= 134;
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_24 = ((!((((min(37316, 255)))))));
            arr_22 [i_0] [i_6] [i_6] = 5764;
            var_25 = var_2;

            for (int i_7 = 4; i_7 < 20;i_7 += 1)
            {
                arr_26 [i_7] [i_0] = (min(var_12, 35));

                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    var_26 ^= 8078182708241127805;
                    var_27 = -6488366856219761614;
                    var_28 = ((-(((0 ? 3 : 59780)))));
                    var_29 |= ((((min(0, -1))) ? 21 : ((max(59771, (-5447542598206204213 / 4398012956672))))));
                }
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_37 [i_0] [i_9] [i_9] [3] = ((4294967260 ? 13787400310989952487 : 2464428124889376752));
                    var_30 = ((~(((max(var_2, var_9))))));
                    arr_38 [i_9] [i_6] [i_6] [i_6] = (max((((var_0 ? 16 : var_4))), (38 ^ var_3)));
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_41 [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] &= var_1;
                    var_31 |= ((12 ? ((min(14, 21549))) : 41590));
                }
                arr_42 [i_9] = 8078182708241127805;
            }
            var_32 *= ((~((min(var_13, 120)))));
        }
        var_33 &= (var_15 > 65024);
        var_34 &= (((((45 ? (((var_0 ? 1 : 59781))) : 0))) ? 14282069624866412014 : ((((min(var_3, 1)))))));
    }
    var_35 = 4294967261;
    #pragma endscop
}
