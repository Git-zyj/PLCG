/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95866
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [(short)2])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) ((short) arr_0 [14U]))) ? (((/* implicit */int) arr_1 [18])) : (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_0 [6])) + (4782))))))) : (((((((/* implicit */_Bool) arr_0 [(short)6])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [11])))) / (((((/* implicit */int) arr_1 [(_Bool)1])) * (((/* implicit */int) arr_1 [9ULL])))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_1 [i_0]), (arr_0 [i_0]))))))) == (max((((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]))), (((unsigned long long int) arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 3) 
    {
        var_15 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [18LL])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))) - (((/* implicit */int) arr_4 [i_1]))))) ? (max((((((/* implicit */_Bool) arr_1 [15ULL])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_1 [(_Bool)1])))), (((/* implicit */int) ((short) arr_3 [i_1]))))) : ((((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((arr_4 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) arr_0 [(short)10])) ? (((/* implicit */int) arr_0 [(unsigned short)14])) : (((/* implicit */int) arr_1 [i_1])))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(max((((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */short) arr_4 [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [12])) : (((/* implicit */int) arr_3 [i_1])))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [10ULL]))) : (arr_5 [i_1 + 3])));
            arr_7 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((short) arr_4 [(unsigned short)3]));
        }
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_5))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_4), (var_4))), (((/* implicit */short) max((((/* implicit */unsigned char) var_1)), (var_13))))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((var_1), (var_8))))))));
    var_20 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_9)))))));
}
