/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83415
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) arr_2 [i_0] [(unsigned char)1]);
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) % (((arr_5 [i_0] [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))))))))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (137438953471ULL) : (((/* implicit */unsigned long long int) 1027154236)))))))))));
                var_18 = ((/* implicit */unsigned short) arr_4 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (unsigned short)8184);
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((((+(((/* implicit */int) (unsigned char)138)))) % (var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
}
