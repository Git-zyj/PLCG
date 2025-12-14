/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77399
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (1239664870U)))))) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))));
        var_14 -= ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */int) arr_1 [(short)12])) << (((3055302423U) - (3055302415U)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        var_15 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_4 [i_1])) != (((unsigned long long int) arr_3 [i_1 + 2] [i_1]))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 4; i_2 < 24; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_13 [i_1] [i_2 + 1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (((+(arr_11 [3LL] [i_1 + 2] [i_3 + 2] [i_3 + 1] [i_4]))) / ((-(13ULL)))));
                        var_16 |= arr_2 [i_1 + 1] [i_1];
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1])) < (((/* implicit */int) ((unsigned short) ((unsigned int) arr_9 [i_1]))))));
        var_18 -= ((((/* implicit */_Bool) arr_4 [i_1])) ? (((min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)27)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))))) : (((((/* implicit */unsigned long long int) arr_12 [i_1 - 1] [i_1] [(unsigned char)24] [i_1] [i_1] [i_1])) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (arr_11 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 1]))))));
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
    {
        arr_17 [i_5] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((-1902015184) / (((/* implicit */int) (signed char)24)))) + (2147483647))) << (((((/* implicit */int) ((520667770U) <= (3055302428U)))) - (1)))))) / (arr_14 [i_5] [i_5])));
        var_19 |= ((/* implicit */unsigned long long int) min(((unsigned short)9), ((unsigned short)35785)));
        arr_18 [20ULL] [i_5] |= ((/* implicit */signed char) ((((3442351423U) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_10 [i_5])), (arr_2 [i_5] [i_5]))))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5])))));
        arr_19 [1ULL] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)235))))))) * (((((((/* implicit */int) (unsigned short)3757)) >> (((((/* implicit */int) (short)10890)) - (10875))))) >> (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (-9134837149304748145LL))) + (9134837149304748154LL)))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == ((((!((_Bool)1))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : ((-(3194741389U)))))));
    }
    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) (signed char)-35);
        var_22 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 268435456U)) / (((((/* implicit */unsigned long long int) -1902940178)) * (arr_11 [i_6] [i_6] [i_6] [i_6] [(unsigned char)2])))));
        arr_22 [i_6] = ((/* implicit */long long int) (~((+(((3055302423U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3765)))))))));
        var_23 = ((/* implicit */signed char) arr_4 [i_6]);
        var_24 -= ((/* implicit */int) ((unsigned char) ((unsigned int) arr_20 [i_6])));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (_Bool)1))));
}
