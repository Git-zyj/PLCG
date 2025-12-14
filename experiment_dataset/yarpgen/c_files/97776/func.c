/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97776
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (6175514671654116750ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [(signed char)1] [i_1] [15U]))))))));
                    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) var_4)))))) > (((((/* implicit */_Bool) (short)-17972)) ? (min((6175514671654116750ULL), (((/* implicit */unsigned long long int) 6095360978126788754LL)))) : (((/* implicit */unsigned long long int) var_0))))));
    var_16 = ((/* implicit */unsigned long long int) var_10);
}
