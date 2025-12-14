/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82788
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) var_4);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_9 [(unsigned char)0] [i_1] [i_2]) + (((/* implicit */unsigned int) var_2))))))) ? (max((((var_6) << (((-2377555229429365917LL) + (2377555229429365965LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_11 [i_0] [(signed char)5] [15] [(signed char)5]) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)31744)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_16 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1] [(short)10] [1] [i_0 - 1] [i_3] [i_1])) ? (((/* implicit */int) arr_13 [i_4] [i_1] [i_2] [i_3] [i_0 + 1] [i_4] [i_3])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_0 + 1] [i_1] [i_1]))));
                        arr_17 [i_3] [i_1] [i_2] = ((/* implicit */unsigned int) ((arr_3 [i_1] [i_1]) ? ((~(((/* implicit */int) (unsigned char)224)))) : (((/* implicit */int) arr_6 [i_2] [i_2]))));
                    }
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */short) (unsigned char)211);
                        var_19 = (((-(((/* implicit */int) (unsigned char)224)))) + (((/* implicit */int) max((((/* implicit */short) (unsigned char)7)), ((short)32640)))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 3) 
                    {
                        var_20 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [(_Bool)1] [5U] [i_1] [i_0 + 3])) ^ (((/* implicit */int) (short)-32641)))) | (((/* implicit */int) (unsigned char)224))))) ^ (((((/* implicit */_Bool) (unsigned char)216)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54)))))));
                        arr_22 [i_6 + 2] [i_3] [i_2] [(short)2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2] [i_1] [(_Bool)1])) && (((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2] [i_3] [i_3])))) ? (((((/* implicit */int) arr_8 [i_0] [i_0 - 3] [15ULL] [i_1])) + (((/* implicit */int) (short)32640)))) : (((/* implicit */int) ((var_3) != (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_2] [i_3])))))));
                        arr_23 [(signed char)14] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_8 [i_0] [(unsigned char)8] [i_0] [i_0]);
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_14 [i_0 + 3] [i_0 + 3] [i_0] [i_0]))));
                    arr_26 [i_0 + 4] [i_2] [(unsigned short)12] [i_0] &= ((/* implicit */unsigned int) arr_11 [i_0 - 2] [i_1] [i_2] [i_7]);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_0] [i_0 - 3] [i_0 - 3] [i_0 + 3] [i_0 + 2])) / (var_3)));
                    arr_27 [i_2] [i_7] [(short)12] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)32)))))));
                }
                arr_28 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0 - 3] [i_0 - 3] [i_2] [i_2]))))) & ((+((-(arr_1 [i_0])))))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 3; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) (unsigned short)6008);
                            arr_38 [i_9] = (~((+(((/* implicit */int) arr_36 [i_10] [i_9] [i_10 + 1] [i_10 + 2] [i_10 - 2] [i_9] [i_0 + 4])))));
                        }
                    } 
                } 
            } 
        }
        var_25 *= ((/* implicit */_Bool) arr_32 [i_0 - 1] [i_0] [i_0]);
    }
    for (short i_11 = 3; i_11 < 19; i_11 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(short)15] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (7338725666489142057ULL)))))), ((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)8)))))))));
        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_11 - 1] [i_11 - 1] [i_11 - 2])) & (((/* implicit */int) arr_30 [i_11] [i_11 + 1] [i_11 - 3]))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((/* implicit */int) arr_3 [i_11 + 2] [i_11 - 1]))))));
    }
    var_28 = ((/* implicit */short) (((-(((/* implicit */int) var_4)))) < (((((/* implicit */int) (short)12288)) << ((((~(var_2))) - (1082989415)))))));
}
