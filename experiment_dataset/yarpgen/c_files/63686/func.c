/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63686
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(-1844177358971041748LL)))), (((14390627006991967745ULL) * (min((4056117066717583858ULL), (15775557256492156242ULL)))))));
                arr_5 [i_0] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -85682468)), (18446744073709551615ULL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 18062664321233959466ULL)) ? (2715590081306765690LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24693)))))) ? (((/* implicit */unsigned long long int) min((2782256604U), (((/* implicit */unsigned int) (signed char)127))))) : (((((/* implicit */_Bool) -1844177358971041748LL)) ? (17779073209780248803ULL) : (((/* implicit */unsigned long long int) 4142645651U))))))));
}
