/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73725
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * (((long long int) var_11)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))));
                var_13 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_0 [i_1 - 1])))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(4194304LL))))));
    var_15 = ((/* implicit */long long int) var_0);
    var_16 = min(((-(((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-32767))))))), (((/* implicit */long long int) var_10)));
    var_17 = ((/* implicit */long long int) max((var_17), (var_7)));
}
