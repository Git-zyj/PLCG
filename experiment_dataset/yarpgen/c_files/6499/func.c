/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6499
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
    var_15 = ((/* implicit */unsigned char) var_2);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_8)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) var_14))), (var_4)))) : (((((/* implicit */_Bool) 6282900666956988234LL)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned short)6731)) ? (((/* implicit */int) var_9)) : (852263821)))))));
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((min((max((((/* implicit */unsigned long long int) (unsigned char)171)), (5947966156616707148ULL))), (((/* implicit */unsigned long long int) (+(2147483647)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23639)))));
                var_18 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6368990223150602154LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1]))) : (-8LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(_Bool)1]))) : ((+((-(arr_4 [i_0] [i_0]))))));
                arr_6 [(signed char)10] [(signed char)8] |= ((/* implicit */short) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) - (-5625984341546002820LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (-1613720014) : (((/* implicit */int) var_14))))))));
                arr_7 [i_0] = ((/* implicit */long long int) var_6);
            }
        } 
    } 
}
