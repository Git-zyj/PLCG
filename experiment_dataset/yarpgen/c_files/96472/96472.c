/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] &= 8639344641506991212;
            var_11 = (arr_0 [i_1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_12 = (min(var_12, 9807399432202560403));
            arr_9 [i_0] = 19125;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_13 = (arr_4 [9] [i_3]);
                var_14 = (((((8 ? 9807399432202560403 : 419883274))) ? -113 : 8639344641506991227));
                var_15 = (((arr_3 [i_4 + 2] [i_4 + 2] [i_4 - 1]) ? var_0 : var_8));
                var_16 = (arr_3 [i_0] [i_3] [i_0]);
                var_17 = (arr_0 [i_4]);
            }
            for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_18 = (max(var_18, ((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_15 [i_3] [i_3] [i_5 + 2] [i_3]) : (arr_0 [i_0]))))));
                var_19 = (((var_7 ? 18554 : (arr_13 [i_5]))));
                var_20 = (arr_10 [i_5] [i_5] [5]);
            }
            arr_17 [i_0] = (arr_1 [1]);
        }
        var_21 = 0;

        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_22 = (~-9807399432202560403);

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_23 &= (((arr_21 [i_6] [i_7] [i_8]) < 4294967295));
                    var_24 += (max(((var_4 ? (!var_3) : (arr_1 [i_6 - 1]))), var_1));
                    var_25 = (min(var_25, (((~(max(var_5, (arr_4 [i_0] [i_6 + 1]))))))));
                    var_26 = var_5;
                }
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    var_27 = (arr_14 [i_9] [i_6] [0]);
                    var_28 = (max(var_28, (((((8639344641506991192 ? -28 : (arr_26 [i_6 - 2] [i_6] [i_6 + 2] [i_6 + 1] [i_9 - 1])))) ? ((((arr_16 [i_9 + 2] [i_6 + 2] [i_7] [i_0]) >> (((arr_16 [4] [i_6 - 1] [4] [i_9]) - 11165))))) : (((10488477585197766526 ? 8639344641506991212 : (arr_15 [i_0] [7] [i_7] [i_9]))))))));
                    var_29 = (0 != var_0);
                    var_30 = 3474900383;
                    var_31 = 3474900383;
                }
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    arr_35 [i_0] [i_6] [16] [i_10] = 313644753;
                    arr_36 [i_10] [i_7] [i_6 - 2] [i_0] [i_10] = (+(((arr_19 [i_0] [i_10 + 1] [i_6 - 1]) ? (arr_19 [i_0] [i_10 - 1] [i_6 + 2]) : (arr_19 [i_0] [i_10 - 1] [i_6 - 1]))));
                }
                var_32 = (max(var_32, 3));
                var_33 = (max(var_33, (19042 / 9895836354147958902)));
                arr_37 [7] [i_0] = ((((((arr_2 [i_6 + 1]) ? (-9223372036854775807 - 1) : (arr_14 [i_0] [i_6 + 2] [i_7])))) / (max(6840403172647487792, 3474900376))));
            }
            arr_38 [i_6] = -45;
            var_34 = var_7;
        }
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_35 = (-2147483647 - 1);
        var_36 = 65;
    }
    var_37 = (max(var_37, ((min((((!33554431) ? var_1 : (4294967295 * var_7))), ((var_10 ? (((max(var_9, var_2)))) : (~17863072474206264879))))))));
    #pragma endscop
}
