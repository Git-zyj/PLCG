/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98401
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
    var_19 = ((/* implicit */short) var_14);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) var_5)) == (var_3)))), (max((var_12), (var_3)))))), (var_11)));
        var_21 += ((/* implicit */int) (!((!(arr_1 [(_Bool)1])))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) max((max((var_10), (((/* implicit */int) arr_1 [i_0])))), (max((-1118989168), (((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / ((((_Bool)1) ? (((/* implicit */unsigned int) 1836842222)) : (131071U)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_1]) : (arr_2 [i_1])));
        arr_5 [i_1] = ((/* implicit */_Bool) ((arr_3 [i_1]) >> (((((/* implicit */int) var_4)) - (29729)))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), (min((var_18), (((/* implicit */unsigned long long int) var_4))))))));
    var_25 &= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
}
