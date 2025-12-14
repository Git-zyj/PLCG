/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63310
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
    var_19 = ((/* implicit */int) min((var_19), ((+((+(((/* implicit */int) (unsigned char)115))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_2 [i_0 + 1])))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0 - 2])))))));
        var_22 ^= ((/* implicit */int) (_Bool)1);
        var_23 ^= ((/* implicit */short) arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) (unsigned char)218)))), ((!((_Bool)1))))), (min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 2]))))))));
        var_25 ^= ((long long int) min((min((((/* implicit */unsigned char) arr_3 [i_1 + 2])), ((unsigned char)37))), (((unsigned char) (unsigned char)17))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_26 ^= ((/* implicit */unsigned int) (-(((arr_4 [i_1]) << (((max((((/* implicit */unsigned long long int) (unsigned char)217)), (arr_4 [i_1]))) - (11648275696609994790ULL)))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13386205469131197395ULL)) ? (((((/* implicit */_Bool) 14489433685943988016ULL)) ? (arr_6 [i_1] [i_1] [i_1]) : (arr_4 [i_2]))) : (arr_6 [i_1 + 1] [6] [i_1 - 1])))))))));
        }
        for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            var_28 ^= ((/* implicit */unsigned long long int) ((long long int) (((!(((/* implicit */_Bool) arr_11 [i_3])))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (3995894141U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1]))))))));
            var_29 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_7 [i_1 + 2])) * (((/* implicit */int) min((((/* implicit */signed char) arr_7 [9LL])), ((signed char)126))))))));
        }
        for (short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_30 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)0))) ? (((/* implicit */int) min(((unsigned char)38), (((/* implicit */unsigned char) (signed char)-115))))) : (((/* implicit */int) (unsigned char)219))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1]))))), (min((((/* implicit */long long int) (unsigned char)255)), (arr_10 [i_1 + 1] [i_4])))))));
            var_31 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 2])))))));
            var_32 ^= ((/* implicit */long long int) (~((-(arr_14 [i_1 - 1] [i_4 + 2])))));
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_33 ^= ((/* implicit */signed char) (((~(arr_5 [i_1] [i_1 + 1] [(unsigned char)2]))) << ((((((~(-5430461243830611283LL))) & (((/* implicit */long long int) 839617137)))) - (805865551LL)))));
            var_34 ^= var_12;
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171))))))))))));
                var_36 ^= ((long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1])), (arr_11 [4LL]))))));
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (unsigned char)202))));
                var_38 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) arr_3 [i_1])))))))) ^ ((-(arr_11 [i_1 - 1])))));
            }
            /* vectorizable */
            for (short i_7 = 1; i_7 < 12; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)61)) ? (((unsigned long long int) arr_22 [i_1] [i_1] [i_7])) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))))));
                    var_40 ^= ((/* implicit */int) ((arr_10 [i_7] [i_7]) != (((/* implicit */long long int) ((/* implicit */int) ((var_16) >= (((/* implicit */long long int) ((/* implicit */int) (short)-8361)))))))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) arr_16 [i_1 - 1]))));
                }
                var_42 ^= ((/* implicit */unsigned int) ((int) ((-9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                var_43 ^= ((/* implicit */long long int) ((((((/* implicit */int) (short)-14621)) + (2147483647))) >> (((((unsigned long long int) (unsigned char)136)) - (107ULL)))));
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (-(arr_18 [i_1 - 1] [i_7]))))));
                var_45 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)4))))) ? (((((/* implicit */_Bool) (short)-8161)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)62)))) : ((-(((/* implicit */int) (_Bool)1))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    var_46 ^= ((/* implicit */signed char) arr_21 [i_1] [i_1]);
                    var_47 ^= ((min((arr_26 [i_5] [i_9 + 1] [i_1 + 2] [i_1 + 1] [i_5]), (((/* implicit */unsigned long long int) arr_19 [i_9] [i_1 + 2] [i_1] [i_1])))) / ((+(arr_26 [i_10] [i_9] [i_1 + 2] [(_Bool)1] [i_10]))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 13; i_11 += 3) 
                    {
                        var_48 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [1LL] [i_5] [i_9 + 1] [i_10]))) <= ((+(-7549692003004182976LL)))));
                        var_49 ^= ((/* implicit */unsigned char) arr_28 [i_5] [0ULL] [i_9] [i_5] [i_11]);
                        var_50 ^= ((/* implicit */unsigned char) (+(min((11666320677704806617ULL), ((+(arr_6 [i_1] [i_1] [i_11])))))));
                    }
                }
                for (unsigned int i_12 = 4; i_12 < 13; i_12 += 4) 
                {
                    var_51 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1 + 2])) ? (-7079714021366820426LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1])))))), (min(((-(17596686390890446167ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                    var_52 = ((/* implicit */long long int) min((var_52), (max((((/* implicit */long long int) min((arr_25 [i_9] [i_9 + 1] [i_5]), (arr_25 [i_9 + 1] [i_9 + 1] [10])))), (((((/* implicit */_Bool) arr_25 [i_9 + 1] [i_9 + 1] [(short)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(_Bool)1] [i_9 + 1] [i_1]))) : (-4045383349510752524LL)))))));
                    var_53 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 7493229372819539764LL)) < (arr_26 [i_5] [i_9] [i_9 + 1] [i_9 + 1] [i_9])))) >> ((((-(3152048379254803970LL))) + (3152048379254803982LL)))));
                    var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) ((((arr_30 [i_12] [i_12] [i_1 + 2]) / (arr_30 [i_5] [i_5] [i_1 + 1]))) | (((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_1 + 1])) ? (arr_30 [i_5] [10U] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                }
                var_55 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-116)) / (arr_14 [i_9 + 1] [i_1 - 1])))) ? (((/* implicit */int) (short)498)) : ((+(((/* implicit */int) (signed char)53))))));
            }
        }
        var_56 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned char)0))));
    }
}
