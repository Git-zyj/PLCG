/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76494
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
    var_15 = ((/* implicit */unsigned short) -138424701);
    var_16 |= max((((/* implicit */int) (signed char)123)), (-178422833));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned char)124);
        var_17 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((max((((((/* implicit */_Bool) var_10)) ? (arr_3 [i_1]) : (((/* implicit */long long int) -178422833)))), (((long long int) 178422812)))) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) (~(arr_3 [i_1 + 2])))) ? (((/* implicit */unsigned long long int) 178422798)) : (((unsigned long long int) arr_3 [i_1 - 1]))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_7 [(_Bool)1] = ((/* implicit */unsigned char) ((((_Bool) ((signed char) (unsigned short)49312))) || (((/* implicit */_Bool) (+(min((15396041682265618457ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12201)) || (((/* implicit */_Bool) 178422808))));
            var_21 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) 7038979391401597233ULL)) ? (3944277044U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48743)))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_22 = ((unsigned char) arr_5 [i_1 + 1]);
            arr_12 [i_1] [10U] [10U] = arr_3 [i_1 + 1];
        }
    }
    var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 5623199380088237350ULL)))))) & (var_7)))));
}
