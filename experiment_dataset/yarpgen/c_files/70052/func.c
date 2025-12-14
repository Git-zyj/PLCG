/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70052
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
    var_20 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 281474976709632LL)) ? (var_17) : (((/* implicit */int) arr_1 [i_0]))))), (((unsigned int) arr_1 [i_0])))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (281474976709632LL)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((short) 5811868146640442324ULL)))))) ? ((-((~(((/* implicit */int) arr_0 [i_1] [i_1])))))) : (((/* implicit */int) ((unsigned char) var_18)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) > (((((/* implicit */_Bool) 5811868146640442324ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_1 [i_5])))) >> (((arr_14 [i_5 + 2] [i_5] [i_5] [i_5 - 2]) + (5188886638793129607LL))))))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_5 + 3] [i_5 + 3] [i_5 - 2])) ? (((arr_14 [i_5] [i_4] [i_2] [i_2]) | (arr_14 [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_2] [i_3] [i_5])) : (((/* implicit */int) (short)7600))))))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [(signed char)11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (7808814047934580161ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_11 [i_3] [i_3] [i_5 + 1]))))))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_26 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_2] [i_2] [i_6] [i_2] [i_2] [i_2]))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (short)7600)) ? (((int) -281474976709631LL)) : (((/* implicit */int) (unsigned char)148)))))));
                        var_28 = ((/* implicit */signed char) (_Bool)1);
                        arr_18 [i_2] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_9 [i_2])) != (18446744073709551609ULL)));
                        var_29 = ((/* implicit */unsigned char) arr_5 [i_4]);
                    }
                    arr_19 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_3])) >= (((/* implicit */int) (signed char)48)))))) > ((~(5598940577764804397ULL)))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_24 [i_3] [i_4] [i_3] [i_3] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_4] [i_4] [i_7] [i_7])) && (((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4] [i_4] [i_2] [i_7]))))), (min((var_8), (((/* implicit */unsigned short) arr_8 [i_2] [i_2]))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_21 [i_4] [i_4])))))))))));
                        var_30 = ((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)32256)))) == (((/* implicit */int) (short)32256)));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-49)) && (((/* implicit */_Bool) (unsigned char)221))))) & (((/* implicit */int) var_9)))));
}
