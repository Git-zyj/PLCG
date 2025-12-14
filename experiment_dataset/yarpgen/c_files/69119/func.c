/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69119
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] [(unsigned char)8] [i_3] = ((/* implicit */unsigned char) ((min((479699990U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))) >> (((/* implicit */int) arr_2 [i_0 - 1]))));
                            arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] [i_1] |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (+((~(var_1)))));
    /* LoopSeq 3 */
    for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        var_15 = ((/* implicit */_Bool) 0ULL);
        /* LoopNest 3 */
        for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (signed char i_7 = 4; i_7 < 10; i_7 += 2) 
                {
                    {
                        arr_26 [i_6] [i_6] = (i_6 % 2 == 0) ? (((((/* implicit */_Bool) (((-(var_3))) >> (((((arr_8 [i_4] [i_5] [i_4] [(unsigned short)1] [i_4 + 1] [i_6]) ^ (480606065))) + (401958961)))))) ? (((((/* implicit */_Bool) var_11)) ? (max((var_8), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6 - 1] [i_5 - 2] [i_6 + 1]))))) : (((/* implicit */unsigned long long int) 139056882U)))) : (((((/* implicit */_Bool) (((-(var_3))) >> (((((((arr_8 [i_4] [i_5] [i_4] [(unsigned short)1] [i_4 + 1] [i_6]) ^ (480606065))) + (401958961))) + (349239678)))))) ? (((((/* implicit */_Bool) var_11)) ? (max((var_8), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6 - 1] [i_5 - 2] [i_6 + 1]))))) : (((/* implicit */unsigned long long int) 139056882U))));
                        arr_27 [i_4] [i_6] [i_6] [i_7] [i_7 - 4] = ((/* implicit */signed char) var_0);
                        arr_28 [i_4] [i_4] [i_6] [(signed char)9] [i_4] = ((/* implicit */short) min(((+(18446744073709551611ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_6 - 1] [13ULL])) ? (arr_4 [i_4] [i_4 + 2] [i_4 + 2]) : (((/* implicit */unsigned int) -1116722350)))))));
                    }
                } 
            } 
        } 
        arr_29 [i_4] |= ((/* implicit */signed char) arr_14 [i_4 + 2]);
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    {
                        arr_39 [i_4] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_8])))))));
                        arr_40 [i_4 + 1] [i_4 + 1] [8ULL] [i_10] = ((/* implicit */int) 479699987U);
                    }
                } 
            } 
            arr_41 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_20 [i_4 + 2] [i_8])), (3815267305U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) arr_25 [(unsigned char)1] [i_8] [i_4])) : (((long long int) (signed char)-4))));
        }
        for (unsigned int i_11 = 3; i_11 < 10; i_11 += 2) 
        {
            var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -15LL)) ? (2443730177180068082LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) max((var_2), (arr_0 [2]))))));
            arr_45 [i_4] [i_11] = ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)24)) : (-480606066)))))));
            /* LoopSeq 2 */
            for (signed char i_12 = 1; i_12 < 11; i_12 += 1) 
            {
                arr_50 [i_12] [i_12] [i_12 + 1] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-6104))))))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned long long int) arr_36 [i_12] [i_12 - 1] [i_12] [i_4 - 1] [i_4])), (arr_32 [i_4])))))));
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 11; i_13 += 3) 
            {
                arr_53 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) (short)-6118)) : (((/* implicit */int) var_9))));
                arr_54 [i_13] [i_11 - 2] [i_11 - 2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_4] [i_11 + 1] [i_11 + 1])) ? (arr_38 [i_4] [i_4] [i_13] [i_13] [i_4] [i_13 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
            }
            var_18 = ((/* implicit */signed char) var_10);
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_21 [i_4] [i_14] [i_4]))))) & (var_13))) : (((/* implicit */unsigned long long int) 4294967293U))));
            arr_57 [(signed char)11] = ((/* implicit */signed char) ((arr_9 [i_4] [i_4] [i_4] [i_4]) >> (((((/* implicit */int) (unsigned char)53)) & (((/* implicit */int) (unsigned char)254))))));
            var_20 = ((/* implicit */long long int) arr_49 [i_14] [i_14] [(signed char)4]);
        }
    }
    for (long long int i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_61 [i_15])), (max((arr_59 [i_15]), (max((arr_59 [i_15]), (((/* implicit */unsigned long long int) var_6))))))));
        arr_62 [i_15] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_61 [i_15])) ? (((/* implicit */long long int) var_3)) : (arr_61 [i_15])))));
        arr_63 [i_15] [i_15] = ((((/* implicit */_Bool) ((13ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_15])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [9ULL])) ? (((/* implicit */int) arr_58 [i_15])) : (((/* implicit */int) var_7))))) : (var_1));
        arr_64 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (3515666632U) : (1640590172U)))) & (((((/* implicit */_Bool) arr_59 [i_15])) ? (arr_61 [i_15]) : (arr_61 [i_15])))));
        arr_65 [i_15] = ((/* implicit */_Bool) max((2376213815406262991ULL), (((/* implicit */unsigned long long int) 480606060))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_69 [i_16] = ((/* implicit */unsigned long long int) (signed char)-74);
        arr_70 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_16])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_16]))) & ((-(var_8))))) : (((/* implicit */unsigned long long int) -480606066))));
        arr_71 [i_16] = ((/* implicit */int) var_11);
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_6), ((unsigned char)87))))) ^ ((-(8431384792410788594LL)))))) & (((((/* implicit */_Bool) ((long long int) 1492163732))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_13))) : ((~(var_1)))))));
}
