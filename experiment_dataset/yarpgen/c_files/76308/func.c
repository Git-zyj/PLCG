/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76308
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
    var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((long long int) var_8))) ? (max((-432651753), (-421151320))) : (var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (+(432651753)));
                var_18 = max((((unsigned int) arr_4 [i_1 + 1] [i_1] [i_1])), ((-(3225414915U))));
                var_19 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -7554500968368143473LL)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) 503126140)) : (2599475122U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_5)))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-6802))))));
            }
        } 
    } 
}
