/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92501
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
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((4294967295U) * (((/* implicit */unsigned int) ((16646144) / (-16646154)))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [16] [i_2] [i_2] [10LL]))))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 9223372036854775788LL)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((16646144) - (16646139))))))))))));
                    var_20 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_10);
    var_22 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))))))), (-16646149)));
}
