/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83492
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
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1899541705))))))) ? ((~(arr_3 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) -1899541705)) && (((/* implicit */_Bool) 4294967295U)))), (((_Bool) -1899541694))))))));
                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_5)), ((+(var_9)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]))) - (var_2)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [8U] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_4]);
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (arr_4 [i_2] [i_0] [i_1 - 1] [i_4]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) (unsigned short)22864);
                                var_20 += ((min((((arr_15 [i_7] [i_7] [9LL] [i_7]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [i_6] [i_7]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (1U))))) * (((arr_17 [i_1 + 2] [i_6 + 1]) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)7] [i_5] [i_5] [(signed char)6] [(_Bool)1]))) : (arr_15 [i_0] [i_0] [i_0] [0ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_5] = ((((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 2] [i_1 - 2] [8] [(unsigned short)8] [(unsigned short)8])) ? (((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 2] [9] [i_5] [i_0] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_1 - 2] [(unsigned short)6] [i_0] [i_0] [i_1])))) + (((((/* implicit */int) (unsigned short)8929)) + (((/* implicit */int) arr_16 [i_0] [i_1 - 2] [i_0] [14ULL] [13U] [i_1 + 2])))));
                    arr_22 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [i_5] [(unsigned short)4] [i_5])), (1899541705)))) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned char)229)))));
                    var_21 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1486156576U)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (unsigned short)59318))))) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) var_8)))) > ((-(((/* implicit */int) arr_6 [i_1 - 1] [i_5] [i_1 - 1] [6ULL]))))));
                    var_22 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                }
                for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
                {
                    arr_27 [i_1] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21158)) && (((/* implicit */_Bool) 242648140U))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8 - 2] [i_1 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_25 [i_8 - 2] [i_1 + 1]))))) ? (((arr_18 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 + 1]) ? (min((var_2), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */unsigned int) 2043819304))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10829)) ? (1004050608U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))))))));
                                arr_32 [i_0] [i_1] [i_1] [i_1] [i_8 - 1] [i_9] [i_10] = ((/* implicit */unsigned short) 1899541715);
                                var_24 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)36767)))) >= (((/* implicit */int) arr_10 [i_0] [i_1] [i_8 - 1] [i_8] [i_9] [i_10]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)56607)) - (56589))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_30 [i_1] [i_1] [2U] [i_1 - 2] [i_8])) : (((/* implicit */int) var_13)))))))));
                }
                arr_33 [i_1 + 1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 2]);
            }
        } 
    } 
}
