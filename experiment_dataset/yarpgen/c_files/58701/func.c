/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58701
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
    var_11 = (!(((/* implicit */_Bool) var_8)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_0])))) * (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19716))) : (var_10))))) & (((arr_2 [i_0] [i_0]) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((11640709223325925569ULL) >= (18446744073709551615ULL))))))));
    }
    for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        arr_8 [22U] [i_1] = ((((_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) ((unsigned char) arr_7 [0U] [i_1]))) : (((/* implicit */int) max((max((arr_6 [i_1 - 1]), ((unsigned char)255))), (((/* implicit */unsigned char) ((_Bool) arr_6 [i_1])))))));
        arr_9 [i_1] = ((/* implicit */long long int) ((2372598899697977839ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15564)))));
        arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-118)) && (((/* implicit */_Bool) var_1))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((arr_5 [i_1]), (arr_5 [i_1]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)3286))))))))));
        arr_12 [(unsigned char)22] [(unsigned char)22] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2372598899697977839ULL))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)230)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) : (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        arr_17 [i_2] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)11841)))) | (((((/* implicit */_Bool) -6082998843630374039LL)) ? (arr_14 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_1), (((/* implicit */short) arr_0 [i_2]))))) ^ (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
    }
    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        arr_22 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3150289492U)) | (10888461395269046550ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    arr_28 [3ULL] [i_4] [i_5] [3ULL] = ((/* implicit */long long int) (_Bool)0);
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_35 [i_3] [i_4] [i_3] [(unsigned char)21] [i_3 - 3] [i_3] [(unsigned char)21] = ((/* implicit */short) arr_25 [i_7] [i_5] [i_4]);
                                arr_36 [i_3] [i_4] [i_3] [i_6 - 1] [(_Bool)1] = ((/* implicit */signed char) arr_33 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1]);
                                arr_37 [(unsigned short)10] [i_4] [i_5] [i_6] [i_7] &= ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [i_3] = ((/* implicit */short) (unsigned char)255);
    }
    var_12 = ((/* implicit */unsigned char) ((unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))) : (7126850544501099163ULL))));
    /* LoopSeq 2 */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        arr_41 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32700)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
        arr_42 [6LL] [i_8] &= ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_30 [i_8]))), (arr_5 [i_8])));
        arr_43 [i_8] [i_8] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (min((-4050026944204783532LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_5))))))), (((/* implicit */long long int) var_9))));
        arr_44 [i_8] = ((/* implicit */short) arr_30 [i_8]);
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 11; i_11 += 1) 
            {
                {
                    arr_54 [i_9] [i_9] [i_9] [(unsigned char)2] = ((/* implicit */unsigned int) min((((/* implicit */int) ((max((var_0), (-9223372036854775796LL))) != (min((((/* implicit */long long int) (unsigned short)15681)), (6082998843630374038LL)))))), (min((((/* implicit */int) var_3)), (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_8)) - (8022)))))))));
                    arr_55 [i_9] [i_9] [i_11] [i_11] = min((((/* implicit */unsigned char) var_2)), (max((arr_48 [(_Bool)1] [i_10] [i_9]), (((/* implicit */unsigned char) (signed char)-126)))));
                    arr_56 [0LL] [i_10] [8] &= ((/* implicit */unsigned int) arr_29 [20U] [i_10] [i_10] [i_9] [i_10]);
                    arr_57 [i_9] [6LL] [i_11] &= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)7640))) + (((4063232U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (((4051188134U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                    arr_58 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_31 [i_9] [i_10] [i_9]) >> (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_18 [i_9])))))))) ? (max(((-(var_0))), (((/* implicit */long long int) ((signed char) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_9] [i_9] [i_9] [1U])))));
                }
            } 
        } 
        arr_59 [i_9] [i_9] = ((/* implicit */unsigned char) var_2);
    }
}
