/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55827
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
    var_19 = ((/* implicit */int) ((unsigned short) 0ULL));
    var_20 = ((/* implicit */short) var_18);
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((min((0ULL), (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (unsigned char)0);
                var_22 |= ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-101)), (0ULL)))) ? (((long long int) var_2)) : (((long long int) var_16)))), (max((((long long int) -6873472749645805046LL)), (((/* implicit */long long int) max((arr_2 [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) var_8)))))))));
            }
        } 
    } 
}
