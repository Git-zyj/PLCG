/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89412
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned long long int) max((-8331019047287804236LL), (((/* implicit */long long int) 1692312139U))))), ((+(9037932201369763783ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (var_10) : (var_10))), (((/* implicit */unsigned int) var_15))))))))));
    var_17 = ((/* implicit */unsigned int) ((unsigned char) var_3));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((short) ((((/* implicit */_Bool) arr_8 [i_2] [i_1 + 2] [i_0] [i_0])) ? ((-(arr_7 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))))))));
                    var_19 = ((/* implicit */unsigned int) (-(((var_5) ? (((/* implicit */long long int) arr_7 [i_2] [i_2 + 1] [i_2])) : (var_9)))));
                    var_20 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 9056349222612375171LL)) ? (8331019047287804230LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    var_21 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1]))))) * (min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_0] [i_1]))))) / ((((!(((/* implicit */_Bool) arr_5 [i_1] [i_2 + 1])))) ? ((+(arr_9 [i_2] [i_1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) arr_7 [i_0] [i_1] [(unsigned short)7])))))))));
                }
            } 
        } 
    } 
}
