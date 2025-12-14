/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61615
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(var_5)))), (min((((/* implicit */long long int) max((((/* implicit */signed char) var_2)), ((signed char)-120)))), (max((((/* implicit */long long int) (signed char)69)), (var_6))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) min((min((arr_0 [i_0 + 1] [i_0 + 1]), (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (9223372036854775807LL) : (arr_1 [i_0]))))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7))), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0 + 3] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((9223372036854775807LL), (((/* implicit */long long int) (short)-32762))))))) ? ((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */short) var_2)), ((short)64)))), (((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) var_2)))))))));
    }
    var_18 += ((/* implicit */short) min((var_11), (((unsigned char) (~(((/* implicit */int) (short)17384)))))));
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) var_12)), (min((((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775807LL))), (((/* implicit */long long int) (short)-32747))))));
    var_20 &= ((/* implicit */unsigned char) max((max((((/* implicit */int) ((unsigned char) (signed char)-119))), ((~(var_5))))), ((+(((var_15) - (((/* implicit */int) (unsigned char)243))))))));
}
