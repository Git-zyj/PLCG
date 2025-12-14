/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62620
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
    var_11 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)14287)), (((((1159271428097889910ULL) < (3240028396122241523ULL))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2))))))))))));
                    var_13 = ((/* implicit */unsigned int) (unsigned short)65321);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        arr_8 [i_0 + 1] [i_0] [i_2] [i_2] [i_3 + 2] [i_3] = ((/* implicit */unsigned long long int) max((((unsigned int) 766421884U)), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6256)) / (((/* implicit */int) (short)-20642)))))));
                        arr_9 [(signed char)8] [(signed char)8] [i_0] [(short)2] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (-466563576672572269LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (var_4))))))) & (((/* implicit */long long int) max((((/* implicit */int) var_2)), (min((92368937), (((/* implicit */int) (short)20641)))))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_12 [(short)8] [9U] [(short)8] [i_0] [i_4] [i_4] = (-(((((/* implicit */_Bool) arr_5 [i_0] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_15 [i_0 + 3] [i_1] [i_2] [i_4] [i_5] &= (-(((((((/* implicit */int) var_10)) + (2147483647))) >> (((-5178308132880646980LL) + (5178308132880647011LL))))));
                            var_14 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))));
                            var_15 = ((/* implicit */unsigned int) ((((3528545424U) <= (4294967295U))) ? (((/* implicit */unsigned long long int) (+(-92368937)))) : (140737488322560ULL)));
                            var_16 = (+(((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 2] [i_1] [i_4] [i_0] [(signed char)7] [i_1]))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) -1379876842))));
                            var_18 = ((/* implicit */unsigned short) var_1);
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) > (1835913001U)))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) >= (((/* implicit */int) (unsigned short)9858)))))));
                        }
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (3451516539362796343ULL) : (((((/* implicit */_Bool) (unsigned short)14552)) ? (14995227534346755276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            arr_21 [i_0] [i_1] [i_7 - 1] [i_7 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (1396687920U) : (537399367U)));
                        }
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50983)) + (((/* implicit */int) (_Bool)1))));
    var_21 ^= ((((/* implicit */_Bool) 261632LL)) ? (218219130U) : (((/* implicit */unsigned int) -361474903)));
}
