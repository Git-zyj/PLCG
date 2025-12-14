/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88010
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
    var_11 = ((/* implicit */unsigned int) var_9);
    var_12 = (~(((/* implicit */int) (unsigned short)41594)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_0 [i_0]))) | (((unsigned long long int) (_Bool)1)));
        var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)65535)), (min((((/* implicit */long long int) 232164751U)), (-4509989006948485300LL)))));
        arr_2 [i_0] = ((/* implicit */int) max((((unsigned short) max((arr_1 [i_0]), (arr_1 [i_0])))), (((/* implicit */unsigned short) arr_1 [16ULL]))));
        var_15 = (!(((/* implicit */_Bool) arr_0 [i_0])));
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */signed char) var_8)), (arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) ((unsigned char) arr_5 [i_1])));
        var_17 = ((/* implicit */_Bool) (-(max((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_5 [16ULL])))), (((((/* implicit */int) arr_4 [i_1] [i_1])) % (((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */int) min((min((arr_3 [i_1]), (arr_1 [i_1]))), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) arr_1 [i_1])))))));
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((unsigned short) arr_3 [i_1]))) : (((/* implicit */int) max((min((((/* implicit */unsigned short) arr_4 [i_1] [(_Bool)1])), (arr_5 [i_1]))), (((/* implicit */unsigned short) arr_4 [i_1] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_5 [(unsigned char)15]);
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_0))));
}
