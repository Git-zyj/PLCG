/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76922
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
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)230)), (var_9))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned int) (unsigned char)244))) ? (((/* implicit */unsigned long long int) ((long long int) 12760458075942643392ULL))) : (((11980709810298361592ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63)) ? (0LL) : (((/* implicit */long long int) (+(19U)))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (4294967271U) : (3208963109U)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (~((-((+(var_2)))))));
    var_20 = max((((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (0))))))), (min((((((/* implicit */int) var_7)) / (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)4)) >> (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_3)))))) % (2022211913))))));
}
