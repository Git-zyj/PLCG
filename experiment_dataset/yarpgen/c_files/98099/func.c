/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98099
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 &= arr_1 [(short)8];
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) min(((unsigned short)13945), ((unsigned short)51598))))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_1]))) != (arr_3 [(short)7])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (-9223372036854775802LL))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                arr_11 [(short)8] [(short)8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)53580)) : (((/* implicit */int) arr_10 [i_2]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((short)-4391), (var_1))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)-8378))))) != (arr_5 [(short)2])))) : (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) (short)-19788)))))));
                arr_12 [(unsigned short)4] &= ((((/* implicit */_Bool) ((long long int) arr_8 [(short)14]))) ? (((((/* implicit */_Bool) (short)19788)) ? (min((9223372036854775807LL), (((/* implicit */long long int) arr_6 [i_2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -3142067959630934503LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)10140))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [i_2]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_4 [i_6] [i_5] [i_4]))) ? (((/* implicit */int) (short)27573)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)9049)))))));
                        arr_25 [i_4] [12LL] [i_6] &= ((/* implicit */short) ((arr_15 [i_5] [i_6 - 1] [i_7]) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_6])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_15 [i_4 - 2] [i_4 - 1] [i_4 - 1])));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((long long int) (short)6636));
                            var_19 = ((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (arr_1 [i_8]) : (arr_1 [i_8]));
                            arr_30 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4 - 1])) ? (4285383383326709888LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 + 1])))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 1; i_10 < 12; i_10 += 1) 
                        {
                            var_20 &= ((/* implicit */long long int) (+(((/* implicit */int) arr_31 [(unsigned short)11] [i_10] [(short)2] [(short)2] [i_8] [i_6 + 1]))));
                            arr_33 [i_4] [i_4] [i_6] [(short)1] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_5]))));
                        }
                        for (long long int i_11 = 4; i_11 < 13; i_11 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((8218713203186128228LL) + (-8218713203186128232LL)))));
                            arr_38 [i_11] [i_5] [i_8] [i_8] [i_6] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned short)47743))) ? (((((/* implicit */_Bool) (short)-13841)) ? (4285383383326709860LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (-3153677473061900582LL)));
                            var_22 = ((/* implicit */short) var_6);
                            arr_39 [i_4] [i_5] [11LL] [i_5] [i_11] [(unsigned short)7] [(short)7] = ((/* implicit */unsigned short) var_6);
                            arr_40 [i_4] [i_4] [i_4] [i_4 - 2] [i_5] = ((arr_22 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_4] [i_4 - 2] [i_8] [i_11] [i_11]))));
                        }
                        var_23 = ((/* implicit */long long int) ((short) (-(((/* implicit */int) arr_26 [i_6] [i_6 + 1] [7LL])))));
                    }
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) arr_29 [i_4] [(short)13] [i_6] [i_6] [(unsigned short)3] [i_4] [i_4]);
                        arr_44 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) min((var_4), (arr_10 [i_4])));
                        arr_45 [i_5] [(unsigned short)1] [i_5] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)2900)) & (((/* implicit */int) (short)19520)))))));
                    }
                    arr_46 [i_5] [8LL] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)218))))) & (((/* implicit */int) (short)-30008))));
                }
            } 
        } 
    } 
}
