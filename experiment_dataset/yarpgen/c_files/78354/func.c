/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78354
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
    var_10 = ((/* implicit */unsigned long long int) ((short) var_7));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)85)))) ^ (((((/* implicit */_Bool) min((2005462360), (((/* implicit */int) (signed char)120))))) ? (((int) (unsigned char)248)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (short)-13162))));
                            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-3))));
                        }
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_14 = ((18446744073709551596ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0 + 1]))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [(short)14])))))));
                            arr_14 [i_2] [i_1] [11ULL] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_5] [i_1] [i_2] [i_1] [5ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2110939827)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1] [(signed char)1] [i_3] [i_5]))) : (2147483648U)))) : (var_2)));
                        }
                        for (unsigned char i_6 = 4; i_6 < 13; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) ((signed char) var_2))) > ((-(((/* implicit */int) (unsigned short)224)))))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_6 - 1]))) < (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41002))) & (66846720LL)))));
                            arr_19 [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -609995794))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_6 - 3] [i_3] [5LL] [i_3] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [2LL] [i_3] [i_6 - 3] [i_3]))) : (5718218781922846995ULL)))));
                            arr_20 [(signed char)3] [i_1] [i_2] [i_2] [i_6 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_2 [i_6 - 4] [i_3] [i_2]));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(var_2))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2]))));
                            var_21 = ((/* implicit */int) max((var_21), (1421806840)));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)81))) / (671145746967711197LL))))));
                        }
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (((+(arr_6 [(signed char)5] [i_0] [i_0]))) > (((/* implicit */int) ((unsigned short) var_4))))))));
                        arr_23 [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (arr_4 [i_0] [i_1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        for (int i_9 = 1; i_9 < 15; i_9 += 4) 
                        {
                            {
                                arr_29 [i_9] [(signed char)5] [i_9] [(signed char)5] [i_2] = ((/* implicit */long long int) ((min((max((var_8), (((/* implicit */unsigned int) (unsigned char)8)))), (((/* implicit */unsigned int) max((arr_7 [i_0] [i_0] [i_2] [i_8]), (((/* implicit */unsigned short) (signed char)110))))))) - (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_2])))))));
                                var_24 = ((/* implicit */signed char) max((max(((~(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)155)) | (((/* implicit */int) arr_21 [i_9] [i_8 + 1] [i_1] [i_2] [i_1] [i_0 - 2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 5187916029993168164LL)) ? (((/* implicit */int) (unsigned short)45627)) : (((/* implicit */int) (unsigned char)66))))) ^ (-6475552939344718775LL))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_7))));
}
