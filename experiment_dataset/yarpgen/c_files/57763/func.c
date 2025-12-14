/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57763
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40814)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_20 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */signed char) ((-529854939) > (-529854932)))), (((signed char) (_Bool)1))))), ((~(max((((/* implicit */int) (unsigned short)256)), (-529854946)))))));
            var_21 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((1931439318U) >> (((529854955) - (529854955)))))) % (((long long int) ((int) 6938203423909339552LL)))));
            var_22 &= ((/* implicit */signed char) 529854931);
            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 529854938)) || (((/* implicit */_Bool) max((529854934), (((((-529854978) + (2147483647))) >> (((529854927) - (529854905))))))))));
        }
        var_24 = ((((/* implicit */int) (signed char)-80)) | (min((529854940), (((/* implicit */int) (signed char)-97)))));
        var_25 *= ((/* implicit */long long int) ((unsigned int) max((((signed char) 1787652333)), (((/* implicit */signed char) ((_Bool) -4541458114881062460LL))))));
    }
    var_26 = ((/* implicit */signed char) var_1);
    var_27 = ((unsigned char) ((0U) ^ (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)54703)), (-529854955))))));
}
