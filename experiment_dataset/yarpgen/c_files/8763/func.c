/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8763
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
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (arr_4 [i_1]))))) <= (((((/* implicit */_Bool) (unsigned short)44370)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (2641365610U))))) ? (((arr_1 [i_0] [i_0]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1653601685U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1])))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_13) ? (max((((/* implicit */unsigned int) var_13)), (2641365613U))) : (((2641365610U) - (arr_5 [(short)5] [i_0] [i_0])))))) + ((-(min((var_6), (((/* implicit */unsigned long long int) var_1))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) -6036385066071851008LL)) : (var_10))))) ? (min((((arr_1 [i_0] [15]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [15] [i_0]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [(signed char)3])) : (((/* implicit */int) arr_4 [i_1])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_4 [i_0])), (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) 545005721))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((1653601659U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) < (((3353680907U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))))))) + (min((max((((/* implicit */unsigned long long int) (_Bool)1)), (281474976710656ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        var_23 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        arr_11 [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_1))))))) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) 941286389U)))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (min((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3]))) : (1728533383477539646ULL))), (((arr_9 [(short)7] [(short)7]) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) 3353680907U))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= ((+(((/* implicit */int) var_9)))))))) * (((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) 2641365610U)) ? (arr_5 [i_3] [i_3] [i_3]) : (1653601665U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3])))))));
    }
    for (int i_4 = 2; i_4 < 19; i_4 += 4) 
    {
        var_25 = ((/* implicit */signed char) var_16);
        arr_16 [i_4 - 2] = ((/* implicit */signed char) min((arr_15 [i_4 - 2]), ((-(min((((/* implicit */unsigned int) (unsigned short)9963)), (1653601651U)))))));
        var_26 ^= ((/* implicit */_Bool) (+(arr_15 [0U])));
        var_27 = ((/* implicit */unsigned char) (-(((var_12) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_28 = ((/* implicit */signed char) arr_0 [i_5] [i_5]);
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3353680920U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        arr_26 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_8]))));
                        arr_27 [i_8] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) var_14))));
                        arr_28 [i_5] [i_5] [(signed char)8] [i_7] = ((/* implicit */unsigned char) 1842938984);
                    }
                } 
            } 
        }
        for (unsigned int i_9 = 2; i_9 < 10; i_9 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_10 = 3; i_10 < 10; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), (arr_24 [i_9] [i_9 - 1] [i_9] [(unsigned char)7] [i_5] [i_9])));
                var_31 += ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_9 - 1] [i_10])) <= (((/* implicit */int) var_4))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_9 + 2]))) + (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_13 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_10 - 1])))))));
            }
            for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    var_33 = ((/* implicit */long long int) arr_29 [i_11] [i_9 + 2]);
                    var_34 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_35 = ((/* implicit */long long int) (+(arr_15 [i_9 + 1])));
                    arr_38 [i_5] [i_9 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) arr_10 [i_9 + 2])) : (((/* implicit */int) ((arr_18 [i_9 - 1]) != (((/* implicit */int) var_4)))))));
                }
                var_36 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                var_37 &= arr_32 [i_11] [i_11] [i_5] [i_5];
            }
            for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) arr_37 [i_5] [i_5] [i_5] [1LL] [i_9] [i_13]))));
                var_39 *= ((/* implicit */short) ((unsigned short) ((var_1) ? (arr_37 [i_9] [i_5] [i_9] [i_5] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_9] [i_9] [i_5]))))));
                var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2845250278U)) && (((/* implicit */_Bool) arr_31 [i_5]))))) != (arr_18 [i_13])));
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 2])) + (((/* implicit */int) (unsigned char)252)))))));
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)91))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (unsigned short)39310)) ? (arr_8 [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
            }
            var_43 = ((/* implicit */int) var_11);
            /* LoopNest 3 */
            for (unsigned int i_14 = 2; i_14 < 10; i_14 += 4) 
            {
                for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (unsigned char i_16 = 1; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_15] [i_14 - 2] [(_Bool)1] [i_15])) * (((/* implicit */int) arr_34 [i_5] [i_14 + 2] [i_15] [i_14 + 2]))));
                            arr_48 [i_5] [i_15] [i_16] [i_15] = ((/* implicit */int) var_0);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                var_45 = ((/* implicit */short) arr_17 [i_9 - 2] [i_9 - 2]);
                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_5] [i_9] [i_17] [i_5])) ? (18065850241025045557ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59512))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))) ^ (var_12)))));
                arr_51 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) ((arr_23 [i_9 - 1] [i_9 + 1] [i_9 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        }
    }
    var_47 = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_4)))) < (((/* implicit */int) min((var_18), (((/* implicit */unsigned char) var_13))))))) ? (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned char)32), (var_5)))), (((var_7) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned short)27127))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)20))))), (((((/* implicit */_Bool) (unsigned short)6043)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) : (var_15)))))));
    var_48 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (-411217429)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_0))))) : ((-(var_6))))), (((/* implicit */unsigned long long int) var_14))));
}
