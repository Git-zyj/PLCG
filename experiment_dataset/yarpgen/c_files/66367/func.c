/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66367
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0 - 1] [i_1] = ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (short)255))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_3 [i_2] [i_1 - 2] [i_0 - 1])))));
                    var_11 = max((max((((/* implicit */int) var_9)), ((~(((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */int) var_1)) >> (((/* implicit */int) var_0)))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_7 [i_0] [i_1 - 2] [i_2 + 2]), (arr_7 [i_1] [i_1 + 2] [i_2 + 4])))) < ((~(((((/* implicit */int) (unsigned char)255)) | (-660828071)))))));
                }
            } 
        } 
    } 
    var_13 *= (+(max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))), (((var_10) - (var_10))))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((-1) + (2147483647))) >> (((((/* implicit */_Bool) 2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)110))))))), (var_10)));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (min((((unsigned long long int) 2321604704153533612ULL)), (7348231288770186947ULL))) : (((((/* implicit */_Bool) (short)-29671)) ? (16125139369556018004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))));
}
