/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97456
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
    var_15 = ((/* implicit */short) ((((int) var_11)) ^ (((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)-59), ((signed char)-84)))) ? (((/* implicit */int) (((-(((/* implicit */int) (signed char)-60)))) <= (((/* implicit */int) (signed char)-59))))) : (((/* implicit */int) (_Bool)1))));
            var_16 &= ((/* implicit */_Bool) arr_5 [i_1] [i_0]);
            var_17 = ((/* implicit */int) max((var_17), (min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)36))))))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (short)-12636))));
        }
        var_19 -= ((/* implicit */unsigned int) (_Bool)1);
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((short) var_2)))));
    var_21 += ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned short)15453))))))));
}
