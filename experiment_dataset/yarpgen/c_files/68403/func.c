/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68403
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-20)) != (((/* implicit */int) ((((/* implicit */int) (short)-19048)) != (-1942077148))))));
        var_18 = (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)27682)) : (((/* implicit */int) arr_1 [i_0])))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))) : (18446744073709551615ULL))))));
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_6 [(_Bool)1] = ((/* implicit */unsigned short) (unsigned char)59);
        var_20 = ((/* implicit */unsigned long long int) var_11);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_21 = ((/* implicit */short) ((arr_8 [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)))))))));
        arr_10 [i_2] [i_2] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (5345420950505655355LL))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1)) < (-1)));
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_18 [i_4] = ((/* implicit */unsigned short) var_11);
                    var_24 = ((/* implicit */unsigned int) arr_15 [i_3] [i_4]);
                    arr_19 [i_4] [8LL] |= ((/* implicit */unsigned char) ((max(((+(281474976710655LL))), (((/* implicit */long long int) arr_7 [i_5 - 2])))) / (var_7)));
                }
            } 
        } 
        var_25 = ((/* implicit */int) 7740981049972501798ULL);
    }
    var_26 = ((/* implicit */unsigned int) var_4);
    var_27 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_14)), (var_7))), (((/* implicit */long long int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
}
