/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62497
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((4245534058U), (3981043138U)))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9716)) ? (4804647490776533793ULL) : (13642096582933017822ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    var_13 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) 13642096582933017845ULL)) ? (13642096582933017822ULL) : (4804647490776533793ULL)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_14 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [6] [i_3] [i_1 - 1] [i_1 - 1] [6])) > (((/* implicit */int) arr_12 [(unsigned char)6] [i_1 + 2] [i_1] [i_1 - 1] [4]))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((arr_7 [i_1] [i_1] [(signed char)0]) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [(unsigned char)6])) : (((/* implicit */int) arr_12 [8U] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1])))))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2047ULL)) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-119)))) : (((/* implicit */int) (signed char)-104))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2] [i_1 - 1] [(short)0])) ? (((/* implicit */int) arr_0 [i_3 - 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_3 - 1] [i_0] [i_3 + 1]))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 - 1] [i_1 + 1] [i_1] [i_1 + 2])) ? (arr_10 [i_3 - 1] [i_3 + 2] [i_1 + 2] [i_0] [i_0]) : (arr_10 [i_3 - 1] [i_3 - 1] [i_1 - 1] [4U] [4U])));
                        }
                        var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)114)), (512173887U)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            for (unsigned int i_6 = 4; i_6 < 11; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_0 [(_Bool)1] [i_0])), (arr_8 [i_0]))), ((+(((/* implicit */int) (signed char)-104))))));
                    var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_16 [i_5]), (arr_16 [i_5])))) ? (min((2147483647U), (((/* implicit */unsigned int) (short)22429)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122)))));
                    arr_19 [i_0] [11ULL] [i_5] [i_0] = ((/* implicit */unsigned char) ((18446744073709549580ULL) >> (((((/* implicit */int) (signed char)-114)) + (131)))));
                    arr_20 [i_0] = ((((/* implicit */_Bool) arr_18 [i_0])) || (arr_0 [i_0] [i_6 + 2]));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_8 [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [(short)6])))));
    }
    var_22 = ((/* implicit */unsigned int) var_4);
    var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (var_11)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))))) : ((+(((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
}
