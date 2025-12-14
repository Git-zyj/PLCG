/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = -5978;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 = (((min(-0, ((max(1, 95))))) * (!-127)));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_21 = -1;
                var_22 |= ((!(((var_14 ? 963192336 : 455378698)))));
                var_23 = ((((!((!(arr_2 [i_1] [i_1]))))) ? (((!(arr_5 [i_1])))) : 219));
            }
            var_24 = (((arr_5 [i_0]) ^ ((((207 ? 4648651487465430048 : 1)) - ((((arr_1 [i_0]) ? 1 : 10)))))));
            var_25 = ((-(((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_1])))));
            var_26 -= (max(10, ((-(arr_1 [i_1])))));
        }
        arr_6 [i_0] = 342789234;

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_27 = (((!1) ? 1 : (arr_2 [i_0] [i_3])));
            var_28 = (min(var_28, -4648651487465430067));
            var_29 = (((((38666 ^ (!963192332)))) ? (((~-485487129774995493) ? ((var_3 ? 1 : -16)) : -455378707)) : ((max(1, 25599)))));

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_30 = ((min((arr_4 [i_4 - 1]), 1)) >> (18 && 1));
                var_31 = (196 || (!130));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_17 [i_3] = ((!(((~(arr_3 [i_0] [i_0]))))));
                var_32 = -2811448441220061870;
                arr_18 [i_5] = 12;
            }
        }
        var_33 = (((max(-29976, (arr_3 [i_0] [i_0])))) ? (min((arr_1 [i_0]), 2905)) : (25336 ^ -1996276216));
    }
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_34 = (((!var_6) ? ((var_17 % (arr_8 [i_6 - 2]))) : -455378712));
                arr_26 [i_7] [i_7] = max((~-4701828276940035933), (~30077));
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
            {
                var_35 = (max(var_35, ((((-1 + 2147483647) << (max((!118), (arr_19 [i_6] [i_7 + 1]))))))));
                var_36 -= (((~((var_8 ? 65535 : (-127 - 1))))));
            }
            for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
            {
                arr_31 [i_6] [i_10] [i_10] [i_10] = 4;
                var_37 = ((-var_17 ? 2811448441220061870 : 32754));
                var_38 = (((max((arr_5 [i_10]), ((39829 ? -952767030 : 15)))) > (((((var_17 ? var_16 : 109))) ? (((!(arr_23 [i_6] [i_6] [i_10])))) : var_18))));
            }
            for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
            {
                var_39 -= arr_25 [i_6 + 1] [i_6 + 2] [i_6] [i_6];
                var_40 ^= ((1458396728 ? -2032 : ((109 ? 54 : var_17))));
            }
            var_41 -= 106;
            var_42 = (!15);
        }
        for (int i_12 = 3; i_12 < 11;i_12 += 1) /* same iter space */
        {
            var_43 *= 2020;
            arr_39 [i_12] = (!-2811448441220061862);
        }
        var_44 = (min(var_44, 5150633945107507273));
        var_45 = (min(var_45, (((var_14 <= (((arr_36 [i_6]) ? -18260 : (max((arr_1 [i_6]), (arr_32 [i_6] [i_6] [i_6] [i_6 + 3]))))))))));
        var_46 = (min((min(var_16, 109)), (((((max((arr_14 [i_6] [i_6 + 1] [i_6 + 1]), 65524))) && (1 && -455378720))))));
    }
    var_47 += (((((-((65524 ? var_3 : -103))))) ? (((-5488104987646723718 ? -99 : (min(-187794396, 18259))))) : var_8));
    #pragma endscop
}
