/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80478
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
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4069485217U)) ? (((/* implicit */unsigned int) -1131231867)) : (225482068U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_2 [i_0]);
                arr_5 [i_0] [i_0] [i_1 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 225482081U))) ? ((-(((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39771))))))) : (((/* implicit */unsigned long long int) max((225482068U), (((/* implicit */unsigned int) var_15)))))));
                arr_6 [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned char) ((int) arr_4 [i_0] [i_0] [i_1]));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) ^ (4069485230U)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned short) arr_7 [4ULL]);
        arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))));
    }
}
