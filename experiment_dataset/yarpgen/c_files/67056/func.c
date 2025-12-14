/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67056
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)25356), (var_4)))) ? (((((/* implicit */_Bool) -1LL)) ? (2657615888U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)25369)))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) (short)-19611))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1024))) + (1489947485U)))))) : (((((/* implicit */_Bool) var_7)) ? (max((var_6), (((/* implicit */long long int) 2147483630)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-1024)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 &= ((/* implicit */_Bool) -2147483610);
        var_16 -= ((/* implicit */short) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25357)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (3201447023U)));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) << (((2642551333U) - (2642551321U))))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_17 += ((/* implicit */long long int) 193223836U);
        var_18 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((1489947485U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (short)1024)) : (((((/* implicit */int) max((arr_0 [i_2]), ((short)-20685)))) & (((/* implicit */int) ((((/* implicit */_Bool) (short)3)) || (((/* implicit */_Bool) (short)0)))))))));
        var_19 |= ((/* implicit */unsigned int) (short)-27421);
        var_20 = ((/* implicit */int) max((877116959U), (((/* implicit */unsigned int) (unsigned short)32768))));
        var_21 = ((/* implicit */short) ((((arr_4 [i_2]) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)16388)) ? (2147483607) : (((/* implicit */int) (unsigned short)44102)))), (min((((/* implicit */int) (signed char)127)), (arr_4 [i_2])))))) : (min((arr_6 [i_2] [i_2]), (((/* implicit */unsigned int) (short)-6900))))));
    }
    var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)36269)), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (2440782865179769828LL))), (((/* implicit */long long int) var_12))))));
    var_23 = ((/* implicit */signed char) ((((((/* implicit */int) ((short) 1956134894U))) + (((((/* implicit */_Bool) var_10)) ? (-2147483630) : (((/* implicit */int) var_4)))))) / (var_8)));
}
