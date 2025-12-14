/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92800
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)7945)) != (((/* implicit */int) (unsigned char)246))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1 + 1] [i_1 + 1] = (!((!(((((/* implicit */int) arr_1 [i_0] [i_1 + 1])) != (((/* implicit */int) (unsigned char)246)))))));
                    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) 359357955)))));
                    arr_7 [i_0] [i_1 + 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 8419388669788476211ULL)) ? (359357955) : (2109183523))), ((+(((/* implicit */int) ((((/* implicit */int) arr_4 [2LL] [i_1] [2LL])) < (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)105)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_4)))))));
}
