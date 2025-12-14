/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9305
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
    var_12 = max((((/* implicit */long long int) -259661679)), ((+(5494930149637869188LL))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [(unsigned short)3] = var_9;
                        var_13 += ((/* implicit */unsigned long long int) var_8);
                        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (((((((/* implicit */long long int) var_1)) != (5494930149637869179LL))) ? (((/* implicit */unsigned int) arr_2 [i_3 - 1] [i_3 - 1])) : (var_2)))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_10))));
                                var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((-5494930149637869189LL) > (((/* implicit */long long int) var_2)))), ((!(((/* implicit */_Bool) var_10)))))))) : ((-((-(-5494930149637869180LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
