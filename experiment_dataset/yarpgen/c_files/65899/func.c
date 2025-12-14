/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65899
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 -= ((/* implicit */long long int) var_14);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53651)) ? (((/* implicit */int) (signed char)-69)) : (-1))))));
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) var_15)) ^ (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) (_Bool)1))))))) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_9))));
                    var_23 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2491)))))));
                    var_24 = ((/* implicit */unsigned short) ((arr_8 [i_2 + 2] [i_3 - 1] [7]) ? (((((/* implicit */int) arr_8 [i_2 - 2] [i_3 + 1] [12])) | (((/* implicit */int) arr_8 [i_2 + 1] [i_3 - 1] [i_3])))) : (((/* implicit */int) ((4592222546068761360LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))))));
                    var_25 = (~(((((/* implicit */_Bool) min((arr_6 [i_1 + 1] [i_2 + 1] [(unsigned short)18]), (((/* implicit */unsigned char) (signed char)-64))))) ? (((/* implicit */int) var_3)) : (var_5))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -1619791543)) ? (((/* implicit */int) arr_13 [i_1] [i_2 + 2] [i_1 - 1] [(unsigned short)0])) : (((/* implicit */int) (unsigned short)63049))));
                            var_27 = ((((/* implicit */int) arr_7 [18LL] [4LL] [i_3])) < (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [(signed char)17])));
                        }
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_19 [i_1] [i_2 - 1] [i_3 + 1] [i_4] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_2 + 2] [i_2 - 1] [i_3 - 1] [i_3 - 1]))));
                            arr_20 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_1 - 1] [i_3 + 1] [i_2 + 2] [(signed char)0] [(short)17] [i_1] [i_6])) <= (((/* implicit */int) var_17))));
                        }
                        arr_21 [i_2] [i_3 + 1] [i_4] = ((/* implicit */short) ((unsigned long long int) arr_5 [i_2 + 2]));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) arr_12 [i_3 - 1] [i_3 - 1] [i_2] [(unsigned short)4] [i_3]);
                        arr_24 [i_1 - 1] [i_2 + 1] [i_7] [16ULL] [i_2] [i_7] &= ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)-69))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned int) ((signed char) (~(((/* implicit */int) (unsigned char)69)))))))));
                        arr_27 [(unsigned short)3] [i_2 + 2] [i_2 + 2] [i_2] = ((/* implicit */_Bool) min((((long long int) arr_10 [i_1])), (((arr_11 [i_1 - 1]) >> (((((/* implicit */int) (short)25228)) - (25207)))))));
                        var_30 &= (unsigned short)53651;
                        var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_12))));
                        var_33 = ((/* implicit */short) max((((/* implicit */unsigned char) ((_Bool) ((long long int) (unsigned short)2491)))), (arr_6 [i_2 + 1] [i_3 - 1] [1])));
                        arr_30 [i_2] [i_2 + 1] [i_3 - 1] [i_9] [i_1 + 1] [10LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_3 + 1])) ? (arr_18 [i_2 - 1] [i_3 - 1]) : (arr_18 [i_2 + 2] [i_3 + 1]))))));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [(short)13] [(signed char)19] [i_1] [7LL]))) > ((-(arr_18 [i_1 - 1] [i_1]))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_29 [i_1 + 1] [15ULL] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) (unsigned short)63035))))), (((long long int) var_3))))));
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_15 [i_10] [(short)5] [15] [15] [i_10] [i_1 - 1])), (arr_11 [i_1]))), (arr_32 [i_1 + 1] [i_1 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11885)) ? (((/* implicit */int) (unsigned short)2557)) : (1619791543)))) : (max((((/* implicit */unsigned int) (signed char)103)), (3732099020U)))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-1619791544)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)63035)))))) : (((/* implicit */int) (_Bool)1))));
        }
        var_37 = ((/* implicit */unsigned long long int) arr_29 [i_1 - 1] [(_Bool)1] [(unsigned short)16] [(_Bool)1]);
        var_38 = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_31 [i_1 - 1]))))));
    }
    for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 3) 
    {
        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((signed char) ((arr_9 [i_11 + 1]) || (((/* implicit */_Bool) arr_25 [i_11 - 1]))))))));
        var_40 = max((var_1), (((/* implicit */unsigned int) max((max((((/* implicit */int) arr_7 [i_11] [i_11] [i_11])), (-1619791527))), (((/* implicit */int) arr_26 [i_11 + 2] [i_11 - 2]))))));
    }
    var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)192)))));
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned int) (-(-1735384560)))), (var_9))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2491)) - (((/* implicit */int) var_12))))), (max((var_9), (((/* implicit */unsigned int) var_15))))))));
    var_43 = ((/* implicit */short) -7670575942230888514LL);
    var_44 = ((((((/* implicit */_Bool) (unsigned short)2491)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)2509)) ? (((/* implicit */int) (unsigned short)2501)) : (((/* implicit */int) (unsigned short)63044)))))) >> (((((/* implicit */int) (unsigned short)2491)) - (2470))));
}
