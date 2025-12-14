/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71794
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned short)26)))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_7)), (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (min((((var_10) ? (var_1) : (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) 5968143915395069016ULL)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (unsigned char)170)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) 9567716750510199502ULL);
                    var_14 ^= ((/* implicit */_Bool) (+((((~(var_8))) ^ (((/* implicit */long long int) min((((/* implicit */int) arr_3 [12ULL])), (arr_1 [i_2] [i_2]))))))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (short)-9813)), ((unsigned short)26)))), (min((((/* implicit */int) max((arr_6 [2U] [(signed char)14] [i_0]), ((unsigned short)65506)))), ((-(((/* implicit */int) (unsigned char)133)))))))))));
                    var_16 &= ((/* implicit */signed char) min((((/* implicit */unsigned short) max((arr_4 [i_0 + 3]), (((/* implicit */short) ((-546444441) <= (((/* implicit */int) var_7)))))))), ((unsigned short)48694)));
                }
            } 
        } 
    } 
}
