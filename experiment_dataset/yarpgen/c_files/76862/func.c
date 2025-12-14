/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76862
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
    var_10 = ((/* implicit */unsigned int) ((_Bool) var_1));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)1023)))) / (((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (((10023145772971881540ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_12 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4568589705968845330LL))));
                arr_6 [i_0 + 1] [i_0] [(unsigned char)11] = max((max((((/* implicit */unsigned long long int) var_3)), (((arr_1 [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_0 - 1] [i_0 + 1] [i_0]))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) arr_0 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_1 - 2] [i_0]))))))) : ((+((((_Bool)1) ? (7704264606227326706LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (signed char)0);
}
