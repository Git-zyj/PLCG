/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73023
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
    var_18 = (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19351))) : (-3939343959561166771LL));
    var_19 = ((unsigned char) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) var_16))));
    var_20 = ((/* implicit */signed char) min((max((3939343959561166771LL), (((/* implicit */long long int) (-(((/* implicit */int) var_17))))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_4)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_21 = (-((+(min((((/* implicit */long long int) arr_1 [2LL])), (-2831758193205321983LL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (~(arr_0 [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) (((~(((/* implicit */int) var_14)))) == (((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_1])), (var_2)))) ? ((~(((/* implicit */int) arr_1 [16LL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))))))))));
            var_23 -= (-(((unsigned long long int) (unsigned char)27)));
            var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [(unsigned short)14] [(unsigned char)12])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))));
            arr_6 [i_0] [i_0] = arr_4 [i_1] [i_0];
        }
        for (long long int i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
        {
            arr_10 [i_0] [i_0] [(short)10] = (+(((((/* implicit */_Bool) 70368742080512LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (-3939343959561166789LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0])) - (((/* implicit */int) arr_9 [i_2 - 1] [i_0]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_26 ^= ((/* implicit */_Bool) ((unsigned short) arr_11 [i_3 + 1] [(unsigned short)12]));
        arr_13 [i_3] = ((/* implicit */long long int) arr_1 [(signed char)6]);
    }
}
