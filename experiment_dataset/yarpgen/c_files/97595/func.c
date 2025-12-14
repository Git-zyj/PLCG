/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97595
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
    var_18 = ((/* implicit */int) (unsigned short)2776);
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_19 += ((/* implicit */unsigned char) ((long long int) 12208680708278776150ULL));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 += ((/* implicit */unsigned short) max((32767U), (((/* implicit */unsigned int) (~(min((((/* implicit */int) (signed char)64)), (352718409))))))));
            arr_5 [i_1] |= ((/* implicit */unsigned char) min((((((arr_3 [i_0 + 2] [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0 + 1])) - (147))))), (min((((/* implicit */int) min(((unsigned char)178), (((/* implicit */unsigned char) var_8))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */int) (signed char)-73))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_8 [i_2] [i_0] [i_2] = arr_1 [i_0 - 1];
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_21 |= ((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_0 + 2] [(unsigned char)12] [(short)2] [0ULL] [i_0 + 2]));
                        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_5))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)0), ((unsigned char)167)))) | (((arr_13 [i_0] [i_0 + 2] [i_0]) / (arr_2 [i_0 - 1])))));
            var_24 -= ((/* implicit */int) max((min((0ULL), (((/* implicit */unsigned long long int) (signed char)58)))), (min((((/* implicit */unsigned long long int) (short)10916)), (9223372036854775808ULL)))));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min((var_17), (arr_0 [i_6])))))) | (((/* implicit */int) max((min((((/* implicit */unsigned char) var_3)), (var_16))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 7116119004615475947ULL))))))))));
                arr_17 [i_0 + 2] [i_0 + 2] [i_5] [i_6] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) < (10746508331002274054ULL))));
            }
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((10746508331002274054ULL), (((unsigned long long int) (signed char)1))))) && (((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)5)), (-1LL))), (((/* implicit */long long int) (unsigned char)148)))))));
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) arr_11 [i_7] [i_0 + 2]))), (((unsigned long long int) var_4)))))));
            }
        }
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_9 = 2; i_9 < 15; i_9 += 3) 
            {
                for (unsigned int i_10 = 3; i_10 < 14; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_28 *= ((/* implicit */signed char) 18446744073709551591ULL);
                            arr_32 [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned short) (short)-20119))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-24))))) : (max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) (_Bool)0))))), (max((((/* implicit */unsigned long long int) var_5)), (16197553228713945859ULL)))))));
                            arr_33 [i_9] [i_8] [i_8] [i_9] [i_10] [i_10 + 2] = ((/* implicit */long long int) (unsigned char)162);
                        }
                    } 
                } 
            } 
            arr_34 [i_8] = ((/* implicit */unsigned char) ((long long int) arr_18 [i_0 + 1] [i_0 + 2] [0LL]));
            var_29 += ((/* implicit */long long int) max((((((/* implicit */int) (signed char)43)) / (-911808986))), (max(((~(((/* implicit */int) var_8)))), (min((var_10), (((/* implicit */int) (_Bool)1))))))));
            var_30 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) + (min((arr_16 [i_0] [(signed char)8] [i_8]), (((/* implicit */unsigned int) (unsigned char)85)))));
        }
    }
    for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_13 = 1; i_13 < 17; i_13 += 2) 
        {
            var_31 |= ((/* implicit */unsigned char) arr_38 [i_12]);
            arr_43 [i_13] [i_13 + 1] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned char)25)))));
        }
        for (signed char i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
        {
            arr_47 [i_14] [6ULL] [i_14] = ((/* implicit */int) var_15);
            var_32 = ((/* implicit */_Bool) min((1257436247), (((/* implicit */int) (signed char)22))));
        }
        for (signed char i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */_Bool) min((((/* implicit */long long int) 3)), (((((/* implicit */_Bool) arr_49 [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_15] [i_15]))) : ((-9223372036854775807LL - 1LL))))));
            var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_38 [i_15]) == (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_12])))))) >> (((((/* implicit */int) ((unsigned short) 3073332404287696201ULL))) - (60745)))));
        }
        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
            {
                arr_56 [i_12] [i_12] = ((/* implicit */_Bool) (signed char)-21);
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_37 [i_12])), (3073332404287696193ULL))))));
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((int) max((((/* implicit */unsigned int) -1048769343)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17882))) / (875896842U)))))))));
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (unsigned char)230))));
                arr_57 [i_12] [i_16] [i_16] |= ((/* implicit */int) (_Bool)0);
            }
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
            {
                arr_60 [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) var_15);
                var_38 = ((/* implicit */unsigned long long int) (_Bool)0);
                arr_61 [i_18] [i_16] [i_12] [i_12] = ((/* implicit */unsigned int) ((_Bool) arr_39 [i_12]));
                arr_62 [i_12] [i_12] [i_12] = ((/* implicit */short) (~(3419070454U)));
            }
            var_39 = ((long long int) (~(arr_42 [i_12] [i_12] [i_12])));
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (signed char)-1))));
        }
        var_41 = min((((/* implicit */unsigned long long int) ((max((36026597995708416LL), (((/* implicit */long long int) (signed char)22)))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), ((-(min((var_2), (((/* implicit */unsigned long long int) (short)-26107)))))));
    }
    for (unsigned char i_19 = 2; i_19 < 11; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 4) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    arr_72 [i_20] [i_21] = ((/* implicit */unsigned char) arr_63 [i_19 - 2] [i_19 + 1]);
                    var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)24))));
                }
            } 
        } 
        var_43 += ((/* implicit */int) ((unsigned long long int) arr_6 [i_19] [14LL] [i_19]));
        var_44 = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 2) 
    {
        arr_76 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) % (535399140U)));
        /* LoopSeq 2 */
        for (unsigned char i_23 = 2; i_23 < 12; i_23 += 1) 
        {
            var_45 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(short)1] [i_23])) ? (((((/* implicit */int) (short)20086)) >> (((((((/* implicit */int) arr_40 [i_23] [i_22])) - (((/* implicit */int) (unsigned short)32760)))) + (19532))))) : (((/* implicit */int) ((unsigned char) arr_30 [i_23 + 1] [i_23 - 1] [i_22] [i_23 + 1])))));
            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) arr_45 [i_22]))));
            var_47 *= ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) min((var_9), (arr_11 [i_22] [i_22])))))));
        }
        for (signed char i_24 = 0; i_24 < 13; i_24 += 3) 
        {
            arr_83 [i_22] [i_22] = ((/* implicit */short) ((unsigned short) arr_80 [i_22] [i_22]));
            arr_84 [i_22] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (unsigned short)61793)), (5767895918334077847LL))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) && (((/* implicit */_Bool) 17593145457097107656ULL))))))))));
        }
        arr_85 [i_22] |= ((/* implicit */unsigned int) min((((455506499) | (((/* implicit */int) (_Bool)0)))), ((+(arr_3 [i_22] [i_22])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_25 = 0; i_25 < 19; i_25 += 2) 
    {
        for (short i_26 = 2; i_26 < 18; i_26 += 1) 
        {
            {
                arr_91 [i_25] = max((((/* implicit */unsigned int) ((arr_89 [i_26 - 2] [i_26 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) min((arr_86 [i_26 - 1]), (((/* implicit */signed char) (_Bool)1))))))))), (min((0U), (((/* implicit */unsigned int) (signed char)-42)))));
                arr_92 [i_25] [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9398521349109643110ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) - (5905352942579462348ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)241), (((/* implicit */unsigned char) (signed char)8))))))));
                var_48 *= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_49 = min(((unsigned char)133), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))))));
}
