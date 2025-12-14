/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (max(var_17, ((((29 <= 32767) ? 1792198836819293340 : (((min(15, (max(1, 11012)))))))))));
        var_18 = (min(255, 54499));
        var_19 = (((12477248594336561598 + 1) * (max((min(51719, var_5)), 42389))));
        var_20 = (0 && ((((max(31, 32)) | 27239))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
            {
                arr_6 [i_0] = ((-20 | (1 || var_14)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_11 [i_4] [i_1] [i_2 - 2] [7] [i_4] = (1 < 65280);
                            var_21 = (!4294967287);
                        }
                    }
                }
                var_22 = (max(var_22, 59));
            }
            for (int i_5 = 4; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_23 = ((29229034 < (((min(11, -29572))))));
                arr_15 [i_5] [i_1] = (14254749018058880799 * -6544447856513652906);
            }
            arr_16 [5] = (max(var_16, ((((max(3560567044268336621, 11014))) ? var_11 : (var_6 * 16284)))));
            arr_17 [i_0] = ((10993 ? ((15 + ((212229558 ? 3 : 1)))) : ((max((1 - 29572), (15 + 0))))));
        }
        for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_24 += 50388;
            var_25 += 195;
            arr_22 [2] |= 62;
            arr_23 [3] [i_6] [10] = (((((((max(2808959351926265869, 8))) ? (203 != 4557364553690934260) : -29573))) ? (((~(var_16 & 33)))) : (max(((min(-1, 1))), (max(1, -4557364553690934246))))));
            var_26 = ((((max((!1), (815613061 != var_12)))) ^ (((!(((2147483647 ? 1 : 1))))))));
        }
        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_27 = ((max(61, ((min(1, 20))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_28 = (min(var_28, ((max((max(22422, 24)), ((((((-2147483647 - 1) ? var_1 : 1)) >= var_8))))))));
                        arr_30 [13] [13] = 1;
                    }
                }
            }
            var_29 = (max((max(1, 178)), (((min(var_10, 5))))));
            var_30 = ((max((2290288176 ^ -267109969), (min(12077, 4294967278)))));
        }
    }
    var_31 += (((((-(max(var_3, var_4))))) ? (((max(var_1, 9190)))) : (!-267109974)));
    #pragma endscop
}
