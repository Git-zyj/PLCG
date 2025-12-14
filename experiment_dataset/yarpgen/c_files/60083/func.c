/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60083
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
    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) 4906934652160567701LL)) ? (((/* implicit */unsigned long long int) 12)) : (var_4))), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_18 = var_2;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)1)) >> (((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)9)))) > (2132275684))))));
        arr_4 [5LL] = ((/* implicit */unsigned short) var_1);
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) >> (((((/* implicit */int) (short)-4096)) + (4097)))));
        arr_5 [i_0] [i_0] = max((((((/* implicit */int) (short)0)) * ((~(((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) min(((unsigned short)50126), (((/* implicit */unsigned short) ((2644253608U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_8 [11LL] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((max((var_4), (((/* implicit */unsigned long long int) var_0)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47195))))))));
        arr_9 [i_1] [(_Bool)0] = ((/* implicit */unsigned char) (unsigned short)65520);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (short)17)) / (((/* implicit */int) (unsigned char)170)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551599ULL), (var_13)))) ? (((/* implicit */int) var_15)) : (min((((/* implicit */int) (unsigned short)65533)), (42155293))))))));
    }
    var_22 *= ((/* implicit */signed char) ((var_16) / (((/* implicit */long long int) var_7))));
}
