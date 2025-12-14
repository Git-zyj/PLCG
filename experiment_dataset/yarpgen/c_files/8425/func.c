/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8425
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
    var_10 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) != (var_8)))), (((short) var_0)))))) : (var_8)));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_11 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) : (-960591210328353762LL)));
        var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((2429769281804106746ULL), (((/* implicit */unsigned long long int) (signed char)62))))) ? ((+(((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_2 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1]))))))));
    }
    for (int i_2 = 4; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            var_15 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)-69)) ? (((((/* implicit */_Bool) 3083025953U)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_7 [i_2 - 1])))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((max((arr_5 [i_3 - 1] [i_3 - 1]), (arr_5 [i_3 - 1] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)67)) & (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_7 [i_2 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))))))))));
            var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-67)) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_13 [10U] [10U] |= ((((/* implicit */_Bool) 10U)) ? (((((/* implicit */_Bool) (unsigned short)45439)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [11ULL]))) : (arr_5 [i_2] [(unsigned short)18]))) : (arr_5 [i_2 - 4] [i_2 - 4]));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned long long int) arr_15 [i_2 - 1] [i_2 - 3])))));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_19 ^= ((/* implicit */long long int) (signed char)67);
                    var_20 &= (+(((long long int) arr_17 [i_4] [i_4] [i_5] [i_5])));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_21 *= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_4])) != (((/* implicit */int) ((unsigned short) arr_18 [i_2] [i_6] [i_2] [i_2])))));
                        var_22 += ((/* implicit */unsigned short) ((short) arr_14 [i_5] [i_2] [i_2]));
                    }
                }
                for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2 - 3] [i_8 + 2] [i_8 + 1]))) : (arr_12 [i_4] [i_5] [i_5])));
                    var_24 *= ((/* implicit */_Bool) (~(arr_18 [i_2] [i_5] [i_2] [i_2 - 2])));
                }
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((_Bool) (short)8974)))));
                    var_26 ^= arr_18 [i_2] [i_9] [4U] [i_9];
                }
                var_27 ^= ((/* implicit */signed char) ((int) arr_20 [i_2] [(unsigned short)18] [i_5] [i_2] [i_2 - 2]));
            }
            for (int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) (short)1215)))))));
                var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */long long int) 3504919515U)) : (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (arr_29 [4LL] [i_4] [i_2 - 3])))));
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_10])) ? (((((/* implicit */_Bool) 16045740688444988855ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) (signed char)-67)))))));
                var_31 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)69))));
            }
            var_32 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)4094))));
        }
        for (unsigned short i_11 = 2; i_11 < 16; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    {
                        var_33 = ((/* implicit */long long int) min((var_33), (((long long int) var_7))));
                        var_34 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) -5851757505989591810LL)) ? (1612740940070700644LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-62)))))), (((unsigned int) ((((/* implicit */int) arr_34 [i_12])) >> (((/* implicit */int) (unsigned char)26)))))));
                        var_35 &= ((unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_11]))))) != (min((((/* implicit */long long int) arr_36 [i_2] [12ULL] [8LL])), (arr_35 [i_2 - 1] [i_11] [i_11] [i_12])))));
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [5U] [i_11 + 2])) ? (min((((/* implicit */long long int) (signed char)-20)), (min((((/* implicit */long long int) arr_31 [i_11])), (arr_26 [i_11]))))) : ((~(max((2199022731264LL), (((/* implicit */long long int) (signed char)(-127 - 1))))))))))));
                        var_37 |= ((/* implicit */long long int) max((((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_13] [i_11 + 2]))) > (arr_38 [i_12] [i_11 - 2] [i_12] [i_11 - 2] [i_11 - 2] [i_12]))) ? (arr_9 [i_2] [i_11] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_11])))))));
                    }
                } 
            } 
            arr_40 [i_11 - 1] [i_11] [i_2 - 3] &= ((/* implicit */unsigned char) var_8);
            var_38 |= ((/* implicit */_Bool) arr_19 [i_2] [i_11]);
            var_39 += ((/* implicit */long long int) ((((arr_22 [(unsigned char)0] [i_11] [(unsigned char)0] [12LL] [(unsigned char)0] [i_11]) >> (((/* implicit */int) (signed char)20)))) << (((9354268014186344718ULL) - (9354268014186344686ULL)))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_14 = 1; i_14 < 17; i_14 += 4) 
        {
            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)65535)))))))));
            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) arr_14 [i_2] [i_14 + 1] [i_2]))));
        }
        /* LoopNest 3 */
        for (short i_15 = 1; i_15 < 15; i_15 += 1) 
        {
            for (int i_16 = 1; i_16 < 17; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_42 *= ((/* implicit */unsigned char) (~(arr_20 [i_2] [(unsigned short)12] [(signed char)10] [i_2] [i_2])));
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_2] [i_15 - 1] [i_16]))) != (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)55882)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))), (max((4811790043460027718LL), (((/* implicit */long long int) (signed char)-21)))))))))));
                        var_44 += ((/* implicit */unsigned long long int) ((((arr_37 [i_15 + 3] [(signed char)14] [i_15 + 3]) / (((/* implicit */long long int) arr_45 [i_2] [8ULL])))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_47 [i_2] [i_15] [2ULL] [i_17])) <= (0ULL)))))));
                    }
                } 
            } 
        } 
    }
}
