/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97741
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
    var_18 |= ((/* implicit */_Bool) (signed char)-85);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1654718155)), ((((_Bool)0) ? (var_1) : (574598403360878543ULL)))))) ? ((+(574598403360878515ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (130048U)))) ? ((~(-2073515151))) : (((((/* implicit */_Bool) -4428128346894507049LL)) ? (-1) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                var_19 |= ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)103))))) ? (((((/* implicit */_Bool) 17872145670348673106ULL)) ? (4925968805966161476ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7ULL)))))));
            }
        } 
    } 
}
