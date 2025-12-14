/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_15 -= (-(~var_5));
        var_16 -= -232709237;
        var_17 = (min(var_17, (((((var_10 || (~36146))))))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_18 = (max(var_18, (arr_3 [i_0] [i_0])));
            var_19 -= (min((max(36146, 232709237)), 232709237));
            var_20 = (min(var_20, (((((min((-6148078321360535654 <= 4062258059), (arr_3 [i_1 + 3] [i_1])))) ? (max((max(var_3, -12)), -var_4)) : (+-828657340))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_21 = (max(var_21, (((-(min((arr_4 [i_0 + 1] [i_0 - 1]), (min(8935690745566406218, var_1)))))))));
            var_22 = (min(var_22, var_4));
            var_23 = (min(var_23, ((max(18446744073709551610, ((((arr_2 [i_0 + 1] [i_0 - 2]) | 232709220))))))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_24 &= (~var_10);
                var_25 = (max(var_25, ((min((arr_1 [i_2] [i_0]), ((~(~29398))))))));
                var_26 = (max(var_26, ((((((0 ? 29401 : (-127 - 1)))) ? (((((arr_7 [i_2]) / 36429)) * (29398 / 36159))) : (((min(36150, 29368)))))))));
                var_27 &= (((max(-122, 232709237)) == (~29396)));
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                var_28 = (min(var_28, ((min((232709211 < var_7), 4294967295)))));
                var_29 = (max(var_29, (!21617)));
                var_30 &= (((~(arr_9 [i_0 - 1]))));
                var_31 = (max(var_31, (min((((-(arr_5 [i_0])))), 3362469017))));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_32 -= (((-(var_9 + var_0))));
                arr_15 [i_0] [19] [i_0] [i_5] &= (max(((min(-36146, (max(56, 6013953541612613326))))), -18446744073709551610));
                var_33 -= 4062258059;
                var_34 = (max(var_34, 1386427501539549970));
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_35 &= (((((~(arr_2 [i_0] [i_0 - 2])))) | (((((0 ^ (arr_11 [i_6])))) ^ 232709211))));
                var_36 = (min(var_36, -122));
            }
            for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_37 = (max(var_37, (((-169733468047761469 > (((((max(26847, 8935690745566406227)) == 4062258059)))))))));
                var_38 -= (~232709236);
                arr_24 [i_0] [i_0] &= max((min((~4329737760417476054), var_11)), -127);
                var_39 = (max(var_39, ((min(var_0, var_7)))));
            }
            var_40 = (min(var_40, ((max((((~7565542675698983679) & ((0 ? (arr_21 [19] [19] [i_6]) : 38688)))), (~46477))))));
        }
        var_41 -= (((arr_18 [i_0 - 2] [i_0 + 1]) & ((~(arr_18 [i_0 - 1] [i_0 - 2])))));
    }
    var_42 -= var_6;
    var_43 -= 127;
    var_44 = (min(var_44, ((min(0, 27)))));
    #pragma endscop
}
