/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85362
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
    var_17 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) (short)32755))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(signed char)11] [i_0 - 2]))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65526))))), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0]))))))));
        var_19 = max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))) < (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (20ULL)))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (1152640029630136320LL))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) arr_3 [i_1]);
        var_21 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_0 [(_Bool)1])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) > (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [(signed char)1])))))))));
        arr_5 [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) arr_0 [20LL]))))) : (((/* implicit */int) (signed char)-106)));
    }
    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)20)) == (((/* implicit */int) (signed char)-1)))))))) : ((((!(((/* implicit */_Bool) 20ULL)))) ? (min((((/* implicit */long long int) (unsigned short)29551)), (5094513667058443075LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65521)) ^ (((/* implicit */int) (signed char)-118)))))))));
    var_23 |= var_7;
}
