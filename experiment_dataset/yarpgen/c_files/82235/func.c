/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82235
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
    var_15 |= ((/* implicit */unsigned int) var_2);
    var_16 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 ^= max((max(((unsigned short)65535), ((unsigned short)2))), (((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) >= (-2468430391137302498LL)))));
                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) var_8)))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_1 [i_0 - 2]))));
                arr_7 [i_1] = (((!(((/* implicit */_Bool) var_3)))) ? (7702171765167470022ULL) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (14))), (((/* implicit */int) arr_1 [i_0]))))));
                arr_8 [i_1] [(unsigned char)15] [(_Bool)1] = ((/* implicit */short) max((((((((/* implicit */_Bool) 18)) ? (((/* implicit */long long int) var_9)) : (var_5))) / (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) arr_3 [i_1]))));
            }
        } 
    } 
}
