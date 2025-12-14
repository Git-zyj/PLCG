/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9342
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
    var_11 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32760))) < (((long long int) max((var_5), (var_5))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) min((max((0ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-35)))))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((-2) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max(((short)-2879), (((/* implicit */short) (signed char)86))))) : (((/* implicit */int) (_Bool)1)))))))));
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_13 = ((/* implicit */short) ((((8690317245046679527ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)32776)))) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (signed char)56)), (11579480125960493742ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((int) min((var_3), (((/* implicit */long long int) arr_5 [i_1 - 2])))));
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned short)32760)) ? (((/* implicit */int) (short)-3755)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)1))))));
        arr_8 [i_1] = ((/* implicit */short) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_5 [i_1]))))) | (var_0)))));
    }
    var_14 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32776))) : (4396972769280LL))), (((/* implicit */long long int) (_Bool)1))))));
    var_15 |= ((/* implicit */signed char) (-(((unsigned long long int) max((((/* implicit */long long int) var_4)), (var_0))))));
}
