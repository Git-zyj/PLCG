/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, ((min((((-456296565000295698 / var_1) / (((max(0, (arr_10 [i_0] [i_1] [i_1] [i_0]))))))), (((var_5 * 113) / (max(var_12, 9461588220014593821)))))))));
                        arr_11 [i_1] [i_1] [1] [6] [i_3 + 1] = (min(((((var_12 == var_13) & (-65 - 135)))), (((max((arr_2 [i_0] [i_3]), 15051)) * (((min((arr_8 [i_0] [i_0] [i_0] [9] [9]), (arr_8 [i_0] [i_1] [i_2] [i_3] [2])))))))));
                    }
                }
            }
        }
        var_15 = (min((max((min(3150100679, var_12)), (max(var_9, (arr_4 [i_0]))))), (max((max((arr_0 [i_0]), 1178155054)), (max(var_2, var_4))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_16 = (((min((max(3150100698, 681016356)), ((min(1, (arr_6 [i_4])))))) <= ((((((min((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]), var_5))) && ((max((arr_7 [i_4] [i_4] [11] [8]), var_3)))))))));
        var_17 = (((((max(var_2, 40085)) - (65 / 1737831626))) < (((min(var_0, (arr_1 [i_4]))) - (((max((-127 - 1), (arr_6 [i_4])))))))));
        var_18 = (((max((((var_10 < (arr_6 [i_4])))), (min((arr_14 [i_4]), var_0)))) == ((max((234 / 24815), (min(4294967287, (arr_8 [i_4] [i_4] [i_4] [5] [i_4]))))))));
        arr_16 [i_4] = (min((((((max(var_7, var_8))) && ((max((arr_0 [1]), var_0)))))), (max((min(-573258425, (arr_2 [11] [i_4]))), (min(var_2, (arr_15 [6] [2])))))));
        var_19 = (min(var_19, ((((((var_1 ^ 24819) & (((((arr_10 [i_4] [10] [i_4] [i_4]) == 1737831602)))))) | (max((max(15051, 14335704199297403852)), ((((arr_8 [3] [3] [i_4] [i_4] [i_4]) && 0))))))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_25 [i_5] [i_5 - 1] [i_6] = ((((((var_3 << (122 - 107))) - ((max(1, 1162304096))))) == ((((((var_11 && (arr_21 [i_6] [i_6] [7]))) && (var_3 || 82)))))));
                arr_26 [18] [i_6] [18] &= (((min(((max(0, var_13))), (min(-9009482582433301532, var_6)))) * (((((((min(var_9, var_8)))) >= (min(-1546300741440385481, (arr_17 [i_5] [i_6])))))))));
                var_20 = (((((((((max(var_11, 128)))) >= (min(var_4, (arr_23 [17] [17] [i_6]))))))) * (((var_5 + 13938561001297918862) ^ ((((var_11 != (arr_23 [i_5] [i_6] [i_6])))))))));
                var_21 = (((min(((max(-8711, 1))), (41167 / var_2))) < ((((((((arr_17 [11] [i_6]) ^ (arr_19 [i_5 - 1]))) + 2147483647)) >> (((min(var_6, var_4)) - 2671777235)))))));
            }
        }
    }
    var_22 = (max(((min((var_3 != 123), (min(var_2, 113))))), (((0 & var_5) - (var_3 - 10548824182399130361)))));

    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_30 [1] = min((((((min(var_10, (arr_29 [i_7] [i_7])))) || ((-2147483647 || (arr_28 [i_7] [i_7])))))), (min((max(9009482582433301532, var_0)), ((max(135, var_3))))));
        arr_31 [i_7] &= (max(((((min(2479243102025152303, 120)) == (max(9009482582433301532, 2616572395900283190))))), (max((max(var_12, var_4)), ((max(var_8, var_7)))))));
        arr_32 [i_7] [i_7] = (min((((((((arr_28 [4] [i_7]) != 2479243102025152295))) / (113 ^ -77)))), (max(((((arr_29 [i_7] [i_7]) == var_10))), (max((arr_28 [i_7] [i_7]), var_9))))));
        var_23 = ((((((((((arr_28 [13] [i_7]) >> (arr_27 [5])))) || (1 >= 0))))) == (max((var_0 * 1321372908), ((max(255, (arr_27 [i_7]))))))));
    }
    #pragma endscop
}
