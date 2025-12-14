/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((min(var_6, 4203314090))), (!1)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) ? ((var_4 ? (arr_1 [i_0] [21]) : (arr_0 [i_0]))) : 141804468))) ? ((min((arr_1 [i_0] [16]), (((arr_0 [i_0]) ? var_11 : (-32767 - 1)))))) : (((min((arr_1 [1] [i_0]), (arr_1 [i_0] [i_0]))) ? (~var_9) : 1))));

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_14 = ((1657337184 + (arr_1 [i_0 - 1] [i_0 - 1])));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_15 = ((((arr_4 [i_0 - 1] [i_1 - 4]) ? (arr_0 [i_0]) : ((1 ? 8 : -32753)))));
                var_16 -= (~((170010765 ? (arr_7 [i_2] [i_0 - 1] [i_2] [i_1 - 3]) : (((var_12 >> (-8 + 16)))))));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_17 = (!1418177299);
                var_18 = ((((-2147483647 - 1) ? 9223372036854775807 : 1)) == -1);
            }
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_19 |= (((arr_6 [i_0] [i_0]) | (arr_10 [i_4] [i_4] [3])));

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_20 = ((((((arr_4 [i_4] [i_5]) ? var_8 : (arr_10 [i_0] [17] [i_5])))) ? (arr_15 [i_0 - 1]) : var_2));
                var_21 -= (((arr_12 [i_0]) ? 1418177299 : var_9));
                arr_17 [i_0] = 2709461364;
                var_22 = (((arr_10 [i_0 - 2] [i_4 - 2] [i_4 - 2]) == ((~(arr_15 [i_0])))));
            }
            var_23 = ((-(arr_9 [i_0 - 1] [i_0 - 1] [i_4 - 2] [i_4 - 1])));
        }
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_24 ^= (arr_0 [11]);
        var_25 = (min((!1485543708), ((2329249166069179556 ? 1 : (arr_8 [i_6] [i_6] [i_6])))));

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_26 = (min((((((1 ? 13544 : 1))) ? 1545379959 : (min(1585505922, (arr_10 [i_6] [i_7] [i_7]))))), (~2749587369)));
            arr_24 [i_6] = ((((min((max((arr_4 [i_6] [i_7]), (arr_9 [i_7] [i_7] [i_6] [i_6]))), (arr_9 [i_6] [i_6] [i_7] [1])))) ? (min(-1657337184, (min((arr_6 [i_6] [i_6]), 9328750429415796585)))) : var_1));
            var_27 = 4236094035;
            arr_25 [i_6] = (arr_3 [i_6] [i_6] [5]);
            var_28 -= (!1865781872);
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_29 ^= ((0 ? ((14765104835767407291 % (9223372036854775803 % 2876789996))) : (7 || var_8)));
        var_30 = (((min(2709461364, 0)) / 1865781872));
    }
    var_31 = ((((var_6 ? var_9 : var_3)) + var_10));
    var_32 += ((min((-9223372036854775807 - 1), (~16383))));
    #pragma endscop
}
