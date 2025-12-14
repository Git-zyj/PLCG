/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68065
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 3301584593524892423LL))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)22729))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (short)22731)))))) || (((/* implicit */_Bool) var_1))));
        var_10 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (var_2) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0LL]))) == (15623229151715107763ULL)))))) <= (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) < (((/* implicit */int) var_8)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) min((var_8), (arr_1 [i_0])))))));
        arr_5 [(short)15] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) < (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))));
    }
    var_11 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_2))))))) - ((+(((((/* implicit */_Bool) var_5)) ? (1278417725) : (((/* implicit */int) (short)-22710))))))));
    var_12 -= ((/* implicit */unsigned long long int) (~(var_2)));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7480921759546779206ULL)) ? (-2706734525548351864LL) : (((/* implicit */long long int) -1))));
    var_14 += ((/* implicit */int) (short)-22734);
}
