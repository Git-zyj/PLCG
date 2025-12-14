/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56570
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
    var_16 ^= ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (~(18014397435740160ULL)));
        arr_3 [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [10ULL]);
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_6 [i_0] [i_0])) ^ (((/* implicit */int) max((arr_7 [i_1] [i_0]), (arr_7 [i_0] [6U])))))), (((/* implicit */int) var_7))));
            arr_8 [i_1] = ((/* implicit */unsigned short) (((+(((arr_2 [i_1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) - (max((((((/* implicit */int) var_13)) * (((/* implicit */int) var_12)))), (((/* implicit */int) ((arr_4 [i_0] [15ULL] [i_1]) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])))))))));
            arr_9 [i_1] = arr_4 [i_0] [i_0 + 2] [i_1];
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_14 [i_2] [(short)5] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1])) <= (((/* implicit */int) var_13))))) + (((/* implicit */int) var_2)))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0]))) ^ (((18014397435740160ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10086))))))) - (18014397435730053ULL)))));
            var_19 = ((/* implicit */signed char) arr_11 [i_2]);
            var_20 = ((/* implicit */signed char) max((arr_4 [i_0] [i_2] [i_0]), (arr_13 [i_0 - 2] [i_0 - 1] [i_0 + 3])));
            arr_15 [i_2] [(_Bool)1] = ((/* implicit */unsigned char) arr_11 [i_0]);
        }
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (unsigned int i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_21 [i_3] [i_4] [i_3] [i_0 + 3] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_20 [i_0 + 1] [i_4 - 1] [i_4 - 1])) | (arr_10 [i_0 + 1] [i_4 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_4 - 1])))))));
                    arr_22 [i_0 - 1] [i_3] [(short)11] = ((/* implicit */int) arr_16 [i_0] [i_3] [i_0]);
                    var_21 = ((/* implicit */_Bool) (short)4612);
                    arr_23 [0LL] [0LL] [0LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_6 [i_4 - 2] [i_0 - 3])) : (((/* implicit */int) arr_6 [i_4 - 2] [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_0 + 2] [i_0] [i_0 + 2]))) : (18014397435740151ULL)));
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_0] [i_0])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [(unsigned char)13])) : (((/* implicit */int) (short)-23609))))))) ? (((/* implicit */int) arr_19 [i_0])) : (((/* implicit */int) max((arr_17 [i_0 - 2] [i_0 - 1]), (arr_17 [i_0 + 3] [i_0]))))));
    }
    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        var_22 = ((/* implicit */long long int) var_2);
        var_23 = ((((/* implicit */_Bool) arr_25 [0U])) ? (1979553248U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
        var_24 *= ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)4600))) : (-2619621333487652635LL)));
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18014397435740160ULL)) ? (((/* implicit */unsigned int) arr_27 [i_6])) : (arr_28 [i_6])))) & (((18014397435740160ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6]))))))))));
        arr_31 [(unsigned short)14] [i_6] = ((/* implicit */unsigned long long int) (~(((arr_29 [i_6] [i_6]) - (arr_29 [i_6] [i_6])))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((arr_28 [i_6]) >> (((arr_28 [i_6]) - (629245905U))))))));
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-8)) + (((/* implicit */int) (_Bool)0))));
    var_28 = ((/* implicit */signed char) ((short) var_12));
}
