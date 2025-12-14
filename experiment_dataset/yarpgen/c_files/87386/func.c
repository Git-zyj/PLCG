/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87386
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) 3879300257U);
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned short) arr_6 [i_1] [i_1] [i_2])))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_15));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_1] [i_1])) != (((/* implicit */int) arr_12 [i_0] [i_0]))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
                    }
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_0] [i_2]))));
                    var_21 = ((/* implicit */short) var_1);
                    var_22 = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) var_9)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))))))), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
                }
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 12; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_21 [i_0] [8U] [(short)14] [i_5] [(short)4] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_10 [i_0] [i_6])), (max((arr_4 [0LL] [i_6] [i_0] [i_6]), (((/* implicit */unsigned int) arr_20 [i_6 + 3] [i_6 + 2] [i_6] [i_0] [i_6 + 2] [4LL]))))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max(((signed char)(-127 - 1)), ((signed char)-66))))));
                                arr_22 [i_1] [i_1] [i_5] [i_6] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_6 - 1] [(unsigned char)6])) ? (((/* implicit */int) arr_10 [i_0] [i_7])) : (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (signed char)-61))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) (signed char)52)))))));
                                var_24 = ((/* implicit */long long int) (((_Bool)1) ? (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 4294967273U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0] [i_7])) || (((/* implicit */_Bool) arr_16 [8LL] [i_1] [i_6] [i_7])))))) : (((((/* implicit */_Bool) var_13)) ? (1U) : (arr_5 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((int) var_0)))));
                            }
                        } 
                    } 
                    arr_23 [4U] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0])) * ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_5]))))))) ? (((/* implicit */unsigned long long int) min(((-(arr_4 [i_0] [(short)14] [i_0] [i_0]))), (min((((/* implicit */unsigned int) var_10)), (6U)))))) : (11929037953694282086ULL)));
                    arr_24 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_1] [(_Bool)1]))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (-8182793962502945097LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)89))))))) == (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(18446744073709551615ULL))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    arr_27 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2843715936U))))));
                    arr_28 [i_0] [i_1] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)65535))))));
                }
                arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)252);
                arr_30 [i_0] = ((/* implicit */signed char) (unsigned char)255);
                arr_31 [i_1] |= ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (short)480)) : (((/* implicit */int) (signed char)127))))), (max((((/* implicit */unsigned long long int) 336008122U)), (arr_17 [i_0] [i_0] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_0] [i_1])) : (((/* implicit */int) (signed char)89)))))))));
            }
        } 
    } 
    var_26 = var_3;
    var_27 = ((/* implicit */unsigned int) min((var_27), ((((~(2U))) >> (((((((((/* implicit */_Bool) 68717379584ULL)) || (var_12))) ? (((((/* implicit */_Bool) 207980671)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_13)))) + (134)))))));
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38)))));
    var_29 = ((var_11) >> (((((/* implicit */int) var_3)) + (111))));
}
