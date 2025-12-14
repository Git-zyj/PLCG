/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55414
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (((((/* implicit */_Bool) 34357641216LL)) ? (3731538441U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6017))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1870441092)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) (short)2537))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_3))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1870441114)) ? (636708629264808900LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13116)))));
    var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned short)52249)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_3)) ? (3) : (((/* implicit */int) var_6))))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65511)) >= (((/* implicit */int) var_2))))))));
}
