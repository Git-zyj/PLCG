/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(var_7, var_1)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (arr_2 [i_0] [0]);
            arr_6 [i_0] [i_0] [i_1] = (((((~(arr_1 [i_0] [i_1])))) ? (arr_4 [i_0 - 2]) : (arr_3 [i_0 + 1] [i_0 - 1])));
            arr_7 [i_0] [i_0] = (!var_7);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_14 = 39921;
                var_15 -= 30948;
                var_16 = var_2;
            }
            var_17 = (arr_3 [i_0] [i_2]);
        }
        var_18 |= ((-10732 && (((4232396031 ? 4232396031 : -10753)))));
        var_19 = (arr_2 [i_0] [i_0]);
        var_20 += ((((((arr_3 [i_0] [i_0]) ? var_3 : var_9))) || (arr_9 [0] [i_0 - 1])));
        arr_14 [i_0] [i_0] = -10756;
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        var_21 -= 112;
        arr_17 [i_4] [i_4] = ((((1 ? 3914523456 : 10721)) & 20690));
        arr_18 [i_4] = 10740;
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_22 &= var_1;
        var_23 -= (((arr_12 [i_5] [i_5] [i_5]) < 2088881928));
        var_24 -= ((-var_6 | (((((var_1 ? var_3 : (arr_3 [i_5] [i_5])))) ? var_4 : (arr_3 [i_5] [i_5])))));
        var_25 = ((((((arr_12 [i_5] [i_5] [i_5]) ? 35329977 : (arr_12 [i_5] [i_5] [i_5])))) ? (arr_9 [i_5] [i_5]) : ((171 ? 4259637318 : (4232396033 && -31)))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_26 = -26154;
        arr_25 [i_6] [i_6] = var_11;

        /* vectorizable */
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            arr_29 [i_7] = ((((arr_24 [i_7]) ? var_10 : var_0)));
            arr_30 [i_7] [i_7 - 1] = (arr_20 [i_6] [i_6]);
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {

        for (int i_9 = 4; i_9 < 18;i_9 += 1)
        {
            var_27 = (arr_8 [8] [i_9 - 2]);
            var_28 = ((4432103921857974795 ? 216 : -10755));
            var_29 = ((!(arr_13 [i_9] [i_9 - 2] [i_8] [i_9])));
            var_30 -= (-93 < 1160267593);
        }
        var_31 *= (((arr_11 [i_8] [i_8] [i_8]) ? (var_2 | var_9) : (arr_0 [i_8])));
        var_32 += -6275470600444694572;
    }
    #pragma endscop
}
