/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9199
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
    var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))) ? (((((/* implicit */int) (unsigned char)16)) ^ (((/* implicit */int) (short)32767)))) : (((/* implicit */int) (unsigned short)46053))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1] = (-(13999792800377320945ULL));
                var_12 = min((((((/* implicit */_Bool) ((0LL) << (((((/* implicit */int) (unsigned char)128)) - (109)))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0]))))))), (((/* implicit */unsigned long long int) (unsigned char)132)));
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-3581)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) : (67108832LL))) >= (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (67108832LL)))))) >> (((((/* implicit */int) var_10)) - (23476)))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)0));
    var_16 ^= ((/* implicit */int) var_3);
}
