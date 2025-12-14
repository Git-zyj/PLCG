/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90813
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) (~((~((~(853639707719641790ULL)))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))) != ((~(arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_13 += ((/* implicit */unsigned long long int) var_4);
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1]))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 1])), (var_8)))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)91)) && (((/* implicit */_Bool) (unsigned char)3)))))) & (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) : (3556499011291339571LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) : (1374000993U)))) ? (((/* implicit */int) (unsigned short)62238)) : (((/* implicit */int) (unsigned char)132)))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_2 [i_0])))))))));
        }
    }
    var_15 = ((/* implicit */short) (~((+(((((/* implicit */int) (unsigned short)8191)) ^ (((/* implicit */int) (signed char)59))))))));
}
