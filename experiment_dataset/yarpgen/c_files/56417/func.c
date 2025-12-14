/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56417
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) -737821086))));
    var_16 -= ((/* implicit */unsigned int) (+(var_2)));
    var_17 = ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (var_13));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)164)) < ((-(((/* implicit */int) ((unsigned char) var_13)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((10818730208357532000ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))))) ? (((((((/* implicit */unsigned int) 737821111)) < (arr_1 [1LL] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1874393526U)))))) : (((((/* implicit */_Bool) -737821065)) ? (1128593384U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) : (arr_1 [i_0] [i_0])));
        var_19 = ((arr_1 [i_0] [i_0 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0 + 2] [5LL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-32751))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_1 [i_0] [8ULL])))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))))) : (((arr_0 [i_0 + 1]) ? (1688357989344161204ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 + 3])))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)78)))) % ((+(((/* implicit */int) (unsigned char)178))))))))))));
    }
}
