/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73222
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((int) (unsigned char)241))))) ? (max((var_3), (((/* implicit */unsigned long long int) (unsigned char)28)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1302348081)) ? (((/* implicit */int) (unsigned char)241)) : (arr_0 [i_0] [i_0])))) - ((+(1633264544045938341ULL)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned char)67);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_16 ^= ((((/* implicit */_Bool) min((min((((/* implicit */signed char) var_0)), (var_7))), (((/* implicit */signed char) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned char)246)))))))) ? (((unsigned int) 1939557734U)) : (((((12U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))) ? (503316480U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34318))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 18446744073709551615ULL);
            var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (((signed char) 14165933691679447301ULL))))) ? (503316490U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((((/* implicit */int) var_7)) + (arr_0 [i_0] [i_1]))) : (((/* implicit */int) var_12)))))));
        }
    }
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)10)))) ^ (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) - (8415019201901199546ULL)));
    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34)))))))));
}
