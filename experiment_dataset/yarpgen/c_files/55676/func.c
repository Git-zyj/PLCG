/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55676
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
    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10398)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((unsigned short)55125), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)10411)) ? (((/* implicit */int) var_5)) : (536805376))))) : (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */long long int) 3158123890U)) + (min((arr_5 [(signed char)8] [(signed char)8] [i_2 + 1]), (((/* implicit */long long int) (unsigned short)10410))))))));
                    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_10 [i_2 - 1] [i_2 + 3] [i_2 + 2]), (-2734284862614586331LL)))) ? (min((arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 3]), (arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_10 [i_2 + 3] [i_2 - 1] [i_2 + 1]))))))));
                    arr_11 [(unsigned char)10] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (max((((((/* implicit */_Bool) arr_6 [i_2] [i_0] [0LL])) ? (arr_10 [i_0] [i_1 + 1] [i_2]) : (((/* implicit */long long int) 3158123906U)))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0])), ((signed char)-59)))))) : (((/* implicit */long long int) 4181275935U)));
                }
            } 
        } 
    } 
}
