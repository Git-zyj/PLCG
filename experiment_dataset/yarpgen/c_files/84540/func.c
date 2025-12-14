/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84540
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_9 [i_3] [i_0] = ((/* implicit */signed char) var_8);
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (((+(((5LL) - (arr_1 [i_0]))))) < (max((2305842734335787008LL), (((arr_8 [i_0] [i_0] [i_0] [i_3] [i_0]) & (var_5)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)32)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)14710))))) ? (((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((var_4) ? (var_1) : (var_5))) : (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) (_Bool)1)))))));
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_1])));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)-1))) ? (-2896281408724672622LL) : (24LL)));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        arr_16 [i_1] [i_0] [i_1] = ((/* implicit */signed char) var_6);
                        arr_17 [i_4] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                        arr_18 [i_2 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0] [i_0] [i_1])) ? (((var_8) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) max(((short)29573), (((/* implicit */short) var_3))))))) : (((/* implicit */int) ((signed char) var_3)))));
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) 5137190873243825242LL))))), (((/* implicit */int) ((signed char) (short)30279)))));
                        arr_20 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_23 [i_0] [i_1] = ((/* implicit */long long int) arr_2 [i_1]);
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_28 [i_0] [i_0] [i_1] [i_1] = (!(((/* implicit */_Bool) (short)-2370)));
                            arr_29 [i_0] [i_1] = ((/* implicit */_Bool) var_1);
                            arr_30 [i_0] [i_0] [i_0] [i_2 - 1] [i_5] [i_0] = var_0;
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))) < (var_1)));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            arr_34 [i_0] |= ((/* implicit */_Bool) ((-11LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_35 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */long long int) ((/* implicit */int) (short)192))) : (-5139875940683298602LL)))) ? (((((/* implicit */_Bool) (signed char)-3)) ? (-2988387397799026919LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_36 [i_0] [i_1] [i_5] [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((short) (short)-4195));
                            arr_37 [i_1] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_1]))) ? (((/* implicit */int) (short)-16384)) : ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                            arr_38 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */signed char) var_0);
                        }
                    }
                }
                arr_39 [i_0] = arr_33 [i_0] [i_0];
            }
        } 
    } 
    var_10 = ((long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (short)-432))))) & (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5)))));
}
