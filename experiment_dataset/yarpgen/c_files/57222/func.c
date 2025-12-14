/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57222
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
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((15937011036744876053ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                arr_5 [i_0] [i_0] [i_0] = (signed char)116;
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_3 [i_0]))))), ((-(((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) var_4)) : (arr_4 [i_1] [i_1 + 4]))) : (((/* implicit */long long int) min((((0) / (((/* implicit */int) var_14)))), ((+(((/* implicit */int) (unsigned short)62649)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((2305843009213693951ULL) + (((/* implicit */unsigned long long int) -1)))))))))));
}
