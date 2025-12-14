/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((max(((7514 ? 2047 : 7514)), ((var_6 ? var_10 : 2))))) + (min(-25724, ((56 ? 0 : var_13)))));
    var_15 = (max(var_15, (((((((163 ? 6917529027641081856 : 6917529027641081856)))) + var_5)))));
    var_16 = (19890 + 0);
    var_17 ^= 2118842663;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 4; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            arr_14 [6] [i_1] [4] [i_3] [i_2] &= ((4294967295 + (!-1172191407810557462)));
                            var_18 = var_13;
                            var_19 = ((0 ? -6917529027641081859 : (arr_11 [i_4] [i_4 - 2] [i_4 - 2] [1] [i_4 - 3])));
                            var_20 &= (arr_13 [i_1] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_4 + 2] [i_4]);
                            var_21 = (-(21 < 1));
                        }
                        for (int i_5 = 4; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_22 *= ((-5890 ? 0 : ((1008 ? 3977962154 : 252))));
                            var_23 = ((6 << (6162 == var_7)));
                        }
                        for (int i_6 = 4; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_24 = ((251 ? 6917529027641081856 : 239));
                            var_25 = ((((593 == (-2147483647 - 1))) || (((244 ? var_7 : (-2147483647 - 1))))));
                        }
                        var_26 -= (((((-9223372036854775792 ? var_3 : 4294967295))) ? (((arr_9 [17] [0]) ? 251 : (arr_2 [i_3] [i_2] [i_0]))) : 3451145711));
                    }
                    for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_27 = (((arr_19 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1] [6] [i_7 - 2]) || 87));
                        var_28 = (min(var_28, (-25857 - -1624200572)));
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, 7936));
                        var_30 *= (!21);
                    }
                    var_31 = var_1;
                    arr_24 [i_0] [i_2] |= (~174);
                }
            }
        }
        var_32 = 8242588365785160481;
        var_33 = (min(var_33, var_1));
        arr_25 [i_0] [15] = var_0;
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            var_34 = ((((arr_12 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1]) != (arr_12 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1]))) ? ((min(var_7, (-127 - 1)))) : (arr_21 [i_10 + 1] [i_10 - 1] [i_10 - 1]));
            arr_30 [i_9] = 134217728;
            arr_31 [i_10 - 1] &= (((!-56) == (((min(2450, 253952))))));
        }
        arr_32 [i_9] [11] = ((((((4294967293 ? (arr_5 [i_9] [i_9] [17] [i_9]) : 8165274325826793499))) ? ((min(16, 255))) : (arr_10 [i_9] [i_9] [18] [i_9] [i_9] [i_9]))));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
    {
        var_35 = 239;
        arr_36 [i_11] = ((min((var_3 / var_1), (((4294967279 < (arr_0 [i_11] [i_11])))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {
        var_36 = var_13;
        var_37 = 12127;
        arr_39 [i_12] [i_12] = (-72 + 8388607);
    }
    #pragma endscop
}
