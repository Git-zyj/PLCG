/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7061
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
    var_16 = ((/* implicit */long long int) ((max((((var_1) ? (var_6) : (((/* implicit */unsigned long long int) 8117399432600873147LL)))), (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) (signed char)87)) : (1720227929)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15)))) || (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_15)))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (4294967290U) : (4294967272U)))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */int) ((signed char) ((var_0) - (((/* implicit */int) (signed char)127)))))) == (max((min((16162224), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2933))))))));
        var_17 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) var_8)) ? (4294967272U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) (signed char)-3)))) : (((((/* implicit */_Bool) (signed char)63)) ? (var_7) : (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) min((arr_1 [i_0]), ((signed char)94))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_19 = ((/* implicit */long long int) var_10);
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */int) (signed char)-73)) < (((/* implicit */int) (signed char)16))))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [18LL])), (var_8)))) ? (max((((/* implicit */int) (unsigned short)57344)), (var_4))) : (((/* implicit */int) (_Bool)1))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_5 [(unsigned short)10] [i_1])) * (((/* implicit */int) arr_5 [i_1] [i_1]))))))) >= (((max((4204733259243101872ULL), (((/* implicit */unsigned long long int) (signed char)95)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -8747722560967609856LL)) >= (arr_4 [i_1])))))))));
        arr_7 [(unsigned char)14] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */unsigned long long int) var_0)) - (var_10))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))));
    }
}
