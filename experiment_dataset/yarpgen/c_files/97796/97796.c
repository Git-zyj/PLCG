/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max(((((var_3 ? 58 : 12272541104495973756)) << (((~var_2) - 51)))), ((((((var_7 + 2147483647) >> (-48 + 77))) >> (var_17 - 17079721436019102275))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_19 = (867279580539607801 << (((min((arr_4 [i_0] [i_0] [i_0]), (arr_5 [8] [i_1] [8]))) - 6271302193240130570)));
            var_20 ^= 1;
            var_21 &= arr_5 [i_0] [i_1] [i_1];
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_22 = (min(var_22, ((((arr_4 [i_2] [1] [1]) + ((min(78, (arr_0 [i_0])))))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_23 ^= (arr_1 [i_0] [i_0]);
                        var_24 = (min(var_24, (((!((min(10009331770765198166, -125))))))));
                    }
                }
            }
            var_25 = arr_3 [i_2];
            arr_12 [i_0] [9] = 2756563369183374641;
            var_26 = (arr_4 [i_0] [i_0] [0]);
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_21 [i_6] [i_7 + 3] [9] [i_5] [i_6] = ((!(arr_9 [i_5] [2] [i_5])));
                            var_27 = ((((((((arr_1 [i_8] [i_5]) ? 8830656596218675826 : (arr_13 [i_8] [i_0])))))) | 1169));
                            var_28 = (arr_3 [1]);
                            var_29 = (max(var_29, 12));
                        }
                    }
                }
            }
            var_30 = arr_14 [i_5];
            var_31 = ((((min((arr_5 [i_0] [i_5] [i_5]), ((-33 * (arr_10 [i_5] [i_5] [12] [i_5])))))) || (arr_19 [i_0] [9] [i_5] [i_5] [15] [0])));
        }

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_32 = 18053420204880662290;

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_33 = 6174202969213577832;
                arr_26 [i_0] = ((((8 < (arr_10 [i_0] [3] [i_10] [i_0]))) ? ((~(arr_10 [i_10] [i_10] [i_10] [i_10]))) : (((arr_10 [i_0] [i_9] [i_10] [i_9]) / (arr_10 [1] [i_9] [i_10] [i_9])))));
                var_34 = 3578;
            }
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                arr_30 [3] [i_11] |= 15938317681161265685;
                var_35 = (((arr_7 [14]) ? (arr_8 [i_11] [12]) : ((max(36, (arr_7 [i_0]))))));
                arr_31 [6] = (arr_25 [i_0] [i_9] [12]);
            }
        }
        arr_32 [1] [13] = -7797;
        var_36 = (arr_19 [i_0] [i_0] [i_0] [i_0] [14] [14]);
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
    {
        arr_35 [15] [2] = (12 - -21592);
        var_37 *= (((arr_34 [i_12] [i_12]) ^ (((13021613252414503878 ? 8637 : (arr_16 [i_12] [10] [10] [i_12]))))));
    }
    var_38 &= 509;
    var_39 = ((~(!-7)));
    #pragma endscop
}
