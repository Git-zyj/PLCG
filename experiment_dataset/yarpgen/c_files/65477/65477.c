/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (min(var_21, (((((0 ? ((max(1, 1))) : 88))) ? 18446744073709551605 : ((-((3340789513 ? 4294967295 : (arr_0 [i_0])))))))));
        var_22 = (max(var_22, ((min((((arr_0 [i_0]) ? 1309358806400874979 : 17137385267308676644)), 0)))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_23 += 9223372036854775807;
            var_24 = -110;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_25 = (min(83, ((0 ? 21436 : 6009212409213577151))));
            var_26 = arr_4 [i_0];
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_27 = 17970387442682550469;
            arr_9 [i_0] [i_0] = (max(((((0 ? -6760371887696073849 : 65535)))), 0));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_28 |= arr_16 [i_5] [i_4];

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_29 *= (arr_13 [i_0] [4] [i_6] [i_7]);
                            var_30 = (max(var_30, (((((((arr_5 [i_0]) ? 1 : (arr_5 [i_5])))) ? (arr_5 [i_7]) : (arr_5 [i_0]))))));
                        }
                        arr_21 [i_5] [i_5] = ((1063462969 ? ((((arr_1 [i_0] [i_5]) ? 245 : 1))) : ((((!(arr_0 [i_4])))))));
                        var_31 = (max(((((((208 ? 14 : 12))) ? (arr_5 [i_0]) : 208))), 3914454717));
                    }
                }
            }
        }
        var_32 = (min(var_32, 6869122255918076123));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_33 = (((arr_22 [i_8]) ? ((3434567789 ? 0 : (arr_23 [i_8]))) : (((~(-127 - 1))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_34 += (0 ? -65535 : (arr_23 [i_8]));
                        var_35 |= (!25);
                    }
                    arr_32 [i_8] [i_8] [i_10] = 12465009653866048838;
                    var_36 = (((arr_28 [i_8] [i_8] [i_10]) ? 238 : ((-14 ? 65535 : (max((arr_22 [i_9]), 49))))));
                }
            }
        }

        /* vectorizable */
        for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
        {
            var_37 = ((14 ? ((-55 ? 245 : (arr_30 [i_12]))) : ((250 ? 3434567793 : 9176012409895409332))));
            var_38 = (((arr_34 [1] [i_12] [i_8]) ? -44 : (arr_34 [i_8] [i_12 - 1] [i_12 + 2])));
        }
        for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
        {
            arr_39 [i_8] = (((arr_34 [i_13 - 1] [i_13 - 1] [i_13]) ? (arr_37 [i_13]) : 2069921205));
            var_39 = 2721542771;
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        var_40 = (arr_26 [i_14] [i_14]);
        var_41 = 1;
        var_42 = (max(var_42, ((!(arr_25 [i_14] [i_14] [i_14])))));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            {
                var_43 = (min((((arr_45 [i_16] [i_15]) ? (arr_45 [i_15] [i_16]) : 14382)), (arr_45 [i_16] [i_16])));
                var_44 += arr_44 [i_15];
                var_45 = ((((16322808297434820785 ? 0 : 4294967295))));
            }
        }
    }
    var_46 = (max(var_46, 255));
    #pragma endscop
}
