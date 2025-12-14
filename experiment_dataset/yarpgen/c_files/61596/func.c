/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61596
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)8191)))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_3)), (8838321748682867273ULL)))))));
                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_4 [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_6 [i_0] [i_1])))), (((/* implicit */int) (unsigned char)89))))) : ((-(9608422325026684331ULL)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
        arr_11 [i_2] &= ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_7)))));
        var_20 ^= ((((/* implicit */_Bool) 9608422325026684349ULL)) ? (arr_8 [i_2 + 1]) : (((((/* implicit */_Bool) arr_3 [i_2])) ? (var_15) : (((/* implicit */unsigned long long int) -9223372036854775800LL)))));
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-6))));
    }
    for (long long int i_3 = 4; i_3 < 11; i_3 += 4) 
    {
        var_22 ^= (~((-(((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))) : (var_15))))));
        var_23 *= ((/* implicit */signed char) (~(2305843009209499648LL)));
        var_24 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) min((var_14), ((signed char)-2)))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((unsigned long long int) var_12))))))))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
    {
        arr_17 [i_4] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_16 [i_4])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(14033923660396911103ULL))))));
                            var_27 *= ((/* implicit */unsigned short) ((arr_18 [i_8] [i_8 + 1] [i_4 - 3]) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_28 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)57037)))))));
                            var_29 |= ((/* implicit */unsigned long long int) ((_Bool) (signed char)-44));
                            var_30 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4 - 2] [i_8 + 1]))));
                        }
                    } 
                } 
            } 
            var_31 -= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)));
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(((/* implicit */int) min((arr_30 [i_4 - 2]), (((/* implicit */unsigned short) (signed char)19))))))))));
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) ((unsigned short) 17566295085178282928ULL)))), (((unsigned long long int) arr_19 [i_4 - 2] [i_4] [i_4 - 3])))))));
            var_34 ^= ((/* implicit */short) ((signed char) max(((-(((/* implicit */int) var_12)))), ((~(((/* implicit */int) var_1)))))));
            arr_32 [i_4 - 2] [i_4] [i_4] &= ((/* implicit */short) (+(8838321748682867273ULL)));
        }
        /* vectorizable */
        for (unsigned short i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            var_35 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23040)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((unsigned long long int) 10499294097913790017ULL))));
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_4 - 1] [i_10 + 1] [i_10 - 1] [i_4 - 1] [i_4])))))));
            var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16243))) : (7947449975795761593ULL)))) ? ((-(var_15))) : (arr_22 [i_10 - 1] [i_10 - 1] [i_4 + 1] [i_4 - 3])));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 2) 
            {
                for (unsigned char i_12 = 3; i_12 < 20; i_12 += 2) 
                {
                    {
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((arr_18 [i_12 - 2] [i_12 + 3] [i_12 + 3]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))));
                        arr_42 [i_4] [i_11] [i_12] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_40 [i_12 + 2] [i_12 + 3] [i_10 + 2] [i_4 - 3]))));
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (+(((/* implicit */int) ((short) var_14))))))));
                    }
                } 
            } 
        }
        arr_43 [i_4] &= max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-75))))) : (9931446454780266749ULL))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)63324)))), ((+(((/* implicit */int) (unsigned char)20))))))));
    }
    var_40 *= ((/* implicit */unsigned short) (-(var_13)));
}
