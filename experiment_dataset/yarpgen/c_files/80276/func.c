/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80276
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 |= max(((unsigned char)134), ((unsigned char)40));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_14 = ((/* implicit */int) var_5);
            var_15 = ((/* implicit */unsigned long long int) var_10);
        }
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        arr_7 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 3])) ? (arr_0 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (4023074536270382142ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_2))))))));
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) var_2)))))) : (((((/* implicit */_Bool) (unsigned short)41354)) ? (14423669537439169473ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34)))))))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) (signed char)76))), (((4023074536270382167ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((var_11) ^ (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])))))))));
    }
    var_17 = ((/* implicit */unsigned char) (!(var_0)));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (var_7)));
    var_19 = (~(var_12));
}
