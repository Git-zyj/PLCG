/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [0] &= var_8;

        for (int i_1 = 3; i_1 < 6;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_12 -= (((var_11 >= 643838885) ? var_2 : 110));
                var_13 = (((var_4 ^ 17460150708020415160) | (986593365689136464 ^ var_4)));
                var_14 = (min(var_14, (var_0 > var_4)));
            }
            var_15 = (max(var_15, -6362));
            arr_7 [4] |= ((-((((var_4 <= var_5) <= ((4836756983337148412 ? 17460150708020415174 : var_11)))))));
        }
        for (int i_3 = 3; i_3 < 6;i_3 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_15 [i_0] = (~var_1);
                arr_16 [i_0] [0] [i_3] [0] &= 1360081220420491342;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_20 [i_0] [i_0] [i_0] [4] = 32767;

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_5] [i_6] [5] = (min((!458587955138561281), (max((415656121 & 17086662853289060274), -12560))));
                        var_16 = var_4;
                    }
                    arr_28 [i_6] [i_6] [i_0] [i_5] [i_6] [i_6] = 2147483647;
                    var_17 = ((11009 ? (((~((23178 ? 415656114 : 2147483647))))) : 17460150708020415138));
                }
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_18 = (max(var_18, (-415656120 ^ 478013282)));
                    var_19 ^= ((((!(var_0 < 4234662423))) || (~var_3)));
                }
            }
            var_20 = (min((max((32756 || 127), ((986593365689136474 ? (-2147483647 - 1) : 3731511351)))), 415656120));
            arr_31 [i_0] [i_0] [i_3 + 1] = (-6570 == 2147483625);
        }
        /* vectorizable */
        for (int i_9 = 3; i_9 < 6;i_9 += 1) /* same iter space */
        {
            arr_34 [i_0] [i_9] [i_0] = var_4;

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_21 -= 13452;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 8;i_12 += 1)
                    {
                        {
                            var_22 = (min(var_22, (32767 ^ 17460150708020415181)));
                            arr_42 [i_11] [i_11] [i_11] [i_11] [8] [i_11] [i_11] |= (17460150708020415146 * -12601);
                        }
                    }
                }
            }
            var_23 -= (var_11 % var_1);
        }
        for (int i_13 = 3; i_13 < 6;i_13 += 1) /* same iter space */
        {
            arr_45 [i_0] [i_13] = var_8;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 8;i_16 += 1)
                    {
                        {
                            var_24 += (min(-32763, (min(var_6, (var_11 == -32749)))));
                            var_25 = (min((((17460150708020415162 || 45370352) % (1428750544 || var_1))), ((((17670254869169100139 ? 32767 : var_4)) & var_6))));
                            var_26 |= (15605944360011744871 % (min(32760, ((-29727 ? 12593 : 0)))));
                        }
                    }
                }
            }
            arr_54 [i_0] [i_0] [i_0] = ((((var_2 & var_5) + 2147483647)) << (((((var_5 + 2147483647) >> 0)) - 2147483616)));
            arr_55 [i_0] [i_13] [i_0] = ((~703698627) ? (min(13017361961190440547, 31212)) : (((min(302, 18650)))));
        }
    }
    var_27 ^= 610;
    #pragma endscop
}
