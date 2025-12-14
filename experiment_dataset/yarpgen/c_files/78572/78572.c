/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_20 |= (!13);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_21 |= ((((((-26861 || 147) ? var_10 : 6144))) ? (1649 > var_8) : (max(var_15, 1567991577))));
                        var_22 = (min(var_22, ((((var_2 ? ((15 >> (119 - 104))) : (!var_7)))))));
                    }
                }
            }
            var_23 = (arr_1 [i_0]);
            arr_13 [i_0] [i_1] = ((((((34 >= -26142) >> var_9))) ? (((~3734009014) ? ((var_14 ? var_12 : var_5)) : 1)) : (((((var_16 >= 16760832) && ((min(var_18, var_7)))))))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_24 &= ((~(arr_11 [i_0] [i_0] [i_0] [i_4])));
            var_25 ^= (((min(3099395306657215848, 8))) && -7284577786665699284);
            var_26 = (max(var_26, ((((((var_19 == (arr_11 [i_0] [i_4] [i_0] [i_0])))))))));
            var_27 = (((((arr_9 [i_4] [i_4] [i_0] [i_0]) ? (arr_11 [i_0] [i_4] [i_0] [i_4]) : 1)) * var_1));
            var_28 = 1920;
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_29 *= (~109);
            var_30 = var_1;
            var_31 = ((((((~9882045170611334751) ? (1792 == 17558245413371602493) : (min(23249, -1251620831))))) == 546264091169128228));
            var_32 = (max((max((var_16 && 1), ((17658119690181562198 ? 0 : 52931)))), -84));
            arr_20 [i_0] [i_0] [i_5] = 250;
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_31 [19] [10] [i_8] [i_8] [i_8] [i_7] = (-32767 - 1);
                        var_33 = 184;
                    }
                }
            }
        }
        arr_32 [i_0] [i_0] = (arr_0 [i_0] [21]);
    }
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        var_34 = -159071564;
        arr_37 [i_9] [1] = var_1;
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 7;i_10 += 1)
    {
        arr_40 [i_10] = 1128992496024712903;
        var_35 += 1843655553335565609;
        var_36 ^= (4218784553 & 1);
    }

    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_37 = ((((((-127 - 1) * (arr_41 [i_11])))) && (((arr_43 [i_11]) == (min(0, -617431466))))));
        arr_44 [i_11] = var_11;
    }
    var_38 = (max(var_38, ((((!2146959360) >> (((!-112) * var_3)))))));
    #pragma endscop
}
