/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69893
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
    var_15 |= ((/* implicit */unsigned long long int) -3498458591539798879LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_16 = ((/* implicit */int) var_1);
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((/* implicit */int) arr_6 [i_0] [(signed char)3] [i_1] [(short)13]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 2]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-3498458591539798879LL) : (arr_4 [i_0] [i_1]))))), ((((-9223372036854775807LL - 1LL)) / (3498458591539798893LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_9))));
                                arr_16 [i_0] [(unsigned short)12] [i_0] [i_0] [i_2] [i_1] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) arr_15 [i_4 + 2] [i_1] [i_3 - 1] [i_2 + 2] [i_1] [i_2])), (((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)19141)))) & (((/* implicit */int) (signed char)-73))))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(4194303LL)))) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (unsigned short)17052)))))));
                                var_19 ^= ((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)6] [i_2] [i_3] [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_20 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_1]);
                        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(3498458591539798879LL)))) ? (((int) arr_15 [i_0] [i_0] [i_0] [i_2 + 2] [i_0] [i_1])) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [(unsigned short)4] [i_2 + 2] [(unsigned short)4] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2 + 2] [i_2 + 1] [i_1]))))));
                        arr_21 [i_0] [(signed char)14] [i_2 + 1] [i_1] [i_1] = ((/* implicit */signed char) (((~((~(9223372036854775807LL))))) - (((/* implicit */long long int) max(((~(((/* implicit */int) arr_18 [i_5] [i_5] [(short)9] [i_5])))), (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_2 - 1] [i_1]))))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        arr_25 [(signed char)11] [i_1] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_23 [(unsigned char)3] [i_1] [i_1] [i_6]))))));
                        arr_26 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (unsigned short)52818))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3498458591539798879LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)1802))))) : (((var_7) ? (arr_13 [i_0] [i_0] [i_2 + 2] [i_0] [(short)2]) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-50))) >= (arr_11 [i_6] [i_6] [i_6] [i_6] [(signed char)14] [i_6]))))));
                        var_21 = ((/* implicit */_Bool) -7077070485386155564LL);
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (max((((/* implicit */long long int) arr_10 [i_2 + 2] [i_1] [i_2] [i_1] [i_7])), (max((3498458591539798863LL), (((/* implicit */long long int) var_2)))))))))));
                        arr_31 [i_0] [i_7] [i_1] [i_1] = ((/* implicit */signed char) (!((_Bool)1)));
                        var_23 = max((min((arr_29 [i_1] [(unsigned short)10] [(unsigned short)10] [i_2 + 2] [(unsigned short)10]), (arr_29 [i_1] [i_1] [i_1] [i_2 + 2] [i_2 + 2]))), (max((((unsigned short) -3498458591539798868LL)), (arr_10 [i_1] [i_2 + 2] [i_2] [i_1] [i_1]))));
                        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 - 1])))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-35)), ((unsigned short)19157))))));
                    }
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned char) arr_36 [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2]))), (arr_32 [i_1] [i_1] [i_1] [i_8])));
                            var_26 = ((/* implicit */unsigned short) max((var_26), ((unsigned short)6)));
                            arr_38 [i_1] [i_1] [i_2] [14LL] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_11 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_2 + 2] [i_0] [i_2 - 1] [i_2 + 1] [i_0] [i_2 + 2]))))) + (max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (short)27785)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2387))) : (arr_22 [i_1] [i_1] [i_2] [i_8])))))));
                        }
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            arr_41 [i_1] [i_8] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6343)) ? (((/* implicit */int) arr_39 [i_0] [i_1] [i_0] [i_8] [i_8])) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) arr_14 [i_0] [i_2 + 1] [i_8] [i_10] [i_1]))));
                            arr_42 [i_1] [i_2] [i_2] [i_2 + 2] [i_2] [(unsigned short)7] [(unsigned char)3] = arr_14 [i_0] [(signed char)13] [(signed char)13] [(signed char)4] [i_1];
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_33 [(_Bool)1] [i_0] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_23 [i_2] [i_0] [i_2 + 1] [i_2 + 1])))))));
                        }
                        var_28 += ((/* implicit */unsigned short) min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) max((arr_39 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 + 1]), (arr_39 [i_2] [i_2] [i_2] [i_2] [i_2 + 1]))))));
                    }
                }
                for (unsigned char i_11 = 3; i_11 < 15; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 13; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 4) 
                        {
                            {
                                arr_53 [i_0] [i_13 + 2] [i_11] [i_1] = arr_36 [i_0] [i_1] [i_11] [i_12] [i_11];
                                arr_54 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_13]);
                            }
                        } 
                    } 
                    arr_55 [(signed char)3] [i_1] [i_11] = ((/* implicit */short) ((var_10) ? ((+(((((/* implicit */_Bool) (unsigned short)8874)) ? (arr_35 [i_1]) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (short)27785))));
                }
                /* LoopNest 2 */
                for (signed char i_14 = 3; i_14 < 12; i_14 += 1) 
                {
                    for (long long int i_15 = 4; i_15 < 15; i_15 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(-1794188059))))));
                            arr_62 [i_0] [i_1] [i_1] [i_15] = ((/* implicit */short) (unsigned short)1809);
                            var_30 |= ((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0]);
                            arr_63 [i_0] [i_1] [i_1] [i_14] [i_15 - 1] [i_15] = ((/* implicit */unsigned short) 13372074379628262390ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_16 = 4; i_16 < 7; i_16 += 4) 
    {
        /* LoopNest 3 */
        for (short i_17 = 3; i_17 < 7; i_17 += 3) 
        {
            for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 3) 
                {
                    {
                        var_31 = (unsigned short)0;
                        arr_73 [i_19] [i_16 - 4] [i_18] [i_18] [i_16 - 4] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_47 [i_18] [i_17 - 3] [i_18]), (arr_47 [i_18] [i_17 + 1] [i_18])))) && ((!((_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_74 [i_16] = ((/* implicit */long long int) min((arr_30 [i_16 - 3] [(unsigned short)13]), (((/* implicit */short) var_7))));
    }
    var_32 = ((/* implicit */unsigned short) (_Bool)0);
}
