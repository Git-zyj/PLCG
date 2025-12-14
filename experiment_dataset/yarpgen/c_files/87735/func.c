/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87735
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
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((((/* implicit */int) arr_4 [i_0] [i_2 - 1])), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (+(var_6)));
                                var_18 = ((/* implicit */unsigned int) ((((arr_10 [i_0] [i_0] [i_0] [i_0 - 3] [i_0]) - (arr_10 [i_0 - 3] [(unsigned short)2] [i_0] [i_0 - 3] [i_0]))) + ((-(arr_10 [i_0] [i_0] [i_0] [i_0 + 2] [i_0])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_8 [(short)8] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 - 1])) ? (arr_8 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_0 - 2] [i_0] [i_0 + 2]) : (arr_8 [4LL] [i_0] [i_0] [i_0 + 1] [(short)2] [i_0 - 3]))))))));
                    arr_13 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 3] [i_1] [i_2 - 1] [i_0 + 1])) << (((((/* implicit */int) min((((/* implicit */short) arr_3 [i_2] [i_1] [i_0 - 3])), (var_7)))) - (19)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_2 - 1] [i_0])) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0] [i_1]) : (((/* implicit */int) var_13))))))) : (min((arr_8 [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 + 1]), (arr_8 [i_0] [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0 - 3]))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((-(((/* implicit */int) arr_0 [(short)0])))) * (((((/* implicit */int) arr_0 [6U])) % (((/* implicit */int) arr_0 [6U])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_12))))));
    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) arr_15 [i_5]);
        var_24 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_5 - 1])) << (((((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (((/* implicit */int) arr_14 [i_5 + 1])) : (((/* implicit */int) var_13)))) - (906)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 4) 
        {
            for (short i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 3; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        arr_24 [i_6] [(signed char)20] [i_7] [(short)17] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_17 [i_6] [16ULL] [i_6]), (((/* implicit */unsigned short) arr_20 [i_6] [i_7 - 1] [i_6])))))));
                        var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_20 [i_6] [i_5 + 2] [i_6])) ? (((arr_18 [i_5] [i_6 + 2] [i_7 + 3] [i_5]) >> (((var_11) - (3888770271U))))) : (((((/* implicit */_Bool) arr_17 [i_6] [i_7] [i_8])) ? (1451792183407746764ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_21 [i_8] [i_8] [i_8] [i_8]), (arr_21 [i_5] [(short)14] [i_5] [i_7])))) ? (((arr_21 [(unsigned short)8] [i_5 + 1] [i_7 - 2] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [19U] [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 1] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_22 [i_6] [i_7 + 2] [7LL] [12] [i_8 - 3] [i_6]), (var_7)))))));
                        var_26 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) arr_17 [i_6] [i_7 - 1] [(unsigned short)6]))));
                    }
                    for (unsigned short i_9 = 3; i_9 < 21; i_9 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_23 [i_9] [i_7 - 1] [i_6] [i_6] [13ULL] [i_5 - 1]), (arr_17 [i_6] [(signed char)21] [i_7 + 1])))) ? (arr_21 [i_5 - 1] [14LL] [i_7 + 3] [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16994951890301804865ULL)) || (((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6 + 2])))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_7)), (arr_14 [i_6])))), (arr_18 [i_5] [i_6 - 1] [i_7] [(signed char)1])))));
                        var_28 = ((/* implicit */short) arr_17 [i_6] [i_5 + 2] [i_9 - 1]);
                    }
                    arr_29 [(unsigned short)2] [i_6] = ((/* implicit */unsigned int) 5171879494709610991ULL);
                }
            } 
        } 
        var_29 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (short)-30371)) | (((/* implicit */int) arr_23 [i_5 + 2] [i_5] [(short)10] [i_5] [i_5 - 1] [i_5 + 2]))))) ? ((+(arr_21 [6ULL] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_5] [i_5] [0ULL]))))))))));
        arr_30 [i_5] = ((/* implicit */signed char) min(((~(((((/* implicit */int) var_10)) << (((var_5) - (9098981427033875085LL))))))), ((~(((/* implicit */int) arr_23 [i_5] [i_5] [0] [(signed char)18] [i_5] [(signed char)20]))))));
    }
    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((min((1451792183407746744ULL), (((/* implicit */unsigned long long int) ((1451792183407746768ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_12)) + (28859))))) | (((((/* implicit */int) var_1)) >> (((((/* implicit */int) (short)342)) - (342)))))))))))));
}
