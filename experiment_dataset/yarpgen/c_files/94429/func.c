/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94429
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-23796)) : (((/* implicit */int) (short)(-32767 - 1))))))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_4)) : (var_9))) - (1043397094LL))))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775789LL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_12)))) >= ((~(-9223372036854775789LL)))))) : ((~(((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */unsigned long long int) max((((((long long int) -9223372036854775790LL)) ^ (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (((/* implicit */long long int) ((((/* implicit */int) (short)-2349)) + (((/* implicit */int) (short)24158)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) & (arr_5 [i_0] [i_1] [i_2] [i_1 + 2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1 + 4] [i_2] [i_2]))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */signed char) (short)11088);
                }
            } 
        } 
    } 
}
