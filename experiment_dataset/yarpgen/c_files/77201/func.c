/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77201
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
    var_15 -= ((/* implicit */signed char) var_9);
    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_4)))));
    var_17 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (_Bool)0)), (((5402597626828233687LL) / (2618877646724067845LL))))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-78)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_18 = ((/* implicit */signed char) (+(arr_1 [i_0 + 1])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6010527667387876762ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) var_1))))))) : (max((((/* implicit */unsigned long long int) 2618877646724067845LL)), (3303128720541629939ULL)))));
        var_20 ^= ((/* implicit */long long int) min((min((15428012808591104849ULL), (arr_1 [i_1]))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 1373077509)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)70))));
        arr_9 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) (_Bool)1)) : (1081389207)))) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-72)), (1373077509)))) : (max((-5449595553133269160LL), (((/* implicit */long long int) (short)-22247)))))))));
        var_21 ^= (!(arr_7 [i_2]));
        var_22 = ((/* implicit */unsigned short) ((min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (unsigned short)32751)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4042557444U))))));
        var_23 = ((/* implicit */unsigned int) max((14680064ULL), (((/* implicit */unsigned long long int) var_1))));
    }
}
