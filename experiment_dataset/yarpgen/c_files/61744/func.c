/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61744
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) >> (((((((arr_1 [(_Bool)1]) + (arr_1 [i_0]))) - (arr_1 [i_0]))) + (3571580034863063749LL)))));
        var_12 = ((/* implicit */unsigned int) ((unsigned char) ((arr_1 [i_0]) / (arr_1 [i_0]))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_1] [i_3 - 1] = ((/* implicit */unsigned char) ((((((long long int) arr_11 [i_1] [(_Bool)1] [i_3] [(_Bool)1])) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [i_4]))))) ? (((/* implicit */int) min((arr_2 [i_3 - 1]), (((/* implicit */signed char) ((_Bool) arr_4 [i_1])))))) : (((/* implicit */int) arr_9 [i_1] [(unsigned short)1] [i_3]))));
                        var_13 &= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-28)) & (((/* implicit */int) (unsigned char)85))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_3] [i_2] [i_2] [i_2]) || (((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1])))))) : (min((((/* implicit */long long int) arr_9 [i_1] [17U] [i_4])), (6228800829206278720LL))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_1] [(signed char)10] [i_1] [i_4 + 3] [i_4 + 3] [i_5])))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_2] [14LL] [i_2] [i_1])) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)85))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_21 [i_1] = ((/* implicit */unsigned long long int) min((((_Bool) ((signed char) arr_13 [i_6] [i_1] [i_1] [1U]))), (((arr_3 [i_3 - 2] [i_3 - 2]) == (arr_3 [i_6] [i_3 - 2])))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((arr_16 [i_1] [i_2] [i_3] [i_1] [i_6]), (((/* implicit */unsigned int) arr_18 [18U] [i_4] [i_3] [i_3] [i_1 + 1] [i_1 + 1])))) % (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_16 [i_1] [i_2] [i_3 + 1] [i_4] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))))))) ? (((/* implicit */int) ((signed char) arr_2 [i_1]))) : (((/* implicit */int) min(((signed char)-94), (((/* implicit */signed char) arr_11 [i_1] [i_2] [0LL] [i_6])))))));
                            arr_22 [16LL] [16LL] [i_2] [16LL] [i_1] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_6]))) : (arr_13 [9] [i_1] [i_1] [i_1])))) ? ((((_Bool)1) ? (arr_15 [i_1] [i_2] [i_1] [i_1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65510))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) : (((long long int) arr_6 [i_1]))));
                            var_17 &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_3] [i_6])) ? (((/* implicit */int) arr_20 [i_3])) : (((/* implicit */int) arr_9 [13LL] [6ULL] [(signed char)4]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) / (1879048192U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1 + 1] [i_3]))))))));
                        }
                    }
                    for (signed char i_7 = 3; i_7 < 20; i_7 += 2) 
                    {
                        var_18 -= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */int) arr_20 [i_3])) & (((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) arr_20 [i_3])))));
                        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-95)) + (2147483647))) << (((2062577460U) - (2062577460U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_20 [i_2]), (arr_20 [i_2]))))) : (max((((arr_16 [i_3] [i_2] [i_2] [i_2] [0ULL]) / (arr_13 [(_Bool)1] [i_2] [i_2] [i_7]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_3] [i_2] [i_1])))))))));
                        arr_25 [i_1] = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (signed char)-99))))) && (((/* implicit */_Bool) ((unsigned int) arr_11 [i_1] [(short)6] [i_1] [i_1])))));
                    }
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_1] [(_Bool)1])) ? (min((((/* implicit */unsigned int) arr_19 [i_1] [(signed char)11] [(signed char)11] [i_1] [(unsigned char)10])), (arr_15 [i_1] [(unsigned short)4] [(unsigned char)3] [i_1] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_1] [i_1] [i_3 - 2])))))))) && (((/* implicit */_Bool) ((unsigned int) ((arr_6 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1])))))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) min((arr_17 [i_3] [i_3 - 2] [i_3] [i_2]), (arr_13 [i_1 + 1] [i_3 - 1] [i_2] [i_3])))) : (((arr_18 [(signed char)4] [(signed char)4] [(signed char)4] [i_3 + 1] [i_3 + 1] [i_3]) ? (((((/* implicit */long long int) 1658625810U)) + (arr_3 [i_2] [i_3 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_3] [i_3] [i_3] [i_3] [i_1]) <= (((/* implicit */int) arr_8 [(short)20] [i_2])))))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((66060288U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52573)))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)99))));
}
