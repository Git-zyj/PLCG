/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61004
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1207741735098229124LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) -587633630))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))) : (13083531645094275524ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [(short)6] [(short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
        arr_2 [15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2600909079U)) ? (((/* implicit */int) (unsigned short)6753)) : (((/* implicit */int) var_7))))) : (((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)17403)))))));
        var_18 ^= ((unsigned long long int) arr_1 [16LL] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_5 [4ULL] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -142228010716116573LL)) && (((/* implicit */_Bool) (short)-5185)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((max((arr_4 [i_1]), (((/* implicit */long long int) (_Bool)1)))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1]))))))));
    }
    var_20 = ((/* implicit */int) var_6);
}
