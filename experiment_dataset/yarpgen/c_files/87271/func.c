/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87271
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) (signed char)-79)) != (((/* implicit */int) arr_4 [i_0] [i_2] [i_1])))) && (((((/* implicit */int) var_7)) > (((/* implicit */int) var_2))))))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((((-912891889) + (2147483647))) >> (((((/* implicit */int) var_4)) - (53)))))) != (((-4010819206244719725LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))));
                    var_20 = ((/* implicit */signed char) (((((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) 912891896)) - (arr_3 [i_1])))))) + (((/* implicit */long long int) ((((((/* implicit */int) var_15)) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) + (((((/* implicit */int) var_12)) + (((/* implicit */int) var_4)))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (_Bool)0)))) && ((_Bool)1))))) != (1297537618U)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                arr_10 [i_3] [i_3] [i_3] = (i_3 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) arr_9 [i_3] [i_3])) | (((/* implicit */int) arr_1 [i_3])))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_2)))))))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)185)) && (((/* implicit */_Bool) (signed char)64))))) != (((arr_6 [i_3] [i_3]) >> (((/* implicit */int) (_Bool)1)))))))))) : (((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) arr_9 [i_3] [i_3])) | (((/* implicit */int) arr_1 [i_3])))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_2)))))))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)185)) && (((/* implicit */_Bool) (signed char)64))))) != (((((arr_6 [i_3] [i_3]) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))))));
                arr_11 [i_3] = ((/* implicit */unsigned char) ((((((2361297273U) >> (((((/* implicit */int) (signed char)57)) - (55))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3] [i_3] [i_3])) ^ (((/* implicit */int) arr_1 [i_4]))))))) << (((((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_4 [i_3] [i_4] [i_4])))) | (((((/* implicit */int) arr_2 [i_3])) ^ (((/* implicit */int) arr_4 [i_3] [i_3] [i_3])))))) + (88)))));
                arr_12 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_4))))) == (((/* implicit */int) ((((/* implicit */int) arr_2 [i_4])) == (((/* implicit */int) var_15)))))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_4]))))))) > (((2997429675U) % (4294967295U))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_22 |= ((/* implicit */signed char) ((((/* implicit */int) ((((var_6) + (((/* implicit */long long int) arr_6 [(signed char)4] [i_5])))) == (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_4)))))))) / (((/* implicit */int) ((((((/* implicit */_Bool) var_16)) || ((_Bool)1))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) - (((/* implicit */int) var_7))))))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_0 [i_5]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_5])) <= (((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (short)-32764))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-109)) & (arr_6 [(signed char)2] [i_5]))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    var_24 &= ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) arr_8 [i_5] [i_7]))))) / (((arr_0 [i_5]) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_8)) + (((/* implicit */int) var_4)))) != (((((/* implicit */int) var_18)) | (((/* implicit */int) (unsigned char)62))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_25 [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_7)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (4294967295U)))));
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [i_7] [i_6] [i_5]))) | (var_5))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) arr_2 [i_6]))))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */int) (short)-13995)) - (2091955644))) == (((((/* implicit */int) arr_13 [i_7])) - (((/* implicit */int) (signed char)-79)))))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)11350)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)30)) || (((/* implicit */_Bool) (signed char)91)))))));
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)32)) || (((/* implicit */_Bool) (signed char)-3))))) >= (((((/* implicit */int) arr_8 [i_9] [i_9])) * (((/* implicit */int) var_13))))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 10; i_10 += 3) 
                    {
                        arr_31 [i_5] [i_7] [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) arr_30 [i_5])) - (((/* implicit */int) arr_26 [i_5] [i_5] [i_7] [i_5])))) * (((/* implicit */int) ((((/* implicit */int) arr_9 [i_7] [i_10])) == (((/* implicit */int) (_Bool)1)))))));
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-31)) == (((/* implicit */int) (signed char)111))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5]))) < (var_16))))));
                        arr_33 [i_10] [i_7] [i_7] [i_5] |= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) / (var_3))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_5] [i_7])) != (((/* implicit */int) (unsigned char)255))))))));
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)231)) << (((((/* implicit */int) (signed char)60)) - (52))))) - (((/* implicit */int) ((((2627640465239011676LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))))) > (((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) % (((/* implicit */int) var_12))))))))));
    var_30 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)14838)))) || (((((/* implicit */int) (short)-20220)) != (((/* implicit */int) (signed char)-4))))))) != (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) && (((/* implicit */_Bool) (short)21967))))) | (((/* implicit */int) ((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) (unsigned char)42)))))))));
}
