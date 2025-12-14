/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73385
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((long long int) var_14)) : (((/* implicit */long long int) max((((((/* implicit */_Bool) -6210214342326900267LL)) ? (((/* implicit */int) var_7)) : (var_14))), (((((/* implicit */_Bool) var_0)) ? (var_12) : (1938804445))))))));
    var_18 = ((((/* implicit */int) var_13)) >> (((3816052396686252665LL) - (3816052396686252651LL))));
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0 - 2]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            var_20 = (~(((/* implicit */int) arr_1 [i_1])));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_1 [i_1]) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_6 [i_1] [i_0])))))))) + (((((/* implicit */_Bool) ((-4633156889503376486LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2])))));
                    var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) * (arr_11 [i_1 + 2] [i_0 - 1] [i_0] [i_0]));
                    var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (((/* implicit */unsigned int) arr_7 [i_3 - 1])) : (arr_0 [i_3 + 1])));
                }
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 + 1])) ? (((/* implicit */unsigned int) var_12)) : (arr_0 [i_0 - 2]))) << (((((/* implicit */int) ((unsigned short) arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 2]))) - (64588))))))));
            }
        }
        for (short i_4 = 2; i_4 < 19; i_4 += 2) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_5 [i_0 - 2])))))))) ? (((((/* implicit */_Bool) 985372317)) ? (-1456891763) : (((((/* implicit */int) (unsigned short)65535)) / (1938804445))))) : (((/* implicit */int) arr_1 [i_0 - 1]))));
            var_28 = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned int) arr_7 [11])) : (((arr_14 [11ULL] [i_4]) << (((arr_9 [i_0] [i_0] [i_0]) + (712219813)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_19 [i_0 - 1] [i_5] [i_5] [i_0 - 1] = ((/* implicit */short) ((unsigned char) arr_15 [i_0 - 2] [i_4 + 1]));
                var_29 = ((/* implicit */unsigned int) var_2);
                /* LoopSeq 2 */
                for (long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    var_30 = (short)4064;
                    var_31 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_2 [i_0]))))));
                    var_32 = ((/* implicit */unsigned long long int) var_0);
                }
                for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0] [i_7 + 1] [i_7 - 1] [(short)4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 + 1] [i_0] [i_7 + 1] [i_7] [i_0]))) : (arr_12 [i_4]))))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_7 - 1])) ? (((/* implicit */unsigned long long int) var_9)) : (var_5)))) ? (-1LL) : (((/* implicit */long long int) arr_8 [i_5]))));
                }
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                {
                    arr_26 [(short)11] [i_5] [i_4 + 1] [i_4 + 1] [i_8] = ((/* implicit */unsigned long long int) (((~(arr_0 [19LL]))) & (arr_0 [i_0 - 1])));
                    var_35 = var_16;
                }
                for (long long int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                {
                    arr_29 [i_0] [i_0 - 1] [i_5] [i_0 - 1] [i_9] [i_9] = ((/* implicit */int) arr_5 [i_5]);
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(arr_7 [i_9])))) / (((unsigned int) var_5))));
                    var_37 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1938804445)) + (arr_13 [i_4 - 2] [i_4 - 2] [i_4 - 2])));
                }
                for (long long int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    arr_32 [i_5] [i_4 + 1] [i_5] [i_5] = ((/* implicit */long long int) ((arr_14 [i_4] [i_10]) << (((((/* implicit */_Bool) -7464644814139640093LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5]))) : (arr_21 [i_0] [i_4 - 2] [i_5] [i_10])))));
                    var_38 = (i_5 % 2 == 0) ? (((arr_12 [i_5]) >> (((((/* implicit */int) var_15)) + (18978))))) : (((((arr_12 [i_5]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_15)) + (18978)))));
                    var_39 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) 1854324495)) * (405269905U)))));
                }
            }
        }
    }
    /* vectorizable */
    for (short i_11 = 2; i_11 < 20; i_11 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */signed char) (short)(-32767 - 1));
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((6807559759646808330ULL) >> (((8727856059491127911LL) - (8727856059491127888LL)))))) ? (((/* implicit */unsigned long long int) arr_17 [i_11] [i_11] [i_11 - 2] [i_11])) : (((((/* implicit */_Bool) arr_8 [i_11])) ? (((/* implicit */unsigned long long int) arr_12 [i_11])) : (18299667346222304817ULL)))));
    }
    for (short i_12 = 2; i_12 < 20; i_12 += 2) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) arr_36 [i_12]))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_12])))) : (((arr_3 [i_12]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12] [i_12]))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((6229810297219791319LL), (((/* implicit */long long int) arr_0 [i_12]))))))))));
        arr_38 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65280))));
    }
}
