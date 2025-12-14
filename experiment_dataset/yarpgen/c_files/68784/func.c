/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68784
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 |= ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-45)), ((short)8188)))) ? (((((/* implicit */_Bool) max((arr_1 [i_1] [i_0]), (((/* implicit */signed char) arr_2 [i_0]))))) ? ((+(var_19))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_3 [(unsigned char)12] [i_0]))))))) : (((/* implicit */int) (unsigned char)238)));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_9 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)26366), (((/* implicit */unsigned short) (unsigned char)130))))) ? (((/* implicit */long long int) ((arr_5 [i_1] [3U] [(unsigned short)16]) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) max((((/* implicit */signed char) arr_2 [i_1])), (var_18))))))) : (281474976710652LL)));
                    var_21 -= (_Bool)1;
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19319)) ? (((/* implicit */int) (unsigned short)61367)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))), ((~(arr_0 [i_0 + 1] [i_3 + 2])))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) (_Bool)1))), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_12 [(short)5] [8] [i_2] [i_3]))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((((int) (unsigned char)112)), (((/* implicit */int) ((unsigned short) arr_1 [i_3 - 2] [i_3 - 2]))))))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) var_1);
                            var_25 = ((/* implicit */unsigned short) var_1);
                        }
                        arr_17 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_11 [i_1] [i_1] [0LL]);
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [5LL])) : (8384512)));
                        var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_17))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1])) | (((/* implicit */int) var_4))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        var_29 = (~(((/* implicit */int) (unsigned char)223)));
                        var_30 += ((/* implicit */unsigned char) arr_4 [(unsigned char)0] [i_2]);
                        var_31 ^= ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_1]);
                        var_32 *= ((/* implicit */unsigned short) (!((_Bool)1)));
                        var_33 |= ((/* implicit */_Bool) ((int) arr_1 [i_0 + 1] [i_0 + 1]));
                    }
                    arr_24 [i_0] [i_0 + 1] [i_1] [(short)15] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)245)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1839103084)) ? (((long long int) (unsigned short)46216)) : (((arr_27 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_8]) % (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_35 = ((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_7 - 2] [i_1]);
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_4))));
                    }
                    arr_30 [i_1] [i_0] [i_7] = ((/* implicit */unsigned short) (~(((max((2905167581447593724LL), (((/* implicit */long long int) var_9)))) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_7] [i_1] [i_1] [i_1])))))));
                }
            }
        } 
    } 
    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)15872)) >> (((((/* implicit */int) var_8)) - (155))))), (((/* implicit */int) ((signed char) (short)-8170)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)3917))))) : (var_17)));
}
