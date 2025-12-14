/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86466
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
    var_14 *= ((/* implicit */unsigned long long int) (+(var_11)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */short) min(((+((+(((/* implicit */int) arr_2 [(unsigned char)18])))))), ((~(((/* implicit */int) (unsigned char)142))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((max(((unsigned short)50758), (arr_1 [i_1] [i_1]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_1])))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 18446744073709551615ULL)))) - (var_11))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [0U] [0U] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 3] [(unsigned short)11]))) : (643183838U)))) ? (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0 + 3] [i_0 + 1])) != (((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_2 - 1])))))))) : (((/* implicit */int) arr_7 [i_1] [19U] [i_1] [i_0]))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 4] [i_0])) | (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_2] [i_1] [i_1] [i_0])), (arr_1 [i_2 + 3] [i_1])))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) arr_8 [i_0 - 2] [(short)1] [i_0 - 1] [i_2 + 1]))))));
                    var_19 = arr_5 [i_0] [i_0];
                    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 3]), (var_12)))) && (((/* implicit */_Bool) arr_5 [i_1] [i_0 + 3])))) ? (((/* implicit */int) ((unsigned char) arr_7 [i_0] [(unsigned char)6] [11U] [i_0]))) : (((/* implicit */int) min((arr_4 [i_0 - 3] [i_1] [i_2 + 3]), (arr_4 [i_0] [i_1] [i_0]))))));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    var_21 -= ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_3] [(unsigned char)4])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))), (0U)));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)9] [(unsigned short)9]))) % (var_0))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 4] [i_1] [(unsigned char)2])))))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)14788)), (((((/* implicit */_Bool) arr_9 [(short)18] [i_1] [4ULL] [(short)6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))))) ? ((~(((/* implicit */int) arr_7 [i_0 + 3] [i_0] [i_1] [i_3])))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0 + 4]))))));
                }
                for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [8U] [i_4 + 1] [i_4] [i_0 - 2]))));
                    var_25 = ((short) var_4);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_4 + 1] [i_0]))));
                        var_27 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_4 - 3]);
                        var_28 = ((unsigned long long int) arr_18 [i_0 - 2] [i_0]);
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0 - 3] [(unsigned char)16] [(unsigned char)16] [i_5]))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        var_30 = ((/* implicit */short) arr_19 [i_0 + 4] [i_6 + 2] [(unsigned char)14] [i_0 + 4] [(short)18] [i_4]);
                        var_31 = ((/* implicit */unsigned long long int) arr_11 [i_0 - 2] [(unsigned char)20] [i_4 + 1] [i_6]);
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_32 ^= ((/* implicit */short) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) min((arr_4 [3U] [(short)6] [i_7]), (arr_4 [i_0 + 2] [i_4 - 2] [(unsigned char)18]))))));
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [4U] [i_1] [i_4 + 1] [i_1]))));
                        var_34 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)0)))) & (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (unsigned char)23)))))));
                    }
                }
                arr_25 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 3] [i_1])) >> (((((/* implicit */int) min(((short)32767), (((/* implicit */short) arr_12 [(unsigned char)15]))))) - (80))))))));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (short)15863)) ? (3651783447U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
            }
        } 
    } 
}
