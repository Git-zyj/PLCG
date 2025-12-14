/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73655
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
    var_11 = (!(((/* implicit */_Bool) ((((_Bool) 4649173764480169545ULL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_1)))) : (((((/* implicit */_Bool) (unsigned short)46445)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (4649173764480169550ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) ((int) -9223372036854775803LL))) ? (((((/* implicit */_Bool) (unsigned short)46474)) ? (8475777381078538476ULL) : (((/* implicit */unsigned long long int) -4517428655389271229LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (-9119874839726271136LL)))))) - (8475777381078538436ULL)))));
                    var_13 = ((/* implicit */int) max((((long long int) arr_1 [(unsigned short)13])), (((/* implicit */long long int) (unsigned char)8))));
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19062))))) ? (((/* implicit */unsigned long long int) ((arr_4 [i_1 + 3] [i_1] [i_2 + 2]) / (arr_4 [i_1 + 3] [i_1] [i_2 + 2])))) : (((unsigned long long int) 9986299886187828852ULL))));
                    var_14 = ((/* implicit */_Bool) ((unsigned long long int) var_4));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) 3673824743346454076LL);
        arr_12 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((~(arr_5 [i_3]))) : (((/* implicit */int) ((signed char) 2250432525732373575LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46468)) + (((/* implicit */int) (unsigned char)122))))) ? (((/* implicit */long long int) 523393582)) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_3])))))));
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) (-(arr_14 [i_4] [i_4])));
        arr_18 [i_4] = ((/* implicit */int) var_8);
        var_16 = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
    }
}
