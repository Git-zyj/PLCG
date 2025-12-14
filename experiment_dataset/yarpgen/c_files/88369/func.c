/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88369
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
    var_20 = ((/* implicit */long long int) ((short) (unsigned char)7));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)14556)), (0U)))), ((~(0ULL)))))) ? (var_5) : (var_5)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_22 *= ((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */long long int) (+(4294967289U))))));
        var_23 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((min((2305843009213693944LL), (((/* implicit */long long int) (signed char)116)))) > (((/* implicit */long long int) (+(((/* implicit */int) var_17)))))))), (min((arr_0 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) / (arr_1 [i_0]))), (min((((/* implicit */long long int) (short)-6692)), (9007199253692416LL)))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max(((unsigned short)26287), ((unsigned short)13732))))));
        arr_6 [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((((arr_4 [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))))) + (9223372036854775807LL))) >> ((((-(arr_4 [i_1] [i_1]))) - (1823789998057976583LL)))));
    }
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        arr_10 [i_2 - 1] = arr_8 [i_2];
        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_1 [i_2 + 1]) | (-1498347750247177569LL))))));
        var_26 = ((/* implicit */unsigned short) 8116685059792680582ULL);
    }
    var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) >= (max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-7)), (var_3)))), (var_10)))));
}
