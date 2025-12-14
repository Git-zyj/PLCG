/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89640
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)33496), (((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 4]))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)129)), (8838776799636420918ULL))) : (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) (unsigned char)150)))))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (short)-6594))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)10])) ? (((/* implicit */int) (short)5981)) : (((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) (short)497)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)129)))) : (((/* implicit */int) ((unsigned char) (~(14090697989334119832ULL)))))));
        arr_5 [i_0] [i_0 + 4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(arr_0 [i_0])))), (max((var_2), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
        var_17 |= ((/* implicit */unsigned short) max((784491868932428844LL), ((~(784491868932428844LL)))));
    }
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)9943))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10)))))))));
}
