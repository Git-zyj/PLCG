/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95386
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
    var_14 += ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2329324180839821778LL)), ((~(16723392386717255088ULL))))))));
                    var_16 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2329324180839821778LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))) : (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2779724780957165867ULL)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (_Bool)1)))))));
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(1064366045U))))));
                    var_18 = ((arr_3 [i_1] [i_1] [i_1 + 3]) <= (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1338293876373539062ULL)) ? (2712935463U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29037)))))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */short) var_12);
    var_20 += ((/* implicit */_Bool) var_4);
}
