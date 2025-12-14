/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80334
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
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) | (min((((/* implicit */int) (_Bool)1)), (-28350174))))) < (((((var_0) >= (var_0))) ? (((/* implicit */int) (unsigned char)8)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 *= ((/* implicit */int) arr_0 [(unsigned char)5] [i_0]);
        var_13 = ((/* implicit */int) var_3);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)184));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(2974247710U)));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9))));
            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) <= (((/* implicit */int) arr_2 [i_2]))));
        }
        var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)73))))));
        var_18 = ((/* implicit */_Bool) (unsigned char)25);
        var_19 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2974247710U)) ? (arr_4 [i_1] [(_Bool)1] [20ULL]) : (arr_4 [i_1] [i_1] [i_1])))));
    }
    var_20 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
}
