/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8018
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
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) -45440023))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (signed char)-1)) : (-45440023)))) : ((+(var_11))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (666497050)))) && (((/* implicit */_Bool) ((int) arr_3 [(unsigned char)3])))))) & (min((arr_0 [i_2 + 2] [9U]), (arr_0 [i_2 - 2] [6ULL])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 6; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)254)) >= (((/* implicit */int) (unsigned short)26189))));
                                arr_15 [i_4] [6ULL] [(signed char)5] [8U] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (min((var_13), (var_13))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [(_Bool)1] [(_Bool)1] [(unsigned char)2]))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1ULL) / (((/* implicit */unsigned long long int) arr_9 [(short)0]))))) ? (((/* implicit */unsigned long long int) ((((arr_0 [i_0] [i_0]) ^ (((/* implicit */int) (signed char)-60)))) << (((((((/* implicit */_Bool) var_4)) ? (arr_10 [(_Bool)1] [(signed char)4] [(short)8] [(short)8] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56686))))) - (3514750566318524550LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) ^ (min((((/* implicit */unsigned long long int) var_6)), (arr_4 [(short)8] [9LL] [i_5])))))));
                        var_20 = ((/* implicit */_Bool) 3ULL);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [2] [9LL] [9LL] [(unsigned char)1])) ? (((/* implicit */unsigned long long int) (-((+(45440008)))))) : (arr_13 [(short)8] [(short)8] [(short)8] [6LL] [i_1] [2] [i_5])));
                    }
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_18 [(unsigned char)5] [7ULL] [(unsigned char)3] [(_Bool)1] [(unsigned short)7] [i_2 - 1])), (((((/* implicit */_Bool) var_0)) ? (arr_0 [(unsigned char)2] [(unsigned char)2]) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [9LL] [5LL] [i_2] [9LL]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -45440023)) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10794))) : (arr_10 [i_0] [0ULL] [i_2] [i_2] [i_2])))));
                }
            } 
        } 
    } 
}
