/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97288
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
    var_18 = (~(max((((((/* implicit */int) (unsigned short)37005)) | (((/* implicit */int) (unsigned short)28551)))), (((((/* implicit */_Bool) -9138418900564899665LL)) ? (-511892215) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 + 2])) & (((/* implicit */int) (unsigned char)211))));
        var_20 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) -9138418900564899665LL)))));
        var_23 &= ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0 - 1] [i_0 - 2]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_24 *= ((/* implicit */signed char) (unsigned char)210);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_25 ^= ((/* implicit */_Bool) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
            var_26 = ((/* implicit */signed char) -1);
        }
    }
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-(((/* implicit */int) var_7)))))));
    var_28 = ((/* implicit */signed char) max((((max((6300971266183533832ULL), (((/* implicit */unsigned long long int) var_6)))) < (((unsigned long long int) var_11)))), (var_17)));
}
