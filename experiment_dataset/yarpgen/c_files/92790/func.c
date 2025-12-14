/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92790
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
    var_18 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) (short)-24787))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (_Bool)1);
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((~(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_4 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_15)))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-15359))) < (min((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2])), (arr_8 [i_0] [i_2] [i_2]))))))));
                                arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                            }
                            for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (((arr_8 [i_2 + 1] [i_2 + 1] [i_3]) & (((/* implicit */long long int) var_3))))));
                                var_23 = ((/* implicit */unsigned short) max(((signed char)10), (max((arr_3 [i_2 - 1]), (arr_3 [i_2 - 1])))));
                                arr_15 [(short)4] [i_2] [i_2] [(short)4] = ((/* implicit */signed char) arr_8 [i_0] [i_2] [i_3]);
                            }
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_2 [i_6 + 2] [i_1]))));
                        /* LoopSeq 3 */
                        for (short i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            var_26 = var_3;
                            arr_24 [i_6] [(unsigned char)17] [i_1] [i_6] [(unsigned char)3] [i_8] = arr_10 [i_0] [i_1] [i_6] [i_7] [(short)13];
                        }
                        for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            arr_28 [i_0] [i_0] [(short)17] [i_6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-938633588)))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_6])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            arr_29 [i_6] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (15948217455584931879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0])))))));
                            arr_30 [i_0] [4U] [i_0] [i_9] &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_16 [i_7])))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_16 [i_6])))) : (arr_11 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [13U] [i_6 + 1] [(unsigned char)19])));
                            var_28 = ((/* implicit */unsigned char) (~(var_2)));
                        }
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_6])) % (((/* implicit */int) var_1))))) ? (arr_13 [i_6 + 1] [i_6] [i_10] [i_10]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) (signed char)87))))));
                            var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])))) ? (arr_32 [i_6] [i_6 + 1] [12] [i_6 + 1] [i_6]) : (((/* implicit */int) (unsigned char)249))));
                            var_31 = ((305301044300726259LL) >> ((((+(4155203934U))) - (4155203887U))));
                            arr_34 [i_0] [i_0] [i_0] [i_0] [14U] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_6])))))));
                            arr_35 [i_0] [i_1] [i_10] [i_7] [i_6] = ((/* implicit */signed char) (+(11123719016559142597ULL)));
                        }
                    }
                    for (short i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_11])) + (arr_8 [i_6 - 1] [i_6 - 1] [i_6]))))));
                        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 1]))));
                    }
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) arr_16 [i_1]))));
                }
                /* vectorizable */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_35 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0]))) == (arr_20 [i_0] [i_1] [i_12]))) ? (((((/* implicit */int) (signed char)-122)) | (arr_37 [i_0] [i_0]))) : (((/* implicit */int) (signed char)86))));
                    arr_40 [i_0] [i_1] [i_12] [i_12] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_0 [i_12 - 1])))) | (((/* implicit */int) arr_16 [i_1]))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_36 += ((/* implicit */unsigned char) ((((int) arr_16 [i_1])) | (((/* implicit */int) arr_16 [i_1]))));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_13])))))));
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) max((((arr_11 [i_0] [i_0] [16] [i_0] [i_1] [i_1] [i_13]) / (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [(_Bool)1]))), (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_13] [i_13]) / (arr_11 [i_0] [5LL] [i_0] [(unsigned char)15] [i_1] [i_1] [i_13]))))))));
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((((arr_14 [i_0] [i_1] [i_13]) | (((/* implicit */long long int) var_2)))) << (((((/* implicit */int) arr_25 [i_1] [i_13])) - (40239))))) >= (((/* implicit */long long int) (~(((/* implicit */int) (short)15359))))))))));
                }
            }
        } 
    } 
}
