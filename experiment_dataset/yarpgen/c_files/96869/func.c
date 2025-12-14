/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96869
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
    var_15 = ((/* implicit */long long int) ((int) (short)(-32767 - 1)));
    var_16 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_9)) ? (var_4) : (7508087297792583659LL))))) & (((/* implicit */long long int) ((720798071U) - (((/* implicit */unsigned int) 0)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) 10);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (var_4) : (var_12)))) ? (6570383115248642787LL) : (((((/* implicit */_Bool) (short)22916)) ? (((/* implicit */long long int) var_10)) : (var_4)))));
                        var_18 = ((/* implicit */unsigned short) arr_2 [i_0] [i_2]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(arr_13 [i_1] [3LL] [i_1] [i_1 - 1])))) ^ (((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1])) ? (7508087297792583677LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1823)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned short)11283)), (var_12))), (var_8)))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (-7508087297792583660LL))) ? ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)120)) - (115))))) : ((+(((/* implicit */int) (unsigned short)7615)))))) : (((/* implicit */int) (unsigned short)15))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [(short)10] [i_4] [i_0] |= ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */long long int) min((0), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4]))))) : (((long long int) (_Bool)0)));
                            var_21 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (0) : (((/* implicit */int) ((889281615507785422LL) < (arr_15 [i_0] [i_0]))))))), ((+(355299543193205869ULL)))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((arr_20 [i_1 - 1] [i_1 - 1] [9LL] [i_1 + 3] [i_6] [i_6] [i_6]) + (9223372036854775807LL))) << ((((-(-4465524046258752246LL))) - (4465524046258752246LL)))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            arr_24 [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((long long int) (unsigned short)11283)));
            arr_25 [i_0] = ((/* implicit */short) 7987722693734015129LL);
        }
        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) arr_27 [i_0] [i_8])) & ((~(-7508087297792583680LL))))), (((/* implicit */long long int) ((4076549832U) ^ (3096762382U))))));
            arr_28 [i_8] = ((/* implicit */long long int) ((unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0] [(unsigned short)8] [i_0])))))));
            arr_29 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6883585403369959798LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43133))) : (15873201393601651234ULL)));
        }
    }
    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((long long int) var_14)) ^ (((/* implicit */long long int) ((67108864U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29))))))))) ? (var_4) : (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
}
