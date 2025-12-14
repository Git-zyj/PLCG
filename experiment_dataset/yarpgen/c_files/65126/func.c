/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65126
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 -= ((/* implicit */signed char) -1828805614);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52000))) & (var_0)))));
        var_13 = ((/* implicit */long long int) max((var_13), (var_9)));
    }
    for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_1 [i_1 + 1]))));
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2147483632))));
    }
    for (unsigned char i_2 = 1; i_2 < 7; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((short) 1795405828U));
        var_17 = ((/* implicit */signed char) arr_2 [i_2] [i_2]);
        arr_10 [i_2] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64037))))) ? ((+((~(((/* implicit */int) arr_5 [i_2] [i_2])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)22))))) ? (((/* implicit */int) ((_Bool) arr_0 [(unsigned char)13]))) : (((/* implicit */int) arr_9 [i_2 + 3] [i_2 + 3])))));
        var_18 *= min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65507)) ? (11999989406644491819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9514)))))) || (((/* implicit */_Bool) arr_0 [i_2 + 3]))))), (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) arr_1 [i_2 - 1])))));
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            var_19 -= arr_4 [i_2];
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */int) arr_7 [i_2] [i_2])), ((-(arr_11 [i_3 + 2] [i_3 + 2]))))))));
            arr_15 [5U] = ((/* implicit */unsigned short) 9223372036854775776LL);
        }
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 7; i_4 += 4) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 3] [i_4 + 3])) ? (((/* implicit */int) arr_9 [i_4 + 3] [i_4])) : (((/* implicit */int) arr_9 [i_4 - 1] [(_Bool)1]))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) <= (var_2)))))))));
    }
    var_22 = ((/* implicit */int) var_5);
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_7))))) ? (min((var_9), (((434563118056785383LL) / (var_9))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
}
