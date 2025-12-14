/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9242
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_9 [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_0] [24U])) && (((/* implicit */_Bool) 17592185978880LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 33554431)) ? (((/* implicit */int) arr_7 [i_2] [i_0] [i_3] [i_2])) : (-33554431)))) : (min((var_0), (var_4)))))) ? (((/* implicit */int) arr_0 [i_0])) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) 3975597577U)) ? (1917851155) : (((/* implicit */int) (short)32767))))))));
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -33554431)) ? (1152921487426977792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14851)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [17] [i_2] [i_2])))))) : ((~(arr_2 [i_1 + 1])))));
                        var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) : (((((/* implicit */_Bool) (short)32767)) ? (319369718U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))))))), (((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_5 [(unsigned char)8] [i_0] [i_0])))));
        var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) >= (arr_2 [i_0]))))) : (max((319369718U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) >= (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [(_Bool)1]) : (((/* implicit */long long int) 4294967264U)))))))));
    }
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_12 [i_4])))), (((/* implicit */int) max((arr_12 [i_4]), (arr_12 [i_4]))))));
        arr_14 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 33554431)) ? (18446744073709551615ULL) : (min((min((((/* implicit */unsigned long long int) var_2)), (var_7))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_0 [i_4])), (var_9))))))));
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_4)))), (arr_3 [i_4] [i_4])));
        var_17 = ((/* implicit */unsigned char) ((var_1) << (((((((/* implicit */unsigned int) ((/* implicit */int) (short)4032))) % (max((var_3), (((/* implicit */unsigned int) arr_0 [i_4])))))) - (3990U)))));
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(arr_1 [i_4])))) >= (((((/* implicit */_Bool) (short)4088)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_4]))))) ? (((var_1) * (((/* implicit */unsigned long long int) arr_3 [11U] [11U])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(short)18])))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            arr_22 [i_5] [i_5] [i_5] = ((signed char) arr_10 [i_5]);
            arr_23 [i_5] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18855))) : (15716940228135017010ULL)))));
            var_19 = ((/* implicit */unsigned int) (signed char)85);
            var_20 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_21 [2U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5]))) : (arr_3 [i_5] [i_5]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32764)) && (((/* implicit */_Bool) var_4))))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) arr_8 [i_5] [(signed char)20] [i_7] [20]);
            arr_27 [i_5] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_7]))) >= (214787994U)));
        }
        arr_28 [i_5] = ((/* implicit */unsigned short) arr_21 [i_5]);
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            arr_32 [i_5] = ((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_20 [i_5] [i_5]))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_5])) % (((/* implicit */int) arr_30 [i_5]))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) -33554432))))) ? (((((/* implicit */_Bool) -3448871036908575702LL)) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (var_6))) : (((/* implicit */int) arr_6 [i_8] [i_8] [i_8] [i_5]))));
            var_24 = ((/* implicit */short) arr_11 [i_5] [i_8]);
        }
        for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
        {
            var_25 = ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_9 + 1] [i_9]))));
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 1; i_11 < 8; i_11 += 4) 
                {
                    var_26 = ((/* implicit */short) ((signed char) arr_11 [i_9 + 1] [i_11 - 1]));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 7; i_12 += 3) 
                    {
                        arr_42 [(unsigned short)4] [i_5] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4029))))) ? (((/* implicit */unsigned long long int) 1489310222U)) : (arr_2 [i_10])));
                        arr_43 [i_5] [i_5] [i_5] [i_11] [i_12] [i_12] = ((/* implicit */_Bool) ((short) (signed char)-48));
                        var_27 += ((/* implicit */signed char) arr_38 [i_5] [i_10] [i_5] [i_12 + 3]);
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_30 [i_10]))));
                    }
                    arr_44 [i_5] [i_9] [i_5] [i_11 - 1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned char)207)))));
                    var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-43))))) - (((((/* implicit */_Bool) 1061098769U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))) : (arr_17 [i_5])))));
                }
                for (signed char i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    arr_49 [i_5] [3LL] [i_5] [i_9] [i_13 - 1] = ((/* implicit */unsigned long long int) arr_29 [i_5]);
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        arr_54 [i_5] [i_9] [i_5] = ((/* implicit */unsigned int) var_7);
                        arr_55 [i_5] [i_5] [i_10] [i_13] [i_14] [i_14] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) / (6262783115158865667LL)))));
                        arr_56 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((2145386496U) - (((/* implicit */unsigned int) -33554423))));
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_13 + 1] [i_9 + 1] [i_10] [i_13])) ? (((/* implicit */int) arr_6 [i_13 + 1] [i_9 + 1] [i_5] [i_13])) : (((/* implicit */int) arr_6 [i_13 + 1] [i_9 + 1] [i_10] [i_13]))));
                    }
                    for (unsigned int i_15 = 2; i_15 < 7; i_15 += 3) /* same iter space */
                    {
                        var_32 = ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_30 [i_5])))));
                        var_33 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_5] [(unsigned char)3]))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 7; i_16 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_5])) % (((/* implicit */int) arr_30 [i_5]))));
                        var_35 += ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_8) : (var_10))));
                    }
                }
                arr_64 [i_5] [i_10] [i_9] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_9 - 1]))));
            }
            for (int i_17 = 1; i_17 < 9; i_17 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_17 + 1] [i_17 + 1] [i_18])) >> (((/* implicit */int) arr_5 [i_17 + 1] [i_17 + 1] [i_17 + 1]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_19 = 2; i_19 < 6; i_19 += 3) 
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_5] [i_19 - 1] [6ULL] [i_19] [i_19] [i_5]))) : ((~(0ULL)))));
                        arr_72 [i_5] [i_5] [i_17] [i_17] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_5])) ? (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) arr_10 [i_5])))) : ((+(((/* implicit */int) (short)-18855))))));
                        var_38 += ((/* implicit */unsigned int) ((arr_36 [6U] [i_9 - 1]) % (arr_36 [6] [i_9 - 1])));
                    }
                    for (int i_20 = 3; i_20 < 9; i_20 += 3) 
                    {
                        arr_75 [i_5] [i_5] [i_5] [i_9 + 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (signed char)64))));
                        arr_76 [i_5] [i_5] [i_9] [i_5] [(signed char)7] [i_18] [i_5] = ((/* implicit */unsigned int) 134217728);
                    }
                    for (short i_21 = 3; i_21 < 6; i_21 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) ((unsigned char) ((2805657074U) << (((2013265920U) - (2013265893U))))));
                        arr_81 [i_5] [i_5] [i_17] [i_18] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)85)))) && (((/* implicit */_Bool) ((int) var_5)))));
                        arr_82 [i_5] [i_9] [i_9] [i_9] [i_5] = ((/* implicit */unsigned int) var_5);
                    }
                    for (short i_22 = 3; i_22 < 6; i_22 += 4) /* same iter space */
                    {
                        var_40 = arr_60 [i_5] [i_9] [i_9] [i_18] [i_17] [i_22 + 3];
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (arr_58 [i_5] [i_5] [i_17] [i_18] [i_22])));
                    }
                    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_9 + 1] [(unsigned char)0] [(unsigned char)16]))) : (((((/* implicit */_Bool) 16502422941600901015ULL)) ? (arr_46 [i_18] [i_17 + 1] [(unsigned char)3]) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_5] [i_9] [i_5] [i_17 + 1] [i_18]))))))))));
                }
                for (int i_23 = 1; i_23 < 8; i_23 += 3) 
                {
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (10U) : (((/* implicit */unsigned int) 1146187505))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (4294967295U)))) : ((-(arr_3 [i_5] [i_5])))));
                    arr_87 [i_5] [i_17 - 1] [i_5] = ((/* implicit */_Bool) (+(((unsigned int) var_9))));
                }
                for (short i_24 = 3; i_24 < 9; i_24 += 4) 
                {
                    arr_90 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(243512088U)))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_5] [i_9 + 1] [i_17]))) : (((((/* implicit */int) var_2)) << (((/* implicit */int) (_Bool)1))))));
                    var_44 = ((/* implicit */signed char) (-(arr_31 [i_5])));
                    var_45 = ((/* implicit */signed char) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_17 - 1] [i_24 - 2] [i_9 - 1])))));
                    var_46 = ((/* implicit */unsigned long long int) ((signed char) ((18446744073709551604ULL) << (((268369920U) - (268369857U))))));
                }
                var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) (+(arr_37 [i_9 - 1]))))));
                var_48 ^= ((/* implicit */int) ((3448871036908575702LL) << (((((/* implicit */int) (unsigned char)0)) % (2147483647)))));
                arr_91 [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)95)) && (((/* implicit */_Bool) 609441539U))));
            }
            var_49 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_5] [i_5] [i_5] [i_9] [i_9])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3597829258519460304LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_9] [i_5])))))) : (arr_53 [i_5] [i_9])));
        }
        arr_92 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3597829258519460299LL)) ? (arr_85 [i_5] [i_5] [i_5]) : (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1666609945)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2403118272U)))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (-2785507276751405432LL)))));
        var_50 = (-(arr_62 [i_5] [8U] [i_5] [8U]));
    }
}
