/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96740
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
    var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((int) (signed char)0)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_3))));
    var_13 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_10)))), (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_14 |= (~(((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_2])) ? (arr_7 [i_0 + 2] [i_1 - 1] [(signed char)1] [i_0]) : (arr_7 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_0 + 2]))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (((/* implicit */unsigned int) arr_1 [i_1 + 1]))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_9)) + ((-(((/* implicit */int) (short)-2694))))))));
                    var_15 = ((/* implicit */signed char) 1070703164231601655ULL);
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2369)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63173)) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_1 - 1] [i_1 + 1] [(signed char)3])) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (3458764513820540928LL))) : (((((/* implicit */_Bool) (signed char)111)) ? (7235917312195934229LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)-74))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(-7235917312195934229LL)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) != (var_5)));
}
