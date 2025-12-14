/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81306
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (5617630415650897760ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32256))))) : (((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32256))) : (0ULL)))))) ? (((arr_4 [i_0] [15U] [i_2]) ? (3556465636U) : (((/* implicit */unsigned int) (((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */int) (short)11338))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1023)))));
                                arr_14 [0U] [0U] [i_2] [10U] [i_4] = ((/* implicit */short) 131071ULL);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) arr_7 [14U] [i_2 - 2]);
                    arr_15 [i_0 - 2] [i_0 - 2] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-1024))))));
                }
                arr_16 [i_0] [i_1] = ((/* implicit */long long int) arr_2 [i_0] [12]);
                var_17 = ((/* implicit */short) min((var_17), ((short)127)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    arr_21 [i_0 - 3] = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1 + 2] [i_5]))) : (10255657059316149145ULL));
                    var_18 = ((/* implicit */unsigned char) (+((+(17454747090944LL)))));
                    arr_22 [i_0] = ((/* implicit */short) arr_19 [i_0] [i_1 + 1]);
                    var_19 += arr_5 [i_0] [i_1] [i_5 - 1];
                }
                for (signed char i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    var_20 &= ((/* implicit */long long int) (+(((/* implicit */int) (short)-11445))));
                    arr_25 [i_0 + 2] [0ULL] = ((/* implicit */short) (unsigned char)0);
                    /* LoopSeq 3 */
                    for (signed char i_7 = 2; i_7 < 15; i_7 += 3) 
                    {
                        arr_28 [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                        arr_29 [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)6))));
                        var_21 &= ((/* implicit */unsigned long long int) arr_18 [i_0 + 1] [i_6 - 1] [i_7]);
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 2) 
                        {
                            arr_33 [i_0] [i_1] [i_7] [i_7 + 2] [i_7] [i_8] = ((/* implicit */signed char) (-((-((-(((/* implicit */int) arr_9 [2LL] [i_1] [1LL] [11LL] [i_8 - 2]))))))));
                            arr_34 [i_0 - 1] [i_7] [i_6 - 1] [i_7] [i_7] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7916728456887694931LL)) ? (((/* implicit */int) arr_24 [i_0] [15U] [15U])) : (((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (short)16384))))) ? (((/* implicit */int) (signed char)-1)) : ((-2147483647 - 1))));
                            arr_35 [i_0] [i_1] [i_1] [i_7] [i_1] [12ULL] = ((/* implicit */long long int) (short)6160);
                            var_22 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_8] [i_7] [i_8]);
                        }
                        /* vectorizable */
                        for (long long int i_9 = 3; i_9 < 16; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 272678883688448ULL))));
                            var_24 = (+(((/* implicit */int) arr_37 [i_0] [i_1] [i_6 - 1] [i_7 - 1] [12U])));
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 15; i_10 += 4) 
                    {
                        arr_42 [i_0] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_38 [i_0] [i_1] [i_6] [i_10]))))));
                        arr_43 [i_0] [i_1 + 3] [i_1 + 3] [i_10] &= ((/* implicit */short) (+(17U)));
                    }
                    for (unsigned short i_11 = 1; i_11 < 16; i_11 += 4) 
                    {
                        arr_46 [(short)10] [i_0 - 3] [i_11] [i_6 - 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 431441718696097916ULL)) ? ((+(((/* implicit */int) arr_38 [i_0] [2U] [i_6] [i_11])))) : (((/* implicit */int) (short)1307))));
                        arr_47 [i_0] [i_11] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_24 [i_1] [i_6] [i_11])))) ? (((((/* implicit */_Bool) arr_40 [i_0] [i_1 - 1] [9U] [9U])) ? (((((/* implicit */_Bool) arr_38 [(short)15] [4U] [i_6] [i_11])) ? (2888379886U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0 - 1] [i_0 - 1] [i_11] [i_11]))))) : ((-(2888379886U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2])))))));
                        arr_48 [i_0 + 1] [i_11] [i_11 - 1] = (!(((/* implicit */_Bool) (unsigned short)53794)));
                    }
                }
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (signed char)1))));
    var_26 |= ((/* implicit */long long int) (unsigned short)16556);
}
