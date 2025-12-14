/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87727
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
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5)))))), (((unsigned long long int) var_9))));
    var_15 = ((/* implicit */unsigned char) (~(min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) min((2778688206U), (((/* implicit */unsigned int) arr_4 [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])) : (var_6)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_1 + 1] [i_2 + 1] [(_Bool)1] [i_2 - 1] = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) var_10)))));
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 1910751829)) * (min((((/* implicit */unsigned int) min((var_10), (((/* implicit */signed char) var_5))))), (arr_0 [i_2])))));
                        var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), ((unsigned short)1)))) ? (((((/* implicit */int) arr_5 [(unsigned short)9] [i_1] [i_2] [i_3 - 2])) - (((/* implicit */int) (signed char)84)))) : (((/* implicit */int) ((var_8) != (4294967274U))))))), (((arr_3 [i_2] [i_0]) % (arr_3 [i_3 - 1] [5])))));
                        var_18 = ((/* implicit */short) var_5);
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned short) arr_3 [i_0] [8LL]))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))) == (((/* implicit */int) ((_Bool) (unsigned char)171)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        var_20 += ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)7] [i_1 + 3] [(signed char)3] [i_1]))) - (arr_10 [i_2] [i_2]))));
                        arr_14 [i_4 + 1] [i_4] [i_4] [i_0] = ((/* implicit */short) arr_3 [0LL] [i_1]);
                        arr_15 [i_4] [i_1] [i_2 - 1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_1))));
                    }
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((arr_7 [i_0] [i_1] [i_2] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-5674))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [3]))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)49634)), (4294967274U))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217724ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-9223372036854775793LL)))) ? (((/* implicit */unsigned long long int) 22U)) : (var_3)));
                        var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_1 + 2] [i_2 + 1])))), (min((((/* implicit */unsigned long long int) ((signed char) arr_10 [i_1] [(unsigned char)5]))), ((-(var_3)))))));
                        var_24 ^= (+((((_Bool)1) ? ((~(972630923))) : ((-(((/* implicit */int) (signed char)-121)))))));
                        arr_18 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_17 [(signed char)6] [i_1 + 2] [i_2] [i_2] [i_2 - 2] [i_2 - 2]);
                    }
                }
                var_25 ^= ((signed char) (+(arr_6 [i_0] [i_0] [i_1 + 3] [i_1])));
                /* LoopSeq 1 */
                for (short i_6 = 2; i_6 < 9; i_6 += 3) 
                {
                    var_26 ^= ((/* implicit */unsigned char) ((min((6866038675045807882LL), (6866038675045807868LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                    var_27 += ((/* implicit */int) ((short) min((((((/* implicit */_Bool) arr_5 [i_6] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1 + 1] [i_1])) : (arr_16 [i_0] [i_1 - 1] [i_1 - 1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (3904471057234561858ULL))))));
                }
                var_28 = ((/* implicit */unsigned char) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32736))) * (var_3))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
}
