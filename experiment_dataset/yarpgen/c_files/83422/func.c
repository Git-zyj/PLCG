/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83422
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
    var_13 = ((/* implicit */signed char) var_6);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (signed char)-117))) - (((/* implicit */int) (((!(((/* implicit */_Bool) 1786719748)))) || (((/* implicit */_Bool) min((18446744073709551597ULL), (((/* implicit */unsigned long long int) (signed char)-116))))))))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (var_2)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */int) (short)11526)) == (((/* implicit */int) ((((/* implicit */_Bool) 4294967280U)) || (((/* implicit */_Bool) var_4)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_0 [i_0]) : (((/* implicit */int) min((arr_2 [i_0] [i_0]), ((signed char)-116))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (signed char)-116))))) : (((/* implicit */int) (unsigned char)128))))));
        var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) -1021798992)), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1] [i_1])))))));
        var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) >> (((var_11) + (8135596365300527630LL)))))) ? (((607297049) >> (((arr_4 [i_1] [i_1]) - (1741891758U))))) : (((1021798992) ^ (((/* implicit */int) arr_5 [i_1]))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_0 [i_1])))) ? ((~(((/* implicit */int) (short)-15986)))) : (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))));
    }
    var_21 *= ((/* implicit */signed char) var_1);
}
