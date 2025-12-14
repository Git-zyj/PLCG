/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83987
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)0)), (525278596U)))), (max((min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)3024)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [8]))) : (var_13))))))));
                    var_20 = arr_3 [i_2] [i_0] [i_0];
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (var_15)))), (((((long long int) 3365709027938741268LL)) + (((/* implicit */long long int) 0U))))));
}
