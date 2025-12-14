/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56162
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-20)))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))));
                arr_8 [8] [8] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)181)) + (((/* implicit */int) (unsigned short)1))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) | (((((/* implicit */_Bool) -929669488)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) : (18446744073709551602ULL)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (((+(((var_16) * (((/* implicit */unsigned long long int) 8)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((6435999664288795974LL) == (((/* implicit */long long int) -929669505))))))));
    var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((268435456) << (((var_16) - (13716315492221695847ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 144115119356379136LL)))))) : ((+(var_1)))))));
}
