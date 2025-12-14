/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92829
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) == (max((((/* implicit */int) max((var_12), (((/* implicit */short) var_5))))), ((~(((/* implicit */int) var_12))))))));
    var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (7132554439770509040LL)))) ? (var_10) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (var_10)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16777215)) ? (((/* implicit */int) ((short) 4503599627370495LL))) : (((((/* implicit */_Bool) 16777211)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (signed char)32))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_0 [i_0]))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-9223372036854775785LL)))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2])) ? (arr_2 [i_1 - 2] [i_1 - 2]) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])))) : ((+(arr_2 [i_1 + 2] [i_1 - 1])))));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-32749))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_4 [(signed char)8]) : (arr_0 [i_1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((min(((unsigned char)3), ((unsigned char)255))), (((/* implicit */unsigned char) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_13))))))))));
}
