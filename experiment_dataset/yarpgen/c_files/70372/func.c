/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70372
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((long long int) (unsigned short)59963))))));
        var_18 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 9696782734253164987ULL)))) | (max((arr_1 [i_0 - 1] [i_0 - 2]), (((/* implicit */unsigned int) var_2))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(18446744073709551615ULL)));
        arr_3 [10U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))) * (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [(unsigned short)6] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_19 += ((/* implicit */signed char) max((min((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (arr_5 [(unsigned short)22]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) != (((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_2] [i_3]))))) ? (min((((int) var_7)), (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_3] [14U])), (arr_8 [i_3] [i_2])))))) : (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 3; i_5 < 22; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((unsigned int) arr_6 [(signed char)1])) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5 - 3] [i_5 - 2]))))))));
                            arr_16 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_2] [i_3] [i_3 + 1] [i_5 - 1] [i_3]))) | (422059522U))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59963)))));
                            arr_17 [i_1] = ((/* implicit */short) arr_9 [i_1] [i_1] [(unsigned short)13]);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(arr_15 [i_2] [i_2] [i_3 - 1] [i_2] [i_5 - 2] [i_5 + 1]))))));
                        }
                        var_23 |= ((/* implicit */signed char) max((((/* implicit */unsigned short) (short)1667)), ((unsigned short)50752)));
                        arr_18 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_7 [i_2] [i_4])), (arr_9 [i_1] [i_3 + 1] [i_4])))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (arr_15 [i_1] [i_2] [i_3] [i_4] [i_4] [(signed char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5573)))))) : (((unsigned long long int) (signed char)-1))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            arr_22 [i_1] [i_2] [i_3] [i_4] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2551166778987507324ULL)) ? (((/* implicit */unsigned long long int) 2451416984U)) : (0ULL)));
                            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((arr_21 [i_4] [i_2] [i_3] [i_3] [i_3] [i_3] [i_6]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((short) 2551166778987507324ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)5572)))) != (min((((/* implicit */unsigned int) arr_4 [i_1] [i_6])), (arr_12 [i_4] [i_2] [i_4]))))))) : (((unsigned int) arr_14 [i_2] [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 2] [i_3]))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)-1)), ((short)-1667))))) != (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_1] [i_6]))))), (((((/* implicit */_Bool) arr_6 [i_6])) ? (arr_12 [i_2] [i_4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59962)))))))));
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (unsigned short)65535)) : ((~(((/* implicit */int) (unsigned short)59963)))))));
                        var_27 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3 + 1] [i_3] [i_3 - 1] [i_3])) ? ((+(arr_21 [i_3] [i_2] [i_2] [i_2] [i_2] [i_2] [6LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 1] [i_3] [i_3 - 2] [i_3 + 1]))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        arr_28 [i_1] [i_1] [i_1] [(short)18] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (0) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)59963))));
                        var_28 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_26 [i_3] [i_3] [22U] [i_3 + 1])), (arr_15 [i_3] [i_3 - 2] [i_3] [i_3 + 1] [i_3 - 2] [i_3 - 2])))) ? (arr_15 [i_3] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3]) : ((+(arr_15 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 2] [18LL])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            {
                                arr_36 [i_1] [i_1] [i_1] [i_9] [i_10] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) 0))), (min((((/* implicit */unsigned int) var_0)), (arr_12 [i_3] [i_2] [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_7)), (var_12))))) : (max((arr_30 [i_1] [i_1] [i_2] [i_3] [i_9] [i_3]), (((/* implicit */unsigned long long int) var_16)))))))));
                                var_29 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_2] [i_3 + 1]), (arr_33 [(short)8] [i_1] [i_2] [i_9] [i_3] [i_1] [i_10])))))))) | (max((((/* implicit */long long int) ((unsigned int) 1705890562U))), (((((/* implicit */_Bool) -2580077124423755895LL)) ? (((/* implicit */long long int) arr_13 [i_2] [i_3])) : (var_9)))))));
                            }
                        } 
                    } 
                    arr_37 [i_1] [i_3 - 1] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)19849)) >= (((/* implicit */int) arr_11 [13] [i_3 - 1] [i_3 - 2] [i_3 - 1]))))), (((var_15) * (((/* implicit */unsigned long long int) ((long long int) var_6))))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (signed char i_11 = 1; i_11 < 14; i_11 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_12 = 2; i_12 < 12; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_15)))) * ((~(arr_47 [i_11])))));
                            arr_52 [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)59963)) ? (((/* implicit */int) arr_39 [i_11] [i_12])) : (((/* implicit */int) arr_32 [i_13 + 1]))));
                        }
                    } 
                } 
            } 
            arr_53 [i_11] [i_11] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_14 [i_11] [i_12 + 1] [i_11] [i_12] [i_12 + 1] [i_11]))))));
            arr_54 [i_11] [i_12 + 2] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) var_12)))));
            var_31 += ((/* implicit */signed char) arr_5 [i_12]);
            arr_55 [i_12] [i_12] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_12] [i_11 - 1] [i_12 - 2]))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            arr_58 [i_11] [i_11] = ((/* implicit */long long int) min((((unsigned long long int) min((((/* implicit */unsigned long long int) (short)23515)), (arr_47 [i_16])))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)0))))))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_39 [i_11] [i_11]), (((/* implicit */short) var_7))))) | ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) (unsigned short)59962)) : ((+(((/* implicit */int) (_Bool)0))))));
            arr_59 [i_11] = 17138708774638078482ULL;
        }
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(522086216U))))))));
        arr_60 [i_11] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_41 [i_11] [i_11 + 1] [i_11])), (arr_15 [i_11] [i_11 + 1] [i_11] [i_11] [i_11] [i_11])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))))) : (((long long int) var_7)))));
    }
    for (int i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_26 [i_17] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_27 [i_18] [i_18]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) (unsigned short)41513)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)2356))))))), ((~(((((/* implicit */_Bool) arr_8 [15U] [i_18])) ? (arr_12 [i_17] [(unsigned short)12] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_17] [i_18] [i_17] [i_17])))))))));
            arr_67 [i_17] [i_17] &= max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_17] [i_17] [i_18] [i_18]))))), (max((((((/* implicit */_Bool) (short)10673)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))) : (4294967295U))), (((unsigned int) arr_65 [i_17])))));
        }
        arr_68 [i_17] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_17])) != (((/* implicit */int) arr_63 [i_17]))))), (((((/* implicit */_Bool) arr_30 [i_17] [i_17] [i_17] [i_17] [(unsigned short)12] [(unsigned short)12])) ? (arr_30 [i_17] [i_17] [i_17] [(_Bool)1] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    }
    for (short i_19 = 1; i_19 < 18; i_19 += 4) 
    {
        arr_71 [i_19] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)23)), (arr_14 [(short)1] [i_19] [i_19] [i_19] [i_19] [i_19])))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [(signed char)22]))))))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) 784367237U)) ? (((/* implicit */int) (short)1667)) : (((/* implicit */int) (signed char)23))))) ? (((long long int) (signed char)23)) : (((/* implicit */long long int) 2047U))))));
        var_35 |= ((/* implicit */unsigned int) ((_Bool) ((signed char) ((((/* implicit */int) (unsigned short)17623)) > (((/* implicit */int) (short)0))))));
    }
}
