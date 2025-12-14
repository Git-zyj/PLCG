/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86709
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_17 &= ((/* implicit */_Bool) (+(2965900615U)));
            arr_6 [13ULL] = ((/* implicit */_Bool) arr_2 [i_1]);
        }
        var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (var_14) : (((/* implicit */long long int) min((1132711442U), (((/* implicit */unsigned int) arr_4 [5])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_4))))))) : (3162255875U)));
    }
    for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_19 = ((((((/* implicit */_Bool) (short)24203)) && (((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [(signed char)12] [i_2])) : (((/* implicit */int) arr_10 [i_2 - 3]))))) ? (min((((/* implicit */long long int) var_4)), (arr_7 [i_3]))) : (((/* implicit */long long int) min((1132711449U), (((/* implicit */unsigned int) arr_9 [i_2 - 3] [i_2])))))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((arr_7 [i_2 - 2]), (((/* implicit */long long int) (-(1804989162))))))) == ((((-(2251799809490944ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (short)-4332)))))))));
            arr_12 [i_2] [(unsigned short)7] [i_3] = ((/* implicit */int) var_15);
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)4339))) & (3162255846U)))))) ? ((-(((/* implicit */int) max((((/* implicit */short) var_6)), (var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((var_2), (((/* implicit */long long int) 3162255859U)))), (arr_18 [i_2] [i_2] [i_2 - 3] [i_2 - 1] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_13 [i_2 - 2] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_13 [i_2 - 2] [i_2] [i_2 - 3])))) : (((((/* implicit */int) min(((short)-4332), (((/* implicit */short) arr_10 [i_5]))))) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)64)))))))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_23 = ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [15] [(signed char)21]))))), (((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 - 2])) ? (1603159048) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) (_Bool)1)) : (max((min((((/* implicit */int) arr_11 [(signed char)5] [(unsigned short)20])), (var_0))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5] [i_3])) || (((/* implicit */_Bool) arr_7 [i_2]))))))));
                            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_2 - 3] [i_2 + 1])) == (((/* implicit */int) arr_10 [i_2 - 3])))) ? (((/* implicit */int) (unsigned char)222)) : ((-(((/* implicit */int) arr_11 [17ULL] [17ULL]))))));
                        }
                    }
                } 
            } 
        }
        var_24 -= ((/* implicit */int) min((((arr_19 [(signed char)1] [i_2 + 1] [i_2] [i_2]) ^ (arr_19 [i_2] [i_2] [i_2 - 4] [i_2 - 1]))), (((arr_19 [i_2] [i_2] [i_2] [i_2 - 4]) ^ (arr_19 [(signed char)0] [i_2 + 1] [i_2 - 2] [i_2 - 2])))));
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)69))))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) min((var_8), (((/* implicit */short) var_6)))))))));
    var_26 &= (~(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_7)))))));
    var_27 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (short)-8196))))) ? (((/* implicit */int) (short)4332)) : (((/* implicit */int) (short)4311))))));
}
