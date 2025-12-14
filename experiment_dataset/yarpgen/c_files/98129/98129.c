/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_18 = (576460752303423488 | 12965088142115622301);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = (((-(arr_7 [i_1]))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_20 += var_7;
            var_21 = ((-(!0)));
            var_22 = (arr_6 [i_2]);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_12 [i_1] = (min((((-(arr_10 [i_1])))), ((var_11 - (arr_4 [i_3])))));
            var_23 = ((3445008359 ? ((((arr_11 [i_1] [i_3]) ? (arr_11 [i_1] [i_3]) : (arr_11 [i_1] [i_3])))) : -var_3));
            var_24 = 4198979856;
        }
        var_25 = (((~95987439) ? var_16 : (!7)));
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_26 &= (max(-1, 15));
        arr_15 [i_4 + 1] [i_4 - 1] = 1080863910568919040;
    }
    var_27 = (~var_1);

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_28 = (min(var_28, (((max(var_16, (arr_9 [i_7])))))));
                var_29 ^= (var_5 ? var_16 : 18446744073709551615);
                var_30 = ((-(!2929979123)));
            }
            arr_23 [i_5] [i_5] = (((arr_18 [i_5] [i_6]) ? 1664693248 : (((((arr_4 [i_5]) * (arr_0 [i_5]))) + var_0))));
            var_31 = (min(var_31, 13));
            var_32 = (min(var_32, (arr_21 [i_6] [i_6] [i_6] [i_5])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_33 = ((~249) != (-127 - 1));
            var_34 = (((min(-64, 106))));
        }
        var_35 = 529300458193782606;
    }
    for (int i_9 = 2; i_9 < 14;i_9 += 1)
    {
        var_36 = (max(var_36, var_9));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_37 = var_1;
                        var_38 = (((95987440 <= 8) + ((65535 ? 249 : 108))));
                        var_39 = (arr_37 [i_12] [i_11] [i_10] [i_10] [i_10] [i_9 - 1]);
                        arr_39 [i_12] [i_11] [i_10] [i_10] [i_10] [i_9] &= 95987440;
                        var_40 = (max(var_40, -6824832701327833807));
                    }
                }
            }
        }
    }
    var_41 = var_13;
    #pragma endscop
}
