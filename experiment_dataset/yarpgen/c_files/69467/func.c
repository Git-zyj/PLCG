/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69467
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (34)))))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_0 [i_0])))) ? (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (_Bool)1))));
        arr_7 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) * (arr_5 [i_1]))) - (2159118234U)))))) : (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))) + (9223372036854775807LL))) >> (((((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) * (arr_5 [i_1]))) - (2159118234U))) - (1725503356U))))));
        var_20 -= ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))) >> (((((/* implicit */int) arr_3 [i_1] [(unsigned char)18])) - (37928))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) | (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_5))))))) < (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45542)) % (((/* implicit */int) (unsigned char)213))))) ? (((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)155)) != (((/* implicit */int) (unsigned char)47))))))))))));
}
