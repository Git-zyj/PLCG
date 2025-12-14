/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(var_12, (~var_2))), var_4));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 = (min(var_15, ((min(((var_5 >> ((min(var_7, 65535))))), ((((!var_2) <= (var_9 == var_8)))))))));
            arr_5 [i_0] = -var_3;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_16 += ((+(min((arr_2 [i_0] [i_0] [16]), var_5))));
            arr_8 [i_2] [i_0] [i_0] = min(4016728710, (var_5 || 0));
            var_17 = (max(((((var_4 ? (arr_2 [i_0] [15] [i_2]) : (arr_4 [i_0] [i_0]))) >> (var_2 + 303507271))), ((var_12 ? var_8 : (max(-9, 6266877689850978484))))));

            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                var_18 = (max(var_18, (((3361673284 ? ((((((!(arr_3 [14] [i_2])))) <= (var_12 ^ var_5)))) : var_6)))));

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (max(-25421, 3001212815384315643));
                    var_19 = (min(var_19, (((((max((~var_6), (max(var_3, var_0))))) ? ((((min(var_8, (arr_14 [0] [i_2])))) ? (~var_9) : (15445531258325235988 & 15445531258325235972))) : ((~(max(3001212815384315662, var_7)))))))));
                    var_20 = (min(var_20, (((!((!(4200006447 || 4631611949181107400))))))));
                    arr_16 [i_0] [i_3] [i_3] [i_3] = ((-6 ? ((var_11 << (var_12 - 125))) : ((min(var_12, (~-2147483635))))));
                    var_21 = ((((min(var_7, var_7))) % (max((min(15445531258325235943, var_13)), -var_4))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_20 [i_0] [0] [i_5] = ((~(((min(var_5, var_11)) - (min(var_2, var_11))))));
                    arr_21 [0] [i_2] [0] [i_2] [i_2] [i_2] = (((1 * (521632424 / 15445531258325235973))));
                }
                arr_22 [i_0] [i_0] [i_0] [i_0] = (((((~var_3) >= (!var_1))) ? (((var_8 > (((min(var_12, var_3))))))) : -var_6));
            }
        }
        var_22 = var_9;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_23 = ((((((var_7 ? var_10 : 18446744073709551615)) * ((((arr_7 [i_6]) | var_10))))) >> (var_8 - 384963014)));
        var_24 = (min(var_24, (((!(((var_2 ? 10 : (arr_13 [i_6] [1] [i_6] [i_6])))))))));
        var_25 = (max(var_25, var_6));
    }
    #pragma endscop
}
