/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75235
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) 262143U)) ? (((/* implicit */int) (unsigned char)162)) : ((-(((/* implicit */int) (unsigned short)41470))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) 2374920359U)) : (min((((/* implicit */unsigned long long int) ((unsigned char) 11027785581000707111ULL))), (((((/* implicit */unsigned long long int) 2374920336U)) | (7418958492708844505ULL)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)162))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0])))) ? (((int) ((((/* implicit */_Bool) (unsigned short)50868)) ? (7418958492708844504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94)))))) : (((/* implicit */int) (_Bool)0))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((max((7418958492708844504ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))) & (((/* implicit */unsigned long long int) var_12)))));
        }
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */short) (-((-((-(((/* implicit */int) (unsigned char)158))))))));
            var_22 |= ((/* implicit */unsigned int) 7418958492708844505ULL);
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-13656))) * (2374920359U))) : (((((/* implicit */_Bool) ((int) var_13))) ? (1920046937U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133)))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned char) var_13)))));
        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_10 [(unsigned short)3] [i_3]))) ? (9223372036854775797LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (1920046931U))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) 1920046931U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))) : (((/* implicit */unsigned int) arr_0 [i_4] [i_4])))))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_11)))));
        arr_19 [16LL] |= ((/* implicit */unsigned char) ((arr_0 [i_4] [i_4]) * (((((/* implicit */int) (unsigned char)131)) / (arr_14 [i_4])))));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (arr_14 [i_4]) : (((/* implicit */int) (!(((/* implicit */_Bool) 1920046937U)))))));
    }
    var_26 = ((/* implicit */_Bool) (((-((+(var_19))))) + (((((/* implicit */unsigned long long int) ((2374920365U) - (((/* implicit */unsigned int) var_16))))) + (7418958492708844504ULL)))));
    var_27 |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) != (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) var_17)) : (1920046957U))))));
    var_28 = ((/* implicit */int) ((_Bool) var_7));
    var_29 = ((/* implicit */_Bool) var_12);
}
