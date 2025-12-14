/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61196
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
    var_18 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) | (13071568501453290044ULL)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 29U))));
                    arr_10 [i_2] [i_1] [i_0 - 2] [i_0] = ((/* implicit */unsigned short) var_12);
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) var_3)), (min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (unsigned char)51)) << (((arr_6 [i_0] [i_0]) + (1677596870)))))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */unsigned short) max((5375175572256261571ULL), (((/* implicit */unsigned long long int) (signed char)-106))));
        arr_11 [i_0 + 2] = ((/* implicit */signed char) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16)))))))))));
    }
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (signed char)-109))));
}
