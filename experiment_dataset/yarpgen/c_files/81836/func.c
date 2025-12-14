/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81836
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_2] [i_2 - 2] [i_2 + 1]), ((short)-17088)))) ? (((((((/* implicit */int) arr_2 [i_2] [i_2 + 1] [i_2 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_2] [i_2 + 1] [i_2 + 1])) + (103))))) : (((/* implicit */int) (!((_Bool)1))))));
                    var_20 ^= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) arr_6 [(unsigned short)10])) >= (((/* implicit */int) var_0))))) < (((var_15) + (((/* implicit */int) var_16)))))) ? ((~(min((((/* implicit */unsigned long long int) (short)-24891)), (var_10))))) : (max((arr_3 [12LL] [i_2 - 1]), (arr_3 [(signed char)6] [i_2 + 2])))));
                }
            } 
        } 
        var_21 ^= ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) min(((short)-24891), ((short)-24880))))) - (max((((/* implicit */long long int) var_17)), (arr_0 [i_0])))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62055))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-24891)))))))) ? (arr_1 [i_0] [i_0]) : (((var_8) ? (arr_3 [(unsigned char)8] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)20), (((/* implicit */unsigned short) var_7)))))))))))));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_23 &= ((/* implicit */unsigned short) max((((((var_6) ? (arr_10 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> (((7449129384326083975ULL) - (7449129384326083961ULL))))), (((/* implicit */long long int) (signed char)0))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 1) 
            {
                var_25 = ((/* implicit */short) ((arr_17 [i_3] [i_4] [i_5]) <= (((/* implicit */long long int) ((unsigned int) var_2)))));
                arr_19 [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)10);
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-16)) ^ (((/* implicit */int) (unsigned char)63)))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)10300)) - (10271))))))));
                arr_20 [i_5] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_5 - 3])) ? (arr_9 [i_5 - 2]) : (arr_9 [i_5 - 1])));
            }
            for (short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                arr_24 [i_3] [i_4] [i_6] = ((/* implicit */signed char) 7449129384326083979ULL);
                var_27 ^= ((/* implicit */int) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_3)))))));
            }
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            var_28 = ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)3480)));
            arr_27 [i_7] = ((/* implicit */unsigned short) (-((+((-(((/* implicit */int) var_16))))))));
            /* LoopSeq 2 */
            for (short i_8 = 2; i_8 < 17; i_8 += 2) /* same iter space */
            {
                var_29 &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)62340)) < (-1079993082))))) < (min((((/* implicit */unsigned long long int) 690748657)), (765811706416719794ULL))))) ? (min((2147483637), (0))) : (((((/* implicit */_Bool) (-(arr_22 [i_3] [i_7] [i_3])))) ? (((/* implicit */int) var_4)) : (arr_23 [i_3] [i_3] [i_3])))));
                var_30 *= ((/* implicit */unsigned short) (_Bool)1);
                var_31 = ((/* implicit */short) min((max((arr_10 [i_7]), (((((/* implicit */_Bool) -2815528746465748542LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42570))) : (1193761603536416655LL))))), (((/* implicit */long long int) min((3038758217U), (((/* implicit */unsigned int) (unsigned char)8)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    arr_34 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_28 [i_8 + 1] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) var_9)) : (var_12))));
                    var_32 &= ((/* implicit */unsigned char) var_5);
                }
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    var_33 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)3481)) ? (1102370327) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1))))));
                    arr_37 [i_3] [i_7] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_3)))))) != (min((((unsigned int) 18446744073709551615ULL)), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((arr_23 [i_3] [i_7] [i_8]) - (846206742))))))))));
                }
                for (short i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    arr_42 [i_11] [i_7] [i_8 - 1] [i_7] [i_7] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551587ULL)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [i_8 + 1] [i_7] [i_8] [i_8 - 2]))))) : ((+(max((((/* implicit */unsigned int) var_0)), (arr_25 [i_11])))))));
                    arr_43 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [(signed char)16]))) : (var_10)))))))) != (((arr_31 [i_7] [i_7] [i_11] [i_11]) * (arr_31 [i_7] [i_8 - 1] [i_7] [i_7])))));
                }
                var_34 += ((/* implicit */long long int) var_13);
            }
            for (short i_12 = 2; i_12 < 17; i_12 += 2) /* same iter space */
            {
                var_35 ^= ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_23 [(_Bool)1] [i_7] [(_Bool)1])) > (arr_28 [i_3] [i_3] [i_12]))))) - (((arr_46 [i_12] [i_12] [i_7] [i_12]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                var_36 ^= ((/* implicit */int) var_0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    arr_49 [i_7] [i_7] [i_12 + 1] [i_12 + 1] [i_13] = ((((/* implicit */_Bool) arr_22 [i_12 - 2] [i_12] [i_12 - 1])) && (((/* implicit */_Bool) -29786384)));
                    var_37 *= ((/* implicit */unsigned int) (~((~(29ULL)))));
                }
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        {
                            var_38 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_29 [i_14] [i_12 + 1] [i_12 + 1] [i_7])))) < (((unsigned long long int) var_3))));
                            arr_54 [(_Bool)1] [i_7] [i_12] [i_7] [i_3] = ((/* implicit */int) (-(-2623945184057845062LL)));
                            arr_55 [i_7] = ((/* implicit */long long int) min((min(((+(((/* implicit */int) (signed char)96)))), (min((arr_47 [i_15] [i_3] [i_12 + 1] [i_3]), (-29786390))))), (max((var_15), ((~(((/* implicit */int) (short)-30190))))))));
                            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (+(((((/* implicit */long long int) arr_9 [i_3])) % (arr_10 [i_12 - 2]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_40 -= ((/* implicit */unsigned int) (_Bool)1);
                            var_41 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 2305843004918726656LL)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551592ULL)))))) % (((long long int) ((arr_46 [i_12] [i_7] [i_12] [i_17]) + (7449129384326083975ULL))))));
                        }
                    } 
                } 
            }
            var_42 &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((_Bool) var_11))), (((((unsigned int) 2305843004918726662LL)) << (((((((/* implicit */_Bool) var_1)) ? (1447293656391254689ULL) : (18446744073709551583ULL))) - (1447293656391254660ULL)))))));
        }
        var_43 = ((/* implicit */long long int) (-(((16999450417318296926ULL) % (1447293656391254689ULL)))));
    }
    for (long long int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
    {
        arr_66 [14ULL] &= ((/* implicit */short) (~(-2305843004918726679LL)));
        var_44 *= ((/* implicit */unsigned char) var_4);
        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14272)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-32757), ((short)0)))))));
        /* LoopSeq 1 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            var_47 = ((/* implicit */short) min((max((((/* implicit */int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (unsigned char)248))))), (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_38 [i_19] [i_19] [i_18] [i_18])))))), (((((/* implicit */_Bool) max((((/* implicit */int) (short)32743)), (556704861)))) ? (((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_62 [i_18]))))));
        }
    }
}
