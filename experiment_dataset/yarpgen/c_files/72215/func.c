/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72215
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
    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)65535)))) < (var_10)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_12 ^= ((/* implicit */short) ((((arr_3 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))))) | (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0])))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */short) ((unsigned int) arr_6 [i_0] [i_2 + 2] [i_2 + 2]));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) (unsigned char)158));
        arr_14 [i_0] = ((/* implicit */short) ((arr_2 [i_0] [i_0]) << (((/* implicit */int) (!(((/* implicit */_Bool) 3142900776U)))))));
        arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((1995112588U) & (arr_0 [i_0] [(unsigned short)15]))) << (((2598097350U) - (2598097319U)))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_19 [i_4] = ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (var_9));
        arr_20 [i_4] = (unsigned char)7;
    }
    for (short i_5 = 1; i_5 < 23; i_5 += 4) 
    {
        var_13 = ((/* implicit */short) ((unsigned char) var_1));
        arr_24 [i_5] [i_5 + 1] = ((/* implicit */unsigned long long int) arr_23 [i_5] [(unsigned short)14]);
    }
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_9 [i_6]);
        var_15 = ((/* implicit */unsigned short) min((var_15), (((unsigned short) (_Bool)1))));
        arr_27 [i_6] = ((max((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6))), (((/* implicit */unsigned long long int) var_2)))) * ((+(((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_6]))) : (1426944007621105939ULL))))));
    }
}
