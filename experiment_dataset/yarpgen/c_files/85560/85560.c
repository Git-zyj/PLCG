/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 127;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, (((((var_6 ? var_6 : (arr_0 [i_0]))) == (-8675 % 1))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((((((((6642136924938956752 ? var_9 : (arr_0 [i_0])))) ? var_9 : (((max((arr_4 [i_1] [3]), var_4))))))) ? (min((arr_1 [i_0] [i_0]), var_8)) : (min(var_11, (((arr_0 [i_0]) ? (arr_5 [i_0] [i_0] [i_1]) : var_7))))));
            arr_7 [i_0] [i_1] [i_1] = (((((((max(17278507781159416248, 3184232742))) ? (~3184232749) : (~var_0)))) ? (max(var_3, -var_8)) : ((var_8 ? (arr_4 [i_0] [i_0]) : var_2))));
            var_14 = (max(((min(var_1, var_3))), (max((arr_2 [i_0]), (arr_5 [i_0] [i_1] [i_1])))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_15 = (max(var_15, ((min((max((arr_5 [i_2] [i_1] [i_2]), (arr_0 [i_1]))), (min(var_11, (arr_0 [i_2]))))))));
                var_16 = ((~(((~65535) ? (arr_2 [i_0]) : (46986 ^ var_2)))));
                var_17 = ((var_7 ? 0 : ((~(max((arr_2 [i_0]), (arr_8 [i_2] [i_0] [i_0])))))));
                var_18 = (max(var_18, ((((arr_8 [i_0] [i_0] [i_0]) ? (max((arr_5 [3] [i_0] [i_0]), (arr_2 [i_2]))) : -469572304)))));
                var_19 = (((min(((-(arr_5 [i_0] [i_1] [1]))), ((min((arr_4 [i_1] [i_2]), var_4))))) / (((arr_3 [i_0]) ? ((var_7 ? (arr_2 [i_0]) : 3623329539)) : var_6))));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_20 = (max(var_20, 62990));
                var_21 = (min(63, 11938734120894612550));
            }
            var_22 = (min(var_22, (-24962 * 0)));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_23 = ((((((-9223372036854775807 - 1) ? 24962 : 6508009952814939082))) || ((max(var_7, var_11)))));

            /* vectorizable */
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                arr_21 [i_0] [i_0] [i_0] [7] = 3502632610543929141;
                var_24 = 6508009952814939082;
                var_25 = (3623329524 * 62990);
                var_26 = (((arr_2 [i_0]) ? var_5 : (162 || var_1)));
                var_27 *= var_10;
            }
            var_28 = ((var_0 ? ((((var_7 && ((max((arr_0 [i_0]), (-127 - 1)))))))) : (((var_11 != var_1) ? ((var_7 ? 881381683 : var_8)) : var_4))));
            var_29 *= ((~((2405041823 ? 3623329539 : 0))));
        }
        var_30 = ((+(((((-2147483647 - 1) != var_3)) ? (arr_12 [9] [i_0] [i_0]) : var_7))));
    }
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        var_31 = (min((var_9 ^ var_10), (((var_3 >= (arr_25 [i_6 + 1] [i_6 + 1]))))));
        arr_26 [i_6] = var_4;
    }
    #pragma endscop
}
