/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95761
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) 3246868061680264966LL)) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) & (min((var_2), (((/* implicit */long long int) (unsigned short)23368)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4347))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((unsigned long long int) var_4)), (min((5045848627004446182ULL), (((/* implicit */unsigned long long int) var_0)))))) & (((/* implicit */unsigned long long int) ((arr_1 [i_1]) % (arr_1 [(short)9]))))));
                arr_8 [(_Bool)0] = ((/* implicit */unsigned short) ((((var_1) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)23368))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4913385611704739399LL))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43166))))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-4583))) > (var_3))))))) < (((/* implicit */int) (short)-6208))));
}
