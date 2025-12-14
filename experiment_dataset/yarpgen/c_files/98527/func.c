/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98527
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned short)50749)), (18256721792918189032ULL))) >= (((/* implicit */unsigned long long int) max((-1319056911), (-1319056911))))))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) -1319056911)))) && (var_17)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_14), (var_12)))) ? (((-2147483621) | (((/* implicit */int) (unsigned short)36959)))) : ((+(((/* implicit */int) (unsigned short)26392))))))));
                arr_5 [i_0] [i_1] [4ULL] = ((/* implicit */_Bool) var_5);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_10)) ? (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_19 *= ((((/* implicit */_Bool) 2097151ULL)) || (((/* implicit */_Bool) var_3)));
    var_20 = ((/* implicit */_Bool) var_7);
}
