/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (((-((var_2 ? 152 : 5274)))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_13 = 245;
        arr_2 [6] [i_0] = (((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_9)) % ((((arr_1 [i_0 - 1]) - (arr_0 [i_0 - 1]))))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_12 [i_0 - 2] [i_1 + 2] [i_2 + 1] [i_3] [10] [i_3] [i_2] = (193 ? (((((arr_8 [i_1 + 2] [i_2] [i_3] [i_3] [i_3]) != (arr_8 [i_1 - 1] [i_2 + 2] [i_2 + 1] [i_4] [i_4]))))) : (min(496, (arr_8 [i_1 - 3] [i_3] [10] [18] [10]))));
                            arr_13 [17] [i_1] [8] [i_3] [i_4] = (!10720612795748391839);
                            var_14 &= (((((max(var_5, (496 < 32990))))) / (max((max(var_9, 199)), var_8))));
                            var_15 = (((arr_4 [i_1 + 3] [i_1 - 3]) % ((-(arr_4 [i_1 - 3] [i_1 - 1])))));
                            var_16 = (min((59 > 18446744073709551615), (~-21778)));
                        }
                    }
                }
            }
            var_17 = (!5274);
        }
    }
    for (int i_5 = 4; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_16 [19] = ((((((((min(-25749, (arr_5 [15] [1] [i_5 - 1] [i_5])))) || (((67 * (arr_9 [i_5] [15] [4] [9] [i_5 - 3])))))))) != (((3964 + var_3) ? (60261 != -497) : (arr_10 [i_5 + 1] [i_5] [i_5 - 4] [i_5] [i_5])))));
        var_18 *= ((((((min(0, (arr_6 [i_5 - 2] [i_5] [i_5 - 2])))) / 188)) % (((min((arr_5 [6] [i_5 - 2] [i_5 + 1] [17]), 1))))));
        arr_17 [i_5 - 3] = (((((!0) > ((min(60263, var_0))))) ? 14622951398079638412 : 25748));
    }
    for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((((~(arr_19 [i_6 - 4])))) != (((min(-1, -8739405705981685856)) / (arr_11 [i_6 - 3] [7] [i_6 - 3] [i_6 - 1] [0] [9] [i_6 + 1]))))))));
        var_20 = (max(var_20, ((((((-(arr_15 [i_6])))))))));
    }
    #pragma endscop
}
