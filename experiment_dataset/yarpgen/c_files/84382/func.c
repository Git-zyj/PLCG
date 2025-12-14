/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84382
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = (unsigned short)65513;
                var_11 = ((/* implicit */unsigned char) (((+(max((1022079355U), (((/* implicit */unsigned int) (_Bool)1)))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned char) ((((unsigned long long int) (_Bool)1)) / (((/* implicit */unsigned long long int) max(((-(arr_7 [i_4] [i_3] [i_1] [i_4]))), (((/* implicit */int) (_Bool)1)))))));
                                var_13 *= ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_12 [i_1] [i_1] [8] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)144));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        for (long long int i_7 = 3; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_14 = (signed char)-71;
                                var_15 = (+(((/* implicit */int) (short)32767)));
                            }
                        } 
                    } 
                    var_16 *= arr_8 [i_0] [i_0] [i_1] [i_5];
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_9 = 2; i_9 < 18; i_9 += 2) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)21027)) ? (((/* implicit */int) (unsigned short)44092)) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_0] [(signed char)12]))))));
                        arr_26 [i_9 - 1] [i_8] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) 3272887951U);
                        var_18 += ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)46713)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(unsigned char)1] [13LL] [i_8 - 1] [i_9]))) : (0ULL))));
                        var_19 = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-100))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        var_20 |= ((((((/* implicit */int) (unsigned char)201)) == (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) (short)29732)));
                        arr_31 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_0] [i_1]))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12757)) ? ((((+(((/* implicit */int) arr_23 [i_0] [i_1])))) % (((/* implicit */int) arr_6 [i_0] [i_1])))) : (((/* implicit */int) (unsigned short)56434))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned short)6449))));
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_8])) ? (2383955494U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_8] [3U] [i_8] [i_1])))))) ? (3764274055656657904LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1 + 1]))))) != (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [(_Bool)1] [(unsigned short)8] [i_11])))));
                    }
                    var_24 *= ((/* implicit */signed char) (((_Bool)1) ? ((-(((/* implicit */int) (unsigned short)56434)))) : (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3893078736517243195ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)8876)) : (((/* implicit */int) (unsigned char)216))))) ? ((+(((/* implicit */int) (unsigned char)43)))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */int) min(((unsigned short)60877), (((/* implicit */unsigned short) (_Bool)1)))))));
}
