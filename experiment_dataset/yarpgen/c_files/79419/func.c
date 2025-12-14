/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79419
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
    var_16 = (unsigned short)49344;
    var_17 = ((/* implicit */_Bool) ((unsigned int) ((signed char) max((var_2), (((/* implicit */short) var_9))))));
    var_18 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)56))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_7)))) : (((/* implicit */int) min((var_4), (((/* implicit */signed char) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((signed char) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0]))))));
        arr_2 [20LL] = ((/* implicit */signed char) -1500943754);
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) arr_0 [i_1 + 1]);
            var_21 += ((/* implicit */int) (short)18388);
        }
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16173))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)18388)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) 2497563738U);
}
