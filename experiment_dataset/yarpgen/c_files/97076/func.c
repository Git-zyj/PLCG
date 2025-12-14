/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97076
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_18 = ((/* implicit */int) min((var_18), ((~(max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)51932))))))))));
            var_19 = max((18446744073709551596ULL), (((/* implicit */unsigned long long int) (signed char)-38)));
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (4934438943946103696LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
        }
        var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_13)) : (0ULL))));
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
    }
    var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)6)) ? ((~(49ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19424)) >> (((var_3) - (13351651795170409449ULL)))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -9085759375397256347LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_14))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)3)))))))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (85262398U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19442))))), (0U)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (signed char)-49))) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) var_14))) - (165)))))) : (min((var_10), (((/* implicit */unsigned long long int) 4294967283U))))));
}
