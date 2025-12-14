/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/972
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)63648)) & (((/* implicit */int) (unsigned short)44530)))))) ? (((((/* implicit */long long int) (~(var_1)))) ^ (-2035232584738398486LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned char)135))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17448133836486258902ULL)) ? (998610237223292712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))))))));
        var_19 = var_2;
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3145728U)), (8731119227855486950ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) : (3145726U))))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_5 [i_1] [i_1]))))) : (((arr_5 [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(signed char)9])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [(signed char)2])) && (((/* implicit */_Bool) 4291821569U)))))))) : ((~(arr_5 [i_1] [i_1]))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    arr_13 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)209))));
                    arr_14 [i_1] [7U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [(unsigned char)17])) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 1872446996)))), ((_Bool)1))))) : (var_1)));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_17 [i_4] [12ULL] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)4] [i_2])) ? (((((/* implicit */_Bool) (signed char)108)) ? (var_3) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))));
                        arr_18 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_11 [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4]))) : (7060407622959035823LL))) : (((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-7060407622959035822LL)))));
                        arr_19 [i_2] |= ((/* implicit */_Bool) -1910320028);
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        arr_24 [i_5] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_5] [i_5 - 1] [i_5 - 2])) ? (((((/* implicit */_Bool) 5098981356017764018LL)) ? (var_16) : (arr_11 [i_1] [i_2] [i_3] [i_5 - 1]))) : (((((/* implicit */_Bool) (signed char)-16)) ? (arr_15 [i_1] [i_1] [i_1]) : (arr_22 [i_1] [i_2] [i_3] [i_1])))))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_23 [i_1] [(signed char)6] [(_Bool)1] [(_Bool)1]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_6))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -786882941)) ? ((((_Bool)1) ? (33651210701017706LL) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) 2147483647))));
                            var_25 -= ((/* implicit */signed char) (((+(arr_9 [i_1] [i_5]))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_5] [i_3] [i_1]))))))));
                            arr_29 [(signed char)3] [i_5] [i_2] [i_2] [i_1] = (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)27255)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            arr_33 [i_7] [i_5] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) & (((((/* implicit */long long int) arr_22 [(unsigned short)7] [i_5 - 2] [i_5 - 2] [i_5])) / (((long long int) 2235997125U))))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(unsigned short)9] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (arr_5 [i_1] [17U])))) ? (((/* implicit */int) ((signed char) 13855783022859792224ULL))) : (((((/* implicit */int) arr_30 [i_3] [i_1] [i_1])) ^ (((/* implicit */int) var_14)))))))))));
                            var_27 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) 9223372036854775800LL)) ^ (17448133836486258902ULL))) <= (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_2)) : (17448133836486258902ULL)))) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_5 + 2] [i_5 + 2])) ? (2385800566U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(unsigned char)0] [i_3] [i_5]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(_Bool)1] [i_5 + 1] [i_3] [(_Bool)1] [i_2] [i_1]))) : (arr_11 [i_1] [i_1] [i_3] [i_5]))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) != (((/* implicit */int) (signed char)-65)))) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [i_1])), (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        }
                        var_28 *= ((/* implicit */_Bool) -1970382126016620090LL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_8 = 4; i_8 < 15; i_8 += 4) 
                        {
                            arr_37 [i_1] [i_2] [8] [i_1] [i_8] = ((/* implicit */signed char) arr_6 [i_8 + 3]);
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_34 [i_1] [i_8 - 4] [i_3] [(unsigned char)1] [i_8 - 4] [i_1] [i_5 + 2]))));
                            arr_38 [i_1] &= ((/* implicit */unsigned short) arr_34 [i_1] [i_2] [i_8 - 3] [i_3] [i_2] [i_5 + 2] [i_3]);
                            var_30 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_16 [i_3])))));
                        }
                    }
                }
            } 
        } 
    }
}
