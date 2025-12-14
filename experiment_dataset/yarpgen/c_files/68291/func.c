/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68291
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((arr_0 [i_2] [(unsigned char)6]) ^ ((+(((((/* implicit */_Bool) (unsigned short)17865)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14233))) : (arr_0 [5ULL] [i_1]))))))))));
                    var_11 = ((/* implicit */unsigned short) arr_8 [i_2]);
                    arr_9 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (max((((((/* implicit */int) arr_2 [(unsigned char)13] [6ULL])) << (((((/* implicit */int) var_5)) + (6835))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)17865)) : (((/* implicit */int) (unsigned char)184))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */short) min((((unsigned long long int) ((((/* implicit */_Bool) 9992202747930784147ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)180)))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54246))) : (9992202747930784155ULL)))))));
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (var_0)));
    var_15 = (~(var_7));
}
