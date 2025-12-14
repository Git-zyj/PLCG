/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62049
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        arr_12 [(unsigned char)3] [i_2] [(unsigned char)1] [i_0] = ((/* implicit */short) ((unsigned char) min((arr_1 [i_3 + 1] [i_3 + 1]), (arr_1 [i_3 - 1] [i_3 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)87)) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18107))) * (2611057432097175800ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19)))));
                            var_11 = ((/* implicit */signed char) min((max((17483485556035742888ULL), (((/* implicit */unsigned long long int) (signed char)-13)))), (((/* implicit */unsigned long long int) arr_3 [i_0] [0ULL]))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 3) 
                        {
                            arr_19 [i_5] [i_1] [(short)12] [i_3] [(short)12] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_17 [i_2] [i_1] [i_2] [i_3 + 1] [i_5 - 2]))) && (((/* implicit */_Bool) max((arr_5 [i_5] [(unsigned char)5] [(unsigned char)5]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [(signed char)1] [(short)9])))))))) >> (((((((/* implicit */int) (short)-11280)) % (((/* implicit */int) (unsigned char)197)))) + (63)))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((10441699097404339097ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ^ (((/* implicit */int) (short)25935))));
                            arr_20 [i_0] [i_1] [i_2] [i_0] [i_5] = ((min((min((var_0), (((/* implicit */unsigned long long int) (signed char)126)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_5])) || (((/* implicit */_Bool) var_6))))))) << (((((/* implicit */int) ((short) (short)28836))) - (28789))));
                            var_13 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */short) ((arr_17 [i_0] [i_0] [i_2] [3ULL] [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18101)))))), (arr_0 [i_3]))));
                        }
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)11206)) & (((/* implicit */int) (signed char)-51))))) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((12512130959008565921ULL) >> (((((/* implicit */int) (signed char)-87)) + (128))))))));
                    }
                    arr_23 [(short)6] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (signed char)-13)), (15230021601455779668ULL))), (max((((/* implicit */unsigned long long int) (unsigned char)213)), (arr_14 [i_0] [10ULL] [i_2] [i_1])))))) ? (((/* implicit */int) max(((short)18106), ((short)6823)))) : (((((/* implicit */int) (short)-6374)) + (((/* implicit */int) var_6))))));
                    arr_24 [(short)1] [(signed char)5] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16682623795862513420ULL)) ? (((/* implicit */int) (short)-24581)) : (((/* implicit */int) (short)-24581))));
                    arr_25 [i_0] [(signed char)5] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((arr_14 [i_0] [i_1] [1ULL] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11206))))) * (max((((/* implicit */unsigned long long int) arr_4 [i_0] [8ULL] [i_0])), (8005044976305212519ULL))))));
                }
            } 
        } 
    } 
    var_16 = var_8;
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(((max((var_0), (((/* implicit */unsigned long long int) (signed char)-16)))) << (((min((var_1), (((/* implicit */unsigned long long int) (unsigned char)197)))) - (181ULL))))))))));
    var_18 -= ((/* implicit */unsigned char) var_9);
}
