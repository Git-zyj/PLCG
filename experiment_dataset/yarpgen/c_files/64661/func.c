/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64661
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
    var_14 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) -13)) ? (2723786047254212533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33074))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_5)), (var_6)))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (max((((/* implicit */unsigned long long int) ((int) var_7))), (((((/* implicit */_Bool) var_2)) ? (var_13) : (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) var_5)))))))));
        arr_2 [i_0] |= ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))), ((+(var_3)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) == (var_0)))))) : ((-(((((/* implicit */_Bool) 571957152676052992LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)58))))))));
        var_16 ^= ((/* implicit */short) ((unsigned short) (_Bool)1));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) min(((-(max((var_10), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_6))))))))));
        arr_8 [i_1] = min((max((var_12), (var_12))), (((/* implicit */unsigned long long int) (_Bool)1)));
    }
    var_17 = ((/* implicit */unsigned short) var_4);
    var_18 = min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 11977675730501625676ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))));
    var_19 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) || (((913556983) < (10)))))) << (((var_0) % (((long long int) var_7))))));
}
