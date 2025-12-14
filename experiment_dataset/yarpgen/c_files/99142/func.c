/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99142
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
    var_14 = ((/* implicit */_Bool) ((short) (_Bool)0));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 ^= max(((_Bool)1), (arr_1 [i_0]));
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) arr_3 [i_1] [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [(short)15] [i_2] [i_2] = var_7;
            var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1]))))));
            arr_10 [i_1] = ((/* implicit */short) (_Bool)1);
        }
        var_18 *= ((/* implicit */unsigned char) max((max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) min((min((arr_7 [i_1]), (((/* implicit */short) var_0)))), (((/* implicit */short) (signed char)-64)))))));
        arr_11 [i_1] = ((/* implicit */signed char) var_12);
        var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max(((unsigned char)71), (((/* implicit */unsigned char) (signed char)-87))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_20 = ((/* implicit */signed char) var_3);
    var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min(((short)29263), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) max(((short)-32536), (((/* implicit */short) var_5))))) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) min(((signed char)-11), (var_10)))))))));
}
