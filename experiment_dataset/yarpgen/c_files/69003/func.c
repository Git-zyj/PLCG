/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69003
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (unsigned char)235);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_7))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (_Bool)1)))))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_5 [i_0] [(unsigned char)2]))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_5 [6ULL] [4LL]))))));
        var_21 -= ((/* implicit */signed char) (+((~(arr_1 [5LL] [i_0])))));
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        arr_9 [i_2 - 1] = ((/* implicit */int) var_2);
        arr_10 [i_2] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_2]))))) * (((unsigned long long int) 67108863LL))))));
        arr_11 [i_2 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */signed char) var_0);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) < (((/* implicit */int) (unsigned char)0)))))) % (var_2)));
    }
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 4) 
    {
        arr_21 [i_4] = (_Bool)1;
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((var_14) - (var_7))))));
        arr_22 [i_4] = ((/* implicit */unsigned int) (unsigned char)0);
        arr_23 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_14 [(short)20]) : (((/* implicit */int) (_Bool)1)))) - (arr_20 [i_4 - 2])));
    }
    /* LoopSeq 2 */
    for (short i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        arr_27 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_5] [i_5])) < (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_11)))) : (((arr_24 [i_5]) >> (((var_1) - (375831965)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_28 [i_6]))));
            var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */int) var_12))))))))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    var_26 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (unsigned short)14308)), (var_14))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5]))))))));
                    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (unsigned char)137))))) ? (((/* implicit */int) ((arr_26 [13LL]) < (arr_26 [4LL])))) : (((/* implicit */int) ((signed char) var_7)))))) ? (((((((/* implicit */unsigned long long int) var_1)) + (var_10))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_30 [i_5] [i_5]))));
                }
                arr_34 [i_7] [i_7] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (51014253)))) ? (min((((/* implicit */unsigned int) arr_28 [i_5])), (arr_26 [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_5] [i_5 + 4])) / (((/* implicit */int) var_9)))))));
                var_28 ^= ((/* implicit */unsigned int) ((signed char) -1205885760563469381LL));
                var_29 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((unsigned short) 3679019778U))) > (((/* implicit */int) (signed char)-66)))), (((arr_29 [i_5] [i_5 + 2]) != (((/* implicit */unsigned long long int) var_13))))));
            }
        }
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_5] [i_5])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5 - 1] [i_5 + 3]))) : (arr_33 [i_5 + 1] [i_5 + 1] [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5])))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_38 [(unsigned char)1] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (169759589U))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_7 [i_9]))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
        {
            arr_43 [i_9] [i_10] = ((/* implicit */short) (~(((/* implicit */int) var_11))));
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22))) == (var_7)))))));
        }
        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)31379)) : (((/* implicit */int) var_3))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_13 = 2; i_13 < 11; i_13 += 4) 
                {
                    arr_52 [i_9] [i_9] [i_9] [7LL] [i_9] [i_9] &= ((/* implicit */_Bool) (~(arr_36 [i_9 - 1])));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (unsigned short)1413))));
                    var_34 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26888)) | (((/* implicit */int) ((_Bool) (unsigned char)0)))));
                }
                var_35 = ((/* implicit */unsigned long long int) (unsigned char)87);
            }
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (min((((/* implicit */unsigned long long int) arr_39 [i_9 - 1] [i_9 - 1])), (arr_36 [i_11])))))) ? (((/* implicit */int) arr_40 [i_9] [i_11])) : (max(((~(var_16))), (((/* implicit */int) arr_45 [i_9] [i_9 - 1] [i_9 - 1])))))))));
            /* LoopSeq 3 */
            for (int i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (unsigned char)166))));
                var_38 = ((/* implicit */int) min((((arr_29 [i_9 - 1] [i_9 - 1]) & (((arr_31 [(_Bool)1] [3U] [i_11] [i_9]) + (((/* implicit */unsigned long long int) 402879387U)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 1205885760563469385LL)) < (6834800601558185358ULL)))))))));
                arr_56 [i_9] = ((/* implicit */signed char) (unsigned char)247);
            }
            for (unsigned char i_15 = 2; i_15 < 12; i_15 += 4) 
            {
                var_39 |= ((/* implicit */signed char) max(((+((~(((/* implicit */int) (unsigned short)16343)))))), (((((((/* implicit */int) arr_13 [(unsigned char)7])) > (((/* implicit */int) arr_37 [i_11] [3])))) ? (((arr_35 [i_9 - 1]) ? (((/* implicit */int) (short)26)) : (((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_42 [i_15] [i_11]))))))));
                arr_60 [i_9] [i_11] [i_9] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)0))))) & ((+(((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */unsigned long long int) arr_24 [i_9])) : (arr_46 [(unsigned char)4] [i_9] [i_11] [i_9]))))));
            }
            for (int i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                var_40 = ((/* implicit */signed char) var_9);
                var_41 = ((/* implicit */int) max((var_41), (((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_50 [i_9] [i_11] [i_11] [i_9])), (var_16)))) ? ((~(var_5))) : ((-(((/* implicit */int) var_0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23))))))))))));
                arr_65 [i_9 - 1] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((3548317284721999445LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65509)))))))) ? (3747015251U) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)114)) || ((_Bool)1)))))))));
            }
        }
        var_42 = ((/* implicit */long long int) arr_14 [i_9 - 1]);
        var_43 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) 0U)), (17326725376658834852ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40811)) <= (((((/* implicit */_Bool) arr_41 [i_9] [i_9] [9])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-17)))))))));
    }
}
