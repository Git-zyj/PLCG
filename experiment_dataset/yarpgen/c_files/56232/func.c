/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56232
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)31859)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((unsigned char) (+(9223372036854775807LL))));
                var_20 = ((/* implicit */unsigned char) ((-4410533920427369801LL) | (((/* implicit */long long int) ((/* implicit */int) (short)2198)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((long long int) arr_5 [i_2 + 3] [i_2 + 2]));
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_2 + 1]))));
        var_22 |= ((/* implicit */unsigned int) arr_4 [(unsigned short)16] [(unsigned short)16] [i_2 + 1]);
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)14060))) < (max((((/* implicit */unsigned int) var_6)), (arr_9 [i_3] [i_3]))))) ? (((((((/* implicit */_Bool) (short)14060)) ? (arr_9 [(unsigned char)10] [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) << (((/* implicit */int) arr_10 [i_3])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (arr_9 [i_3] [i_3]) : (((/* implicit */unsigned int) ((arr_10 [i_3]) ? (((/* implicit */int) (short)-14040)) : (((/* implicit */int) arr_10 [i_3]))))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 4) 
            {
                {
                    var_24 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)5)), (-2050492843)));
                    var_25 = ((/* implicit */short) (-(arr_9 [i_5 - 2] [i_5 + 2])));
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_26 ^= ((/* implicit */unsigned long long int) (unsigned short)39624);
                                var_27 = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) var_15))) % (arr_17 [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1])))));
                            }
                        } 
                    } 
                    arr_19 [i_5] [i_5 + 2] [(short)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_16 [(unsigned short)10] [(unsigned short)10] [i_3] [(unsigned short)10] [(short)0] [7ULL]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_28 [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_15))))) : (arr_17 [i_8] [i_8 - 1] [i_8 - 3] [i_8 + 1] [i_8 - 3])));
                        arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] = max(((-(((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (13391926074280543840ULL));
                        arr_30 [8] [13ULL] [i_8] [i_10] [9] = ((/* implicit */unsigned short) var_5);
                        arr_31 [i_10] [i_10] [i_10] [i_8] = ((/* implicit */_Bool) arr_11 [i_3] [(_Bool)1] [i_3]);
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) arr_22 [i_8]))), (arr_17 [i_10] [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8 - 1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_8] [(short)5]))) / (((((/* implicit */_Bool) arr_14 [i_3] [i_8] [i_3] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13292))) : (arr_22 [i_9])))))));
                    }
                } 
            } 
        } 
    }
}
