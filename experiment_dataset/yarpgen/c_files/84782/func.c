/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84782
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
    var_17 = ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */_Bool) ((unsigned int) ((signed char) min((((/* implicit */unsigned long long int) 9223372036846387200LL)), (9165271813704557557ULL)))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max(((+(min((9281472260004994058ULL), (9281472260004994058ULL))))), (((max((((/* implicit */unsigned long long int) var_4)), (var_9))) - (max((12823534546915209969ULL), (var_14))))))))));
    var_20 = ((/* implicit */signed char) ((9281472260004994058ULL) * (((/* implicit */unsigned long long int) 0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (+(min((arr_5 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_22 = ((((/* implicit */int) (unsigned short)13)) - (((((/* implicit */_Bool) ((9281472260004994058ULL) / (6826240529271560683ULL)))) ? (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1] [i_0]))) : (max((-1), (-3))))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))) : (9165271813704557557ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_3] [i_2] [i_0] [i_0])))))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((unsigned long long int) min((min((((/* implicit */unsigned long long int) 2470167474743606124LL)), (9165271813704557557ULL))), (min((((/* implicit */unsigned long long int) arr_4 [7LL] [i_1] [i_1])), (var_14)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
