/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69574
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
    var_15 += ((/* implicit */int) var_14);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((((signed char) -9223372036854775794LL)), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_13))))) && (((/* implicit */_Bool) (unsigned char)95)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 4]))))), (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 2])) ? (4269110294654937632ULL) : (arr_0 [i_0 - 2] [i_0 + 2])))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_18 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((14177633779054613971ULL) - (var_4)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34456))) - (0U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-2801)))))))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) var_1)), (arr_0 [i_0] [i_0])))))));
            var_19 = min((((var_4) + (arr_0 [i_0 - 3] [i_0 - 3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2]))))));
            var_20 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 0U)) % (var_10))), (((/* implicit */unsigned long long int) (~((-(2096128U))))))));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((min((((/* implicit */unsigned long long int) var_3)), (var_6))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))), (((/* implicit */unsigned long long int) 4294967295U))))));
            var_22 = ((/* implicit */unsigned int) (unsigned char)76);
            /* LoopSeq 4 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_23 = ((/* implicit */short) (+((-(var_14)))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)66))))) ? (((/* implicit */int) arr_10 [i_0 - 3] [i_0])) : (((/* implicit */int) ((signed char) max((var_10), (((/* implicit */unsigned long long int) (unsigned short)39012))))))));
            }
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_2] [i_2] [i_2]);
                        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)91))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) + (((/* implicit */int) (signed char)91))))) - (arr_13 [i_0] [i_0] [i_0])))))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((~(((arr_15 [i_0] [i_0]) | (((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))))))));
                    }
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((8555281213466903296LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)132)) ? (((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 - 1] [i_4 + 1])))))))))));
                }
                var_28 = ((/* implicit */short) (((!(((/* implicit */_Bool) 0U)))) || (((/* implicit */_Bool) (short)7618))));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_4) : (var_4))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-2801)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) ? (arr_15 [i_0 + 2] [i_0 - 1]) : (((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_15 [i_0] [i_0]) : (((/* implicit */int) var_0)))))))))));
            }
            for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                var_30 = ((/* implicit */unsigned long long int) var_1);
                var_31 = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0]);
            }
            for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (-(arr_15 [i_0] [i_0]))))));
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_23 [i_0 - 1] [i_0 - 2] [i_0 - 1]))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (-((~(arr_3 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 4) 
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 3])) != (((/* implicit */int) (signed char)91))));
                    arr_32 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_3);
                    var_35 = arr_7 [i_2] [i_2];
                }
                var_36 = (!((!(((/* implicit */_Bool) arr_15 [i_0] [i_0])))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                arr_35 [i_12] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(arr_15 [i_0 + 2] [i_0 - 1])))), (min((((((/* implicit */_Bool) (unsigned short)65521)) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (14177633779054613989ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_12] [i_12])) - (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])))))))));
                var_37 = ((/* implicit */unsigned long long int) -9107439220000608959LL);
            }
            for (unsigned long long int i_13 = 3; i_13 < 16; i_13 += 4) 
            {
                var_38 = ((/* implicit */unsigned char) ((long long int) (short)7618));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 3])) ? ((+(((/* implicit */int) (short)16368)))) : (((/* implicit */int) var_11))));
                    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_13] [i_13 - 3] [i_13] [i_13] [i_13 + 1] [i_13]))));
                    arr_40 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) var_11)) ? (2U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11098061651015470588ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) (signed char)-91))))));
                }
                for (short i_15 = 1; i_15 < 16; i_15 += 4) 
                {
                    /* LoopSeq 4 */
                    for (int i_16 = 1; i_16 < 15; i_16 += 2) 
                    {
                        var_41 *= ((/* implicit */signed char) min((var_4), (max((((/* implicit */unsigned long long int) arr_12 [i_0 - 4] [i_0] [i_0 - 1])), (arr_13 [i_0] [i_0] [i_0])))));
                        var_42 = ((/* implicit */long long int) (+(min((arr_23 [i_15 - 1] [i_15 + 1] [i_15 - 1]), (var_6)))));
                        var_43 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 287948901175001088LL)))))));
                    }
                    for (signed char i_17 = 2; i_17 < 16; i_17 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_4 [i_15 + 1] [i_15 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (signed char)-119))))))));
                        var_45 &= arr_6 [i_0];
                    }
                    for (signed char i_18 = 2; i_18 < 16; i_18 += 4) /* same iter space */
                    {
                        var_46 += (short)16367;
                        var_47 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_13 - 2] [i_13 - 3] [i_13])), (arr_3 [i_0])))) ? (((arr_5 [i_0 - 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_48 *= ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (signed char i_19 = 2; i_19 < 16; i_19 += 4) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))), ((~(((/* implicit */int) arr_46 [i_0] [i_0] [i_15] [i_0 + 1] [i_0]))))));
                        var_50 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-16348))) ^ (var_14))) : (((/* implicit */long long int) 713576949U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((2779278773U), (((/* implicit */unsigned int) (short)16368)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_50 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0])) < (14211172448552527031ULL))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_20 = 1; i_20 < 16; i_20 += 4) 
                    {
                        var_51 &= ((((((/* implicit */_Bool) arr_6 [i_0])) || (((_Bool) (unsigned char)219)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_45 [i_15] [i_15 + 1] [i_15] [i_15 + 1] [i_15] [i_15]))))) : (((((/* implicit */_Bool) 1739860295)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20014))) : (2779278773U))));
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_52 [i_0 - 4]))) : ((-(arr_52 [i_0 - 1])))));
                        var_53 = (!(((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0))))))));
                        var_54 = (!(((/* implicit */_Bool) 4235571625157024558ULL)));
                    }
                }
            }
            var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-91)), (4235571625157024585ULL)))) ? (min((((/* implicit */unsigned int) var_3)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0]))))))))) ? (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 2087445009U)) ? (((/* implicit */unsigned long long int) 2186652908U)) : (14211172448552527076ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)-11)))), (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))) != (var_14))))))))))));
        }
        for (unsigned int i_21 = 0; i_21 < 17; i_21 += 4) /* same iter space */
        {
            var_56 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_23 [i_0 - 4] [i_0 - 1] [i_0 - 4])))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_0 - 2] [i_0])) ? (arr_23 [i_0] [i_0] [i_0]) : (arr_23 [i_0] [i_0] [i_0 - 4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
            var_57 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_43 [i_0 - 2])), (((((/* implicit */_Bool) arr_43 [i_0 - 2])) ? (((/* implicit */int) arr_43 [i_0 - 2])) : (((/* implicit */int) (signed char)12))))));
        }
        for (unsigned int i_22 = 0; i_22 < 17; i_22 += 4) /* same iter space */
        {
            var_58 = ((/* implicit */signed char) 4235571625157024585ULL);
            var_59 &= ((/* implicit */unsigned long long int) ((var_8) << (((((unsigned int) var_4)) - (2660292384U)))));
        }
        var_60 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_34 [i_0] [i_0] [i_0] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (short i_23 = 2; i_23 < 15; i_23 += 4) 
    {
        var_61 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_23] [i_23] [i_23])))))));
        var_62 = 3584881291U;
    }
    for (signed char i_24 = 0; i_24 < 14; i_24 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_25 = 4; i_25 < 10; i_25 += 4) 
        {
            var_63 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_68 [i_25 - 2] [i_25 + 2])) ? (4235571625157024538ULL) : (((/* implicit */unsigned long long int) 710086028U))));
            var_64 += ((/* implicit */short) 4194288U);
        }
        var_65 *= (~(var_10));
    }
}
