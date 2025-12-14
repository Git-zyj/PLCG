/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86333
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned char) -1422483061882173281LL);
                var_14 ^= ((/* implicit */signed char) (short)6144);
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)61440)))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((arr_1 [i_0]) || (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) var_12)))))) ? (1854161786908775363ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (arr_4 [i_1] [i_1]) : (var_6)))) ? (((/* implicit */int) (unsigned char)21)) : (max((arr_0 [i_0] [i_0]), (((/* implicit */int) (_Bool)1)))))))));
                var_16 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0 + 2])) ? (arr_4 [i_1] [i_0 - 1]) : (arr_4 [i_1] [i_0 - 1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-63))))), (((long long int) var_10)))));
}
