/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86006
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) arr_12 [10] [i_1] [10ULL] [(unsigned char)6] [i_4])));
                                var_20 = ((((/* implicit */int) (unsigned char)174)) & (((/* implicit */int) arr_0 [i_0])));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (unsigned char)82))));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)31921))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57344))) != (arr_10 [i_4] [i_4] [i_0] [12U] [i_4]))))));
                            }
                        } 
                    } 
                    var_23 += ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) arr_12 [i_2] [i_2] [i_1] [i_1] [i_0])));
                    arr_14 [(short)16] [i_0] = (~(((/* implicit */int) arr_9 [i_0])));
                    var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)166)));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) var_10);
    }
    var_26 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            {
                var_27 = ((/* implicit */unsigned char) ((unsigned short) arr_12 [i_5 - 3] [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 3]));
                /* LoopNest 3 */
                for (unsigned short i_7 = 4; i_7 < 16; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                arr_27 [i_9] [i_9] [i_9] [(unsigned char)5] [i_8] = ((/* implicit */int) max((arr_0 [i_8]), (max((arr_0 [i_8]), (arr_0 [i_8])))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (3297861715U))))));
                                var_29 = ((/* implicit */unsigned short) (((((+(arr_23 [(unsigned short)8] [i_6] [8ULL] [i_8]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_6]))))) ? (((unsigned int) (unsigned char)255)) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_15 [i_9] [i_6]), (arr_5 [12U] [(signed char)8] [(unsigned short)0] [i_9])))))));
                            }
                        } 
                    } 
                } 
                var_30 = ((/* implicit */unsigned short) ((unsigned char) var_7));
                /* LoopSeq 2 */
                for (unsigned short i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    var_31 = ((/* implicit */signed char) arr_25 [(unsigned short)11] [i_5 + 1]);
                    var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5 - 3])) ? ((+((~(var_3))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_13)))))) ? (((/* implicit */int) arr_21 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_5] [i_6] [i_10 + 2] [i_5 - 3]))));
                    var_34 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_18 [i_5 + 1] [i_5 - 3])), (((((/* implicit */_Bool) arr_25 [(signed char)7] [i_5 - 1])) ? (((/* implicit */int) arr_0 [i_10])) : (((/* implicit */int) var_4))))))), (((unsigned long long int) arr_22 [i_5 + 1] [i_10 - 1] [i_5 - 1] [i_10 - 1] [i_10]))));
                }
                for (unsigned int i_11 = 3; i_11 < 16; i_11 += 3) 
                {
                    var_35 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5] [i_5] [i_5 + 1]))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [i_11 + 2] [i_11])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [(unsigned short)3] [i_6] [i_11] [i_6])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 1]))))) : (arr_23 [i_6] [i_11] [i_11 + 1] [i_11])))));
                    arr_36 [(unsigned short)12] [(short)16] [i_5 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (arr_10 [i_5] [(short)14] [i_6] [i_5] [(unsigned short)2]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_5 - 2] [i_6] [i_6] [i_11])) : (((/* implicit */int) var_12))))) : (((unsigned int) arr_4 [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (((unsigned long long int) var_0))));
                    arr_37 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_6] [(signed char)3])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_5])) || (((/* implicit */_Bool) (unsigned char)82))))) : (((/* implicit */int) arr_32 [i_5] [(signed char)13] [i_11 + 2] [i_11 - 2]))))));
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(633566627U)))) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (signed char)63))));
                    arr_38 [i_5] [i_5] [i_6] [i_11 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max(((-(var_14))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_32 [(unsigned char)13] [i_11] [i_6] [i_5 - 3])), (var_6))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6] [i_5 - 2] [i_5] [i_6]))) + (arr_17 [i_5])))));
                }
                arr_39 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_6] [(unsigned char)5] [(short)16] [17U])) - (((/* implicit */int) ((short) ((((/* implicit */_Bool) 3661400640U)) || (((/* implicit */_Bool) (unsigned short)65535))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            for (unsigned char i_14 = 3; i_14 < 14; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 2; i_15 < 15; i_15 += 3) 
                    {
                        for (int i_16 = 1; i_16 < 13; i_16 += 4) 
                        {
                            {
                                var_37 = ((((/* implicit */int) (unsigned short)1042)) & (((/* implicit */int) ((arr_23 [i_16 + 3] [i_16 + 2] [i_15 + 1] [i_14 - 3]) <= (arr_23 [i_16 + 1] [i_16 + 3] [i_15 + 1] [i_14 - 3])))));
                                var_38 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_14] [(unsigned short)2] [(unsigned short)12] [i_14 + 2])) | (((/* implicit */int) arr_35 [i_16] [i_15 - 1] [i_13] [(unsigned short)6]))))) ? (((((/* implicit */_Bool) arr_6 [i_12] [i_12] [(unsigned short)1] [(unsigned short)1])) ? (((/* implicit */int) arr_25 [(unsigned char)3] [(unsigned char)3])) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_5 [i_15 + 1] [i_14] [i_13] [i_12])) : (((/* implicit */int) arr_49 [i_12] [i_13] [(unsigned char)14] [i_15] [i_16 + 1])))))));
                                var_39 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-62)), (max((max((((/* implicit */unsigned int) arr_5 [i_12] [i_12] [i_12] [i_12])), (var_17))), (((/* implicit */unsigned int) ((signed char) (unsigned char)82)))))));
                            }
                        } 
                    } 
                    var_40 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [11U] [11U] [i_14])) << (((arr_8 [i_12] [i_13] [(signed char)1] [17U] [i_13] [i_12]) - (3791374864U)))));
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)82))))) & (var_13))))));
}
