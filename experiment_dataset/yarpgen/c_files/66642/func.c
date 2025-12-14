/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66642
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
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
    var_16 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) var_1))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_0)))))))) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((var_8), (115823265615475619LL)))) == (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned long long int) (signed char)-112)), (arr_3 [i_0] [(unsigned char)3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))))))));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            arr_8 [i_0] = var_1;
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_18 *= (signed char)-52;
                /* LoopSeq 3 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    arr_13 [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((841725U) & (1676959919U)));
                    arr_14 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) ((int) (unsigned short)35175))) ? (((long long int) var_12)) : (5570292113323317141LL));
                }
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_19 ^= ((/* implicit */int) ((long long int) var_14));
                    arr_17 [i_4] [i_4] [i_2] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-52)) ^ (((/* implicit */int) var_14))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)27))));
                }
                for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_5] [15LL] = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                        arr_26 [i_0] [i_1] [13ULL] [i_5] [i_6] = ((/* implicit */long long int) var_14);
                        arr_27 [i_0] [i_2] [i_0] |= ((/* implicit */long long int) ((((((/* implicit */int) var_1)) < (((/* implicit */int) var_4)))) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1]))));
                    }
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [11LL] [i_1] [i_1] [3LL] [i_1 + 3] [11LL] [i_1]))) + (arr_3 [i_1] [i_5]))))));
                    var_22 = ((/* implicit */int) (+(4294967288U)));
                }
            }
            var_23 = ((/* implicit */long long int) arr_19 [i_0] [i_0] [i_1 - 1] [(unsigned char)14]);
            arr_28 [i_0] [i_0] [i_1 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((1676959919U) % (17U)))) : (arr_1 [i_0] [i_0])))) ? (arr_21 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) 1571104426))))));
        }
        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 3) 
        {
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
            arr_33 [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))) + ((~(var_10))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        {
                            arr_42 [i_0] [i_0] [i_7 - 1] [i_7 - 2] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2494429181U))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_7] [i_0] [i_0]))) : (((((/* implicit */int) (unsigned short)63436)) + (((/* implicit */int) (signed char)-52))))));
                        }
                    } 
                } 
            } 
            arr_44 [i_0] [i_0] = ((/* implicit */unsigned short) arr_16 [i_7 - 1] [i_7 + 1] [i_0] [i_7 - 2]);
        }
        for (int i_11 = 1; i_11 < 18; i_11 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 2; i_12 < 17; i_12 += 2) 
            {
                for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    {
                        arr_52 [i_0] [10U] [i_0] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_50 [i_12] [i_12] [i_12 + 2] [i_12] [i_12 - 1]) + (arr_50 [3U] [i_12] [6LL] [i_12] [i_12 + 1])))) ? (((/* implicit */int) (unsigned short)39333)) : (((/* implicit */int) var_13))));
                        arr_53 [i_0] [i_11] [(_Bool)1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65509)) ? (((/* implicit */int) (short)1314)) : (((/* implicit */int) (_Bool)1))))), ((~(1256467870U)))));
                    }
                } 
            } 
            arr_54 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)-17))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (4043844198270412444ULL)))));
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)35169)), (22U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [(unsigned char)16])), (((unsigned short) arr_22 [i_11] [i_11] [(signed char)0] [i_11] [i_11] [i_11] [i_11])))))) : (((((long long int) arr_19 [i_0] [i_0] [i_11] [(unsigned short)9])) % (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_11 - 1] [i_11 - 1])))))));
        }
        for (int i_14 = 1; i_14 < 18; i_14 += 3) /* same iter space */
        {
            arr_57 [i_0] [i_14] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (1800538114U))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))));
            arr_58 [i_0] [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
            arr_59 [i_0] [i_0] [i_0] = var_13;
            arr_60 [i_0] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_14 + 1] [i_14] [i_14 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_49 [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 1])) ^ (((/* implicit */int) arr_46 [i_14 + 1] [i_14 + 1] [i_14 - 1])))))));
        }
    }
    for (long long int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            arr_66 [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_15] [i_15] [(unsigned short)10] [i_16] [i_16])) ? (arr_50 [2U] [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35164)))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 1; i_17 < 18; i_17 += 1) 
            {
                for (signed char i_18 = 3; i_18 < 18; i_18 += 2) 
                {
                    {
                        arr_72 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65514)) / (((/* implicit */int) (unsigned short)16233))));
                        arr_73 [i_15] [i_16] [i_17] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_15] [i_17 + 1] [(signed char)11])) : (((/* implicit */int) (unsigned short)53014))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */unsigned char) var_5);
        /* LoopNest 3 */
        for (short i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            for (long long int i_20 = 2; i_20 < 18; i_20 += 3) 
            {
                for (int i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    {
                        arr_80 [i_15] [i_19] [0U] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30336)) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_38 [2ULL] [i_21] [i_20 + 1] [i_21] [i_15] [i_15])) == (((/* implicit */int) arr_46 [i_15] [i_20] [i_15]))))), ((short)18161)))) : (((((/* implicit */int) ((short) var_12))) | (((/* implicit */int) (unsigned char)159))))));
                        arr_81 [(unsigned short)13] [i_21] &= ((/* implicit */unsigned char) min(((unsigned short)16233), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
                    }
                } 
            } 
        } 
        arr_82 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-2337395552238350991LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)70)))))) ? (((int) 5570292113323317141LL)) : (min(((-(1295290272))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    }
    for (long long int i_22 = 0; i_22 < 19; i_22 += 1) /* same iter space */
    {
        arr_85 [2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1003771829U)) ? (((((/* implicit */_Bool) min((arr_78 [i_22] [i_22] [i_22] [i_22]), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */long long int) ((1245820345) | (((/* implicit */int) var_12))))) : ((~(arr_1 [(unsigned char)10] [(unsigned char)8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_10))) >= (((((/* implicit */_Bool) 349855415)) ? (arr_31 [i_22]) : (((/* implicit */unsigned long long int) arr_37 [i_22] [i_22] [i_22] [i_22]))))))))));
        arr_86 [i_22] = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) - (((/* implicit */int) arr_38 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])))) + (((/* implicit */int) (short)-18175))));
    }
}
