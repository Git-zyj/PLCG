/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99495
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))) ^ (6184493269210437192ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))), (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (unsigned short)3)))))) & (((((/* implicit */int) arr_1 [i_0] [i_0])) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (signed char)114)))))) ? (max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) arr_5 [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)121)))))) : ((~(((/* implicit */int) (unsigned short)13241)))))))));
        var_17 = ((/* implicit */unsigned long long int) (unsigned char)37);
    }
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) + (((/* implicit */int) var_12)))) - (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (int i_2 = 1; i_2 < 8; i_2 += 2) 
    {
        var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_15)))) > (((/* implicit */int) ((unsigned short) (signed char)-115))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_2 + 1]))) : (((arr_5 [i_2 + 2]) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2 - 1]))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), ((signed char)-125)));
            /* LoopSeq 4 */
            for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                var_21 = ((/* implicit */short) ((unsigned char) var_3));
                arr_16 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned short)65525)) - (((/* implicit */int) arr_1 [i_3] [i_2 - 1])))));
                var_22 = ((/* implicit */unsigned long long int) max((max((var_6), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_2])))))), (((/* implicit */unsigned short) (!(((_Bool) 524287)))))));
            }
            for (int i_5 = 4; i_5 < 6; i_5 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_8 [i_2 + 2] [i_3])) ^ (((/* implicit */int) arr_8 [i_2 + 1] [i_5])))), (((/* implicit */int) (!(max(((_Bool)1), (arr_5 [i_5]))))))));
                arr_19 [i_5] = ((/* implicit */unsigned short) min((arr_14 [i_2] [i_3]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_5] [i_2])))))));
                var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((max((arr_7 [i_2]), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3])))) >> (((((/* implicit */int) arr_12 [i_5 + 4] [i_3] [i_2 + 1])) + (1120))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2 + 1])) & (((/* implicit */int) max((((/* implicit */short) (signed char)114)), (arr_14 [i_2] [i_5]))))))));
                var_25 = ((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_5] [i_3]);
                arr_20 [i_2] [i_3] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
            }
            /* vectorizable */
            for (short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 1; i_7 < 6; i_7 += 4) /* same iter space */
                {
                    arr_27 [i_6] = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                    var_26 = ((/* implicit */signed char) arr_18 [i_7] [i_6] [i_3] [i_2]);
                }
                for (unsigned long long int i_8 = 1; i_8 < 6; i_8 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_8 + 1]))));
                    arr_32 [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) > (14710917585959031595ULL));
                    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 17732923532771328ULL))));
                }
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_2 + 2])) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_2 - 1])) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_2 + 1]))));
                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) arr_25 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 3) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)1)))));
                    var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6]))) ^ (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            }
            for (short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
            {
                var_33 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14710917585959031610ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2674525133712581854ULL))))));
                var_34 |= ((/* implicit */signed char) max((((long long int) (signed char)114)), (max((var_7), (((/* implicit */long long int) var_0))))));
                /* LoopSeq 2 */
                for (short i_11 = 4; i_11 < 6; i_11 += 4) 
                {
                    var_35 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (1635985804)));
                    var_36 = ((/* implicit */signed char) max((arr_15 [i_2]), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)65534)), (-1))))));
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) arr_24 [i_2 + 1] [i_12] [i_10]))));
                    var_38 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))) : (((/* implicit */int) (short)-148))));
                    arr_44 [i_2] = ((/* implicit */signed char) ((18446744073709551611ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))));
                }
            }
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)0))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        {
                            arr_53 [i_2] [i_3] [i_13] [i_14] [i_15] [i_14] [i_3] = ((/* implicit */long long int) max(((-(14710917585959031612ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_15]))))))));
                            arr_54 [i_2] [i_14] [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_26 [i_3] [i_14]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            }
            for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29450)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_17] [i_16] [i_17]))))) : (((/* implicit */int) ((unsigned short) ((unsigned char) var_6))))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) arr_47 [i_16] [i_16] [i_17]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)36)))) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_13 [i_2] [i_2])))))));
                        var_43 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_12))))));
                    }
                    arr_61 [i_2] [i_16] [i_16] [i_17] &= ((/* implicit */long long int) ((signed char) var_8));
                }
                for (signed char i_19 = 3; i_19 < 8; i_19 += 3) 
                {
                    var_44 = ((/* implicit */unsigned short) arr_37 [i_2] [i_3] [i_16] [i_19]);
                    var_45 = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_34 [i_2] [i_2 + 1] [i_16] [i_16] [i_19]), (arr_34 [i_2] [i_2 + 1] [i_16] [i_19] [i_2])))), (((((/* implicit */int) arr_34 [i_2] [i_2 + 1] [i_16] [i_19] [i_2])) * (((/* implicit */int) arr_34 [i_2] [i_2 + 1] [i_16] [i_19] [i_3]))))));
                }
                var_46 = ((/* implicit */short) (~(max((17822719402014686815ULL), (((/* implicit */unsigned long long int) (signed char)10))))));
            }
            var_47 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_50 [6ULL])))), ((-(((/* implicit */int) arr_50 [(signed char)4]))))));
        }
    }
    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_21 = 1; i_21 < 24; i_21 += 2) 
        {
            for (int i_22 = 0; i_22 < 25; i_22 += 4) 
            {
                {
                    var_48 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_70 [i_22] [i_21]))))) ? ((-(((/* implicit */int) (signed char)63)))) : (((/* implicit */int) arr_69 [i_22] [i_20]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) var_15)) : (2147483647)))) ? (((((/* implicit */long long int) -14973263)) + (arr_66 [i_21]))) : (max((((/* implicit */long long int) var_12)), (arr_66 [i_21])))))));
                    arr_72 [i_22] [i_21] [i_20] = ((/* implicit */unsigned char) arr_69 [i_22] [i_21 + 1]);
                    var_49 = ((/* implicit */_Bool) max((((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_68 [i_21 + 1] [i_21])))), (((/* implicit */int) arr_70 [i_21 + 1] [i_20]))));
                    var_50 = ((/* implicit */_Bool) arr_66 [i_21]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_51 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_76 [i_20] [i_23])) && (arr_69 [i_20] [i_23]))))));
            /* LoopNest 2 */
            for (short i_24 = 0; i_24 < 25; i_24 += 1) 
            {
                for (signed char i_25 = 1; i_25 < 23; i_25 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_70 [i_25 + 2] [i_26])))))));
                            arr_83 [i_20] [i_23] [i_23] [i_23] [i_25] [i_26] [i_26] = ((/* implicit */unsigned long long int) var_1);
                        }
                        arr_84 [i_20] [i_23] [i_23] [i_25] = ((/* implicit */unsigned short) var_0);
                        arr_85 [i_23] [i_23] [i_24] [i_25] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)7694)) - (7692)))));
                        var_53 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */int) var_11)) + (((/* implicit */int) arr_80 [i_20] [i_23] [i_24] [i_23])))), (((/* implicit */int) var_15)))) >= (((/* implicit */int) ((((/* implicit */int) arr_80 [i_25 - 1] [i_23] [i_24] [i_23])) <= (((/* implicit */int) var_10)))))));
                        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) + (-1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-29836))))) : (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned short)57839)))))));
                    }
                } 
            } 
            var_55 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)127))));
            arr_86 [i_23] = ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)117)), (max((arr_70 [i_23] [i_20]), (arr_81 [i_20] [i_23] [i_20] [i_20] [i_23])))));
        }
        /* vectorizable */
        for (unsigned char i_27 = 0; i_27 < 25; i_27 += 2) 
        {
            arr_90 [i_20] [i_27] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_27] [i_27]))) : (var_2)))));
            arr_91 [i_20] [i_20] = ((((((/* implicit */_Bool) (short)-9968)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34177))) : (16ULL))) != (arr_67 [i_20] [i_20]));
            arr_92 [i_20] [i_20] [i_27] = ((/* implicit */signed char) ((((15) >> (((-2LL) + (12LL))))) + (((/* implicit */int) (signed char)127))));
        }
    }
    var_56 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)124)), (min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (var_9))))))));
    var_57 = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_14)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)16)))))))));
}
