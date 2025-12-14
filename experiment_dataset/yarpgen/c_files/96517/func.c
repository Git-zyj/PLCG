/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96517
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
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) ((signed char) (signed char)88)))), (max((((unsigned long long int) -1953127726)), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))))));
    var_19 = ((/* implicit */unsigned char) max((((int) ((unsigned short) (_Bool)0))), (((/* implicit */int) ((unsigned short) ((long long int) (signed char)-74))))));
    var_20 = (~(min((((/* implicit */long long int) ((signed char) -1LL))), (((long long int) var_7)))));
    var_21 &= min((((/* implicit */long long int) ((_Bool) (_Bool)1))), ((-(min((11LL), (((/* implicit */long long int) (unsigned short)65535)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_22 -= ((/* implicit */signed char) ((short) min((min((((/* implicit */long long int) arr_0 [(signed char)18] [i_2])), (arr_3 [i_0] [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) max((((/* implicit */int) var_14)), (var_16)))), (max((((/* implicit */long long int) (short)11954)), (arr_4 [i_1]))))));
                    var_23 = ((/* implicit */int) min((((/* implicit */long long int) min((min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)59206))), (((/* implicit */unsigned short) (_Bool)0))))), (((long long int) (~(6837727178023007981LL))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */int) ((long long int) max((((long long int) var_15)), (((/* implicit */long long int) ((int) arr_0 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
