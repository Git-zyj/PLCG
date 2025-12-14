/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96527
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
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) min((var_3), (var_11))))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) - (9223372036854775807LL))))), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) - (var_10))) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)8))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [16U] = ((long long int) ((long long int) (unsigned char)254));
                    arr_9 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [9LL])), (max((3403880308U), (((/* implicit */unsigned int) var_3)))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_13 -= ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))), (var_8)));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [8U] [i_1 - 2])) * (((/* implicit */int) min((arr_4 [i_2 + 1] [i_2 + 2]), (var_11))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_12 [i_0] [i_0]))));
                        var_16 = ((/* implicit */long long int) ((569676191U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2748)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_15 [i_0] [(unsigned short)5] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) max((arr_13 [i_2] [i_2]), (((/* implicit */unsigned char) ((arr_14 [(unsigned char)21] [(unsigned char)4] [i_1] [i_2 + 2] [i_4]) <= (-4169350208467171130LL))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) % (-9180496455612530949LL))), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511))));
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6656212887615648054LL)) ? (var_6) : (arr_7 [i_0] [i_1])));
                        arr_17 [i_1] [i_2] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) max(((unsigned char)255), ((unsigned char)53)))), (2066731928U))) < (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) arr_6 [i_0] [i_2])), (arr_13 [(unsigned char)2] [i_2])))))));
                        arr_18 [i_0] [i_1] [i_2] [i_4] &= max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_4]))) >= (((long long int) 2147483647LL))))), ((unsigned short)34940));
                    }
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_21 [10U] [i_1] [(unsigned char)16] [i_0] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_2] [i_5])) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) : (161273214U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)235)))))))));
                        arr_22 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(unsigned char)13] [(unsigned char)13] [i_2 - 1] [i_5] [i_5])))))) == (max((max((-5909319153617696583LL), (((/* implicit */long long int) arr_13 [i_2] [i_2])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) <= (319022464U))))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [(unsigned char)14] [i_1 - 3]))))) ? (((long long int) -1163250124479166592LL)) : (((/* implicit */long long int) min((arr_7 [17U] [i_2]), (4294967295U))))))) ? (((/* implicit */int) max((arr_3 [i_1 + 1] [i_2 + 2]), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) ((unsigned char) (unsigned char)43)))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_5])) ? (-7974425790609800287LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5])))))))));
                    }
                    var_19 = ((/* implicit */unsigned short) arr_13 [i_1 - 2] [i_2]);
                }
            } 
        } 
    } 
    var_20 = var_6;
    var_21 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)53837)) : (((/* implicit */int) var_2))))));
}
