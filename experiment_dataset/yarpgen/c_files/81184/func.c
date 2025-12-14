/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81184
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
    var_14 &= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 3047160883U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28487))) : (1977422281086316675ULL))))))));
        arr_3 [i_0] = arr_2 [i_0];
    }
    for (long long int i_1 = 4; i_1 < 22; i_1 += 4) 
    {
        var_16 ^= ((/* implicit */short) (+(min((((/* implicit */long long int) (unsigned char)212)), (arr_4 [i_1])))));
        var_17 = ((/* implicit */short) ((18446744073709551589ULL) * (((/* implicit */unsigned long long int) -1880970482498474291LL))));
        var_18 |= ((/* implicit */int) (unsigned char)43);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)51841)) : (((/* implicit */int) arr_9 [i_1 + 2] [i_1])))))), (((((/* implicit */_Bool) (+(arr_4 [i_3])))) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) (+(arr_10 [i_1] [i_1] [i_1] [i_1]))))))));
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 1])), (102959349U)))), (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned short)5736))))) : (arr_4 [i_3])))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-121)), (arr_13 [i_1 - 1] [i_1 + 2] [i_1 + 2])))) ? (((((/* implicit */_Bool) arr_6 [i_1 - 4])) ? (arr_6 [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (arr_6 [i_1 + 3]) : (((/* implicit */unsigned int) arr_13 [i_1 + 1] [i_1 + 2] [(short)18]))))));
                arr_15 [i_2] = ((/* implicit */unsigned int) (unsigned short)59822);
                arr_16 [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [(signed char)1]))) - (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)5736))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_12 [i_1] [i_2] [i_4] [(unsigned short)21])) : (arr_4 [i_1])))))));
                arr_17 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-2)), (arr_12 [i_1] [i_1] [i_2] [i_4])))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 2] [(unsigned char)7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1])))))))) ? (((/* implicit */int) ((short) (unsigned short)20326))) : (((/* implicit */int) arr_14 [i_1] [i_2] [15ULL] [i_4]))));
            }
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)5736))) ? (((((/* implicit */_Bool) arr_18 [i_1])) ? (var_6) : (arr_5 [18ULL] [i_2]))) : (((/* implicit */unsigned long long int) ((int) (unsigned char)194)))))) ? (min((arr_13 [i_1] [i_1 - 1] [i_1 - 1]), (((/* implicit */int) arr_9 [i_1 - 3] [i_1 - 4])))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (-8684857))), (((/* implicit */int) arr_14 [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1 - 2]))))));
                arr_20 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) min((2563395967U), (((/* implicit */unsigned int) (unsigned short)36476))))))));
                arr_21 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)65500)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))) : ((~(arr_4 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (signed char i_7 = 3; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_5 [(short)2] [i_1 - 4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_6]))) : (max((((((/* implicit */_Bool) arr_26 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5713))) : (var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)80)), ((unsigned char)198)))))))))));
                            var_24 -= ((/* implicit */signed char) 591128208U);
                        }
                    } 
                } 
            }
            arr_29 [i_1 - 1] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_8)))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)87)), ((short)-2610)))), (0ULL)))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_2] [i_2] [i_1] [i_1] [(unsigned char)12]))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (arr_11 [i_1 + 3] [i_2])))))))) ? (min((591128199U), ((+(1731571329U))))) : (((/* implicit */unsigned int) -1522818999))));
            var_26 = ((/* implicit */unsigned short) max((var_26), (((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-18513))))) ? (((/* implicit */int) (signed char)0)) : ((+(((/* implicit */int) arr_7 [i_2])))))))));
        }
    }
}
