/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8381
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
    var_11 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) - (arr_5 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((140737488355327LL), (((/* implicit */long long int) (_Bool)0))))) ? (((18446744073709551615ULL) >> (0ULL))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_8 [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_12 -= ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_4] [i_2] [i_3]))) == (((arr_2 [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))))))));
                            var_13 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (18446744073709551615ULL) : (18446744073709551611ULL)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_1] [i_4]))))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_3 - 1] [i_4] [i_4] [i_2])) | (((/* implicit */int) (unsigned short)256)))) >= (((/* implicit */int) arr_1 [i_1] [i_4]))))))));
                        }
                        arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)1] [i_0] [i_3 - 1] [i_3 - 1])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_3 - 1] [i_3 - 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3 - 1] [i_3 - 1]))) | (arr_12 [i_3] [i_3] [i_3 - 1] [i_0])))));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((min((((/* implicit */unsigned int) 125807485)), (3487569313U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3842678527U)) ? (((/* implicit */int) arr_11 [i_0] [i_3 - 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [(unsigned short)11] [i_3] [i_3 - 1]))))))))));
                        arr_15 [i_3] [i_3] [i_0] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_12 [i_0] [i_1] [i_2] [i_0])))) ? (((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_8 [i_0])))))))));
                    }
                    var_15 = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] [4]);
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned char)3] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1] [i_2])))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_2])) ? (arr_13 [i_0] [8ULL] [i_1] [i_1] [i_2] [i_2] [i_2]) : (arr_13 [i_2] [i_1] [i_2] [i_1] [i_1] [i_2] [i_0]))) : (min((18446744073709551615ULL), (1ULL))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */unsigned long long int) ((((unsigned int) var_10)) & (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 849423154318466886LL))))))))) != ((((~(arr_12 [(_Bool)1] [i_5] [i_5] [(_Bool)1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_5] [i_5])) : (((/* implicit */int) arr_11 [i_5] [i_5])))))))))));
        arr_18 [0ULL] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [4U] [(_Bool)1] [i_5] [4U])))))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5] [i_5] [i_5]))) == (arr_2 [i_5])))));
        arr_19 [i_5] = arr_12 [(_Bool)1] [i_5] [i_5] [2ULL];
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)16384))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) 0U))))) : ((+(((/* implicit */int) (unsigned char)246))))))) ? (((16502666952754711655ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((int) 18446744073709551615ULL)) | ((+(((/* implicit */int) (unsigned short)16406)))))))));
}
