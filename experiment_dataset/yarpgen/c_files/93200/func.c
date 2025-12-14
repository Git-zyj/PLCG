/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93200
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
    var_17 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) 10847463690775613798ULL))) << (((((((/* implicit */int) (unsigned short)15)) + (((/* implicit */int) (unsigned short)29818)))) - (29833))))) <= ((~(((/* implicit */int) var_6))))));
    var_18 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                arr_4 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)44059)) >= (((/* implicit */int) (unsigned char)54)))), (max((arr_2 [i_0 - 2]), (max(((_Bool)1), ((_Bool)1)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((var_4) | (((/* implicit */int) arr_2 [i_0 + 1])))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((arr_2 [i_0]) ? (((/* implicit */int) (short)-929)) : (var_13))))));
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_7 [i_0 - 1] [(_Bool)1])) : (((/* implicit */int) arr_7 [i_0 - 2] [i_0]))));
                    }
                    for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2128172590) << (((2491637545639492960ULL) - (2491637545639492960ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19037))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63560))) | (arr_1 [i_1])))));
                        arr_12 [i_1 + 3] [i_2] [i_1 - 3] [i_4 - 1] = ((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned long long int) -9150914021461617791LL))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            arr_15 [i_1] [i_2] [(unsigned short)3] [(unsigned short)3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1])) <= (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */int) var_8)) + (((/* implicit */int) (short)32418))))));
                            arr_16 [8LL] [i_1 + 2] [9U] [8LL] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1LL)) ? (5253849187478714708ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))))) >> (((((((/* implicit */_Bool) -5896415920461154048LL)) ? (((/* implicit */int) (unsigned short)24441)) : (((/* implicit */int) (unsigned short)33244)))) - (24439)))));
                            arr_17 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) arr_10 [4U] [4U] [i_2] [0ULL] [i_5]))))) ? (((((/* implicit */_Bool) -9162376848297091068LL)) ? (9162376848297091055LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38348)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (short)15479))));
                            var_24 = ((/* implicit */long long int) 1364520864U);
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_24 [i_0 + 1] [i_1] [(short)2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49579))) : (4459979539294207755ULL)));
                            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)208)) >> (((((/* implicit */int) (signed char)-108)) + (129)))))) && (((/* implicit */_Bool) arr_0 [i_2] [i_1 - 1]))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_19 [i_2] [i_2]))));
                            var_27 = ((/* implicit */unsigned int) (short)-1);
                        }
                    }
                    var_28 = ((/* implicit */unsigned short) ((18014398509481983LL) & (((/* implicit */long long int) arr_13 [i_0 + 1] [i_0 + 1] [i_1] [(unsigned short)2] [i_2]))));
                    arr_25 [i_0] [i_0] [i_0] [i_2] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10070)) ? (7951767553181232874ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) arr_20 [i_0] [i_1 - 1] [2U] [i_0])) : (((((/* implicit */_Bool) (signed char)-1)) ? (-819800875) : (var_13))));
                }
            }
        } 
    } 
}
