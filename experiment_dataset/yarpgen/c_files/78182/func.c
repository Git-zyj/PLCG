/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78182
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_8)) & (((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_11);
        var_13 &= ((/* implicit */unsigned short) min(((-(373803677578927863ULL))), (((/* implicit */unsigned long long int) (unsigned char)71))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((int) max((arr_1 [i_0 + 4] [i_3 + 2]), (arr_1 [i_0 + 4] [i_3 + 2])))))));
                        arr_13 [i_0] [i_2] [i_0] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)89))))) != (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 + 1]) : (var_11)))));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_14 [(unsigned short)2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) > (arr_2 [i_4]))))) : (arr_2 [i_4])))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) / (4294967295U)))));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [(unsigned short)17] [(unsigned short)17])) + (((/* implicit */int) ((8U) == (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_4 [12ULL] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [(signed char)7])))))) == (max((((/* implicit */unsigned long long int) 485067328)), (9151326119008648117ULL))))))) & (((unsigned long long int) arr_15 [i_4]))));
    }
    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        var_18 = ((/* implicit */int) arr_0 [i_5] [14]);
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            arr_24 [i_5] [10ULL] [i_6] = ((/* implicit */signed char) arr_16 [7]);
            arr_25 [2ULL] = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */_Bool) arr_5 [i_5 - 2])) ? (((/* implicit */int) arr_6 [i_5] [i_6] [(_Bool)1] [i_6])) : (arr_7 [i_5]))), (((/* implicit */int) arr_20 [i_5])))));
            var_19 &= ((/* implicit */unsigned short) ((_Bool) arr_23 [i_5 - 1] [3U] [i_6]));
        }
    }
    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
    {
        arr_30 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */int) arr_28 [i_7])) > (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [i_7] [(_Bool)1]))));
        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_7 + 1] [i_7 - 1])), (arr_2 [i_7 + 1])))) ? (((arr_2 [i_7 - 1]) & (arr_2 [i_7 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0))))));
        var_21 = ((/* implicit */signed char) arr_9 [i_7 - 1] [i_7 + 1] [6U] [i_7 - 1]);
    }
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_2))));
}
