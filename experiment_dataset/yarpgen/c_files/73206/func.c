/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73206
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((var_9), (var_10)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)6280))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!((_Bool)1)))), ((signed char)97)))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-111)) - (((((/* implicit */int) (signed char)-35)) - (((/* implicit */int) arr_2 [i_0] [10])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) (signed char)51);
                    arr_10 [i_2] [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) max((((((-1282012712) + (2147483647))) << (((14989012548893796016ULL) - (14989012548893796016ULL))))), (((/* implicit */int) (signed char)-100))));
                    arr_11 [i_0] [(unsigned char)11] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [(short)10]))))));
                    var_12 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) (!((!(arr_1 [i_0])))));
        var_13 = ((/* implicit */short) (signed char)51);
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 14; i_3 += 4) 
    {
        arr_16 [11LL] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-114))));
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-29113)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) arr_13 [7])))) : (((/* implicit */int) arr_15 [i_3 - 4] [i_3 - 1]))));
    }
}
