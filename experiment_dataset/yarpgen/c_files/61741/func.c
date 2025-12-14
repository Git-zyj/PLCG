/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61741
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
    var_15 = ((/* implicit */signed char) var_5);
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) * (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_8)))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) >= (70231305224192ULL)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967279U)))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((arr_8 [i_0] [i_1] [12U] [i_2] [i_2] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_2 [i_0]))) & (((/* implicit */int) arr_0 [10ULL] [i_1]))))) : (((((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (var_11))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) (_Bool)1)))))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 2; i_4 < 13; i_4 += 1) 
                            {
                                var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)22), ((unsigned short)22)))) ? (min((arr_3 [i_0 - 1]), (((/* implicit */long long int) arr_4 [i_4 + 1] [i_2] [(_Bool)1])))) : (((/* implicit */long long int) (~(arr_10 [4] [0LL] [4] [i_3 + 1] [i_4 + 1])))))))));
                                var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)65513))))) < (((4294967272U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22)))))))), (max((((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0]))), (var_13)))));
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                            {
                                arr_15 [i_0] [i_1 - 2] [(short)13] [(unsigned char)13] [i_0 - 1] [i_1 - 2] = ((/* implicit */signed char) var_1);
                                arr_16 [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (short)32767))))))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */long long int) arr_8 [i_0] [(_Bool)1] [i_0 - 1] [i_1] [i_1 + 2] [i_1 + 2])) : (arr_3 [i_0 + 1]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        arr_19 [i_6] = ((/* implicit */int) arr_3 [(_Bool)1]);
        arr_20 [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 326090669U)) ? (((/* implicit */unsigned long long int) var_8)) : (((144115188075855616ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(_Bool)1] [(signed char)8] [(_Bool)1]))))))) >= (((/* implicit */unsigned long long int) 1688969269U))));
        var_23 = ((/* implicit */_Bool) ((((_Bool) max((var_11), (((/* implicit */unsigned long long int) (short)1478))))) ? (((((arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) == (3734265352U))) ? (((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [(signed char)0] [i_6]))) : (191920854366357275ULL))) : (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [(_Bool)1])))));
        /* LoopNest 2 */
        for (short i_7 = 3; i_7 < 10; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_26 [i_7] [11LL] [i_8] [i_7 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_7] [i_7] [i_7 + 3] [i_7 - 2] [(unsigned char)10] [i_7]))) ? (((/* implicit */long long int) ((arr_8 [i_7] [i_7] [i_7 - 3] [i_7 - 2] [i_7] [0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_7 - 3] [i_7 - 2] [i_7 + 2] [i_7])))))) : (min((((/* implicit */long long int) 82648185)), (var_8)))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned long long int) arr_24 [i_6] [(unsigned char)0] [1]);
                                var_25 = ((/* implicit */short) 144115188075855594ULL);
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)25424)) && (((/* implicit */_Bool) 14LL))))), (min((arr_22 [i_6] [i_6]), (arr_22 [i_8] [i_8]))))))));
                                arr_34 [i_6] [i_6] [i_8] [i_7] [i_6] = ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
