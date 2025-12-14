/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79044
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-(((/* implicit */int) var_0)))))));
    var_12 |= ((/* implicit */unsigned long long int) var_7);
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-12931)), ((~(-115011109597094875LL))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)2] [(unsigned char)2])) ? (-115011109597094868LL) : (var_8)))) && (((((/* implicit */_Bool) 4194048U)) && (((/* implicit */_Bool) arr_0 [(signed char)2] [(signed char)2])))))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((/* implicit */long long int) arr_2 [(_Bool)1])), (((-115011109597094872LL) / (arr_1 [i_0] [i_0 - 1]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */short) -3LL);
            arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [3U])) ? (var_7) : (((/* implicit */long long int) arr_8 [i_1] [i_1 - 2]))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_2] [i_2 + 1] [i_1 + 4])) == (((/* implicit */int) var_5))));
                var_17 = ((/* implicit */_Bool) max((var_17), ((((((_Bool)1) ? (10066341690644048854ULL) : (var_6))) < (((/* implicit */unsigned long long int) ((-7LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            }
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            var_18 = var_5;
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_1 + 2] [i_1 - 4] [i_1 - 3] [i_1 + 2])))))));
            var_20 = ((/* implicit */short) var_9);
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1] [i_4] [i_4] [i_1])))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((arr_13 [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_1 + 3] [i_1 - 3])))))));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
        {
            arr_20 [i_5] [i_1] [i_1] |= ((/* implicit */signed char) arr_15 [i_1] [i_1] [i_5]);
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((short) (unsigned short)4095)))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_1] [i_1])) && (((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) (unsigned char)224)))))));
                arr_24 [i_1] [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1 - 3] [i_6 - 1] [i_6 - 1])))));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_6] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)64)))) : (((((/* implicit */_Bool) (unsigned char)94)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) var_8)))))))));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1 + 4] [i_1])) ? (arr_6 [i_1] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)7990)))));
                var_27 = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_6 [i_1] [i_6] [i_6 - 1]) : (((/* implicit */long long int) var_4))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) var_8);
                var_29 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
            }
        }
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((arr_16 [i_8]) & (((/* implicit */long long int) ((/* implicit */int) (short)-12))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_28 [i_1] [i_8])))))))));
            var_31 ^= ((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_17 [i_1] [i_8]))));
        }
        arr_32 [i_1] = ((/* implicit */signed char) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))));
        arr_33 [(signed char)9] = ((/* implicit */_Bool) (((-(var_9))) + (((/* implicit */unsigned long long int) arr_7 [i_1 - 1]))));
        arr_34 [i_1] = ((/* implicit */unsigned char) var_0);
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((int) -6LL)))));
    }
}
