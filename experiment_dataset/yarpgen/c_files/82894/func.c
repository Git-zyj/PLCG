/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82894
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
    var_11 = ((/* implicit */_Bool) var_4);
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned char) var_0)), ((unsigned char)252))), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)115))))))), (((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)37031))) / (var_2))))))));
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned char)4] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((4119164306U), (((/* implicit */unsigned int) 2146959360))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)4))))))) : (-9025842459233074119LL));
                arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))));
                arr_8 [(unsigned char)0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) -9025842459233074119LL);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (((-(((/* implicit */int) min((var_7), ((_Bool)1)))))) << (((((/* implicit */int) (unsigned short)37031)) - (37006)))));
}
