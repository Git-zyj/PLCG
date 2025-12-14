/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76664
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
    var_18 = var_10;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [12U])))), (((((/* implicit */int) (unsigned char)28)) ^ (((/* implicit */int) var_16))))))));
        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) 4095LL)) ? (((/* implicit */unsigned long long int) max((((1167324853) % (((/* implicit */int) (unsigned char)79)))), (((/* implicit */int) (unsigned char)236))))) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)229), (((/* implicit */unsigned char) (signed char)46)))))) : (7790801334852658257ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_3);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)85)), (arr_1 [i_0])))) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (((((var_9) >> (((var_4) - (22192984))))) << (((/* implicit */int) ((((/* implicit */_Bool) 3454279561U)) && (((/* implicit */_Bool) var_0)))))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max(((unsigned short)5207), (((/* implicit */unsigned short) var_15))))), (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) : (7658491376223271779ULL))))), (min((((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))), (min((((/* implicit */unsigned long long int) var_9)), (arr_6 [i_1])))))));
        var_20 -= ((/* implicit */unsigned short) ((((var_8) | (var_11))) - (((arr_6 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
    }
    var_21 ^= min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (3ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9)))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-4163)) - (((/* implicit */int) (unsigned short)16352))))) ? (144114638320041984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))));
}
