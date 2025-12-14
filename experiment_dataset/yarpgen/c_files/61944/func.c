/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61944
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) var_0);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_10 [0U] [i_1] [(short)21] = ((/* implicit */signed char) ((_Bool) -1037840058949514044LL));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            arr_18 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)11] [i_0])) / (((/* implicit */int) arr_6 [(unsigned short)9] [(unsigned char)14] [i_1] [i_3]))));
                            var_11 = ((var_9) != (((/* implicit */long long int) ((/* implicit */int) ((short) 4294967295U)))));
                            var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [7LL] [i_1])) : (((/* implicit */int) arr_12 [(unsigned short)14] [(short)20]))));
                        }
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-98)) - (((/* implicit */int) ((unsigned short) var_8)))));
                    }
                    var_14 += ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) > (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_7 [i_2])))));
                    arr_19 [(unsigned char)5] [12U] [i_1] [(unsigned char)18] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? ((~(arr_14 [(signed char)15]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            arr_25 [(unsigned short)5] [i_1] [3LL] [(signed char)7] [(unsigned char)6] = var_7;
                            arr_26 [(unsigned char)20] [7U] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)123))))) || (((arr_3 [(signed char)1] [(signed char)6]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(short)16] [(unsigned char)21] [i_1] [(short)9] [(unsigned short)6]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_3)), (arr_12 [18] [(unsigned char)7])))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (var_3))))) : (arr_11 [(short)2] [(signed char)21] [(signed char)14] [(signed char)21] [i_6 - 1] [1ULL])))));
                        }
                        arr_27 [i_5] [2] [(short)24] [18] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1343754029U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-31329))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((1343754029U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) var_6)) ? (10857710659046865930ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9))))))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_11 [(signed char)11] [(unsigned char)9] [15ULL] [(signed char)11] [i_2] [15ULL])))) / ((-(arr_13 [8ULL] [6U] [i_5] [i_2] [i_5]))))))));
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_16 ^= min((((((/* implicit */long long int) var_5)) & (max((var_9), (((/* implicit */long long int) (signed char)116)))))), (((/* implicit */long long int) ((unsigned int) max((var_5), (((/* implicit */int) var_4)))))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [7] [(signed char)23]))) != (((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)6] [(short)4] [i_0] [(signed char)22]))) & (((662669213259899916LL) << (((/* implicit */int) var_2)))))))))));
                }
                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-48))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (((!(var_2))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (var_5) : (((/* implicit */int) var_4))))) : (var_0)));
    var_20 += ((/* implicit */int) var_6);
    var_21 -= (~(((((/* implicit */long long int) max((2951213267U), (((/* implicit */unsigned int) (signed char)-124))))) & (max((((/* implicit */long long int) var_3)), (var_9))))));
}
