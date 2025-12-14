/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85359
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39128)) * (((/* implicit */int) (_Bool)1))))), (max((var_3), (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)26408)) || (((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] [(signed char)4] = ((max((var_4), (((/* implicit */long long int) arr_0 [i_0 - 1])))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) ^ (((/* implicit */int) arr_0 [i_0 + 3]))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26407)) ? (((/* implicit */int) arr_0 [i_0])) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26407))) : (min((arr_1 [2U]), (((/* implicit */long long int) arr_0 [i_0])))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_4)), (max((arr_13 [i_0 - 1] [i_0 - 2] [i_2] [(unsigned short)6] [(signed char)6]), (((/* implicit */unsigned long long int) var_4))))));
                                var_18 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) min(((~(((/* implicit */int) arr_8 [8] [(short)0])))), (((/* implicit */int) min((arr_7 [i_3] [(unsigned short)2] [(unsigned short)4]), (arr_7 [(signed char)7] [i_4] [i_2]))))))), ((~(((((/* implicit */_Bool) 1455023927)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) : (arr_4 [i_0] [1ULL] [i_4])))))));
                                var_19 = ((/* implicit */unsigned int) ((max((arr_10 [(signed char)9] [i_1] [i_2] [i_3]), (((/* implicit */int) ((signed char) arr_7 [i_0 + 2] [i_2] [i_4]))))) >> (((max((((/* implicit */int) (unsigned short)25)), (((((/* implicit */_Bool) 1455023927)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)7168)))))) - (113)))));
                            }
                        } 
                    } 
                    arr_14 [i_0 + 1] [(unsigned char)4] [i_2] [8LL] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(signed char)3])) ? (((/* implicit */int) arr_5 [i_0] [(short)2])) : (((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_2]))))) > (arr_13 [i_0 - 4] [i_0] [(_Bool)1] [i_0 - 1] [i_0]))) ? (((/* implicit */int) (unsigned short)39122)) : (((/* implicit */int) arr_0 [i_0])));
                    arr_15 [(short)9] = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_1] [(short)4] [i_0 - 1]))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [(signed char)3] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_0 - 3] [i_0 + 3]), ((unsigned short)9792))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_0 + 1]))) - (arr_4 [i_0 + 2] [i_0 - 2] [i_0 - 3])))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (unsigned int i_6 = 1; i_6 < 7; i_6 += 1) 
        {
            {
                var_21 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_5] [i_6 + 3]))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)26407), (arr_12 [i_5] [i_6 + 3]))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2909028375778822472ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39553)))))))) ? ((~(((/* implicit */int) min((var_12), (var_12)))))) : (((((/* implicit */_Bool) arr_21 [i_6 + 3])) ? (((/* implicit */int) arr_21 [i_6 + 1])) : (((/* implicit */int) arr_21 [i_6 - 1]))))));
                    var_23 += ((/* implicit */unsigned char) ((arr_16 [3]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((arr_12 [i_5] [(signed char)9]), (((/* implicit */unsigned short) arr_18 [i_5] [i_6]))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10231)) >> (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_3 [i_7])) ? (arr_19 [i_7] [i_6 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39128)))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_14);
}
