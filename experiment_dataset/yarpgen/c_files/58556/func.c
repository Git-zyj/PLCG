/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58556
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
    var_19 = (-(((((/* implicit */_Bool) min((3LL), (((/* implicit */long long int) (_Bool)1))))) ? ((+(1472992918U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))))));
    var_20 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_21 ^= ((/* implicit */_Bool) var_7);
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_22 = (~(((/* implicit */int) ((unsigned short) arr_3 [i_0 + 1] [i_1 + 1]))));
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */short) var_7)), (arr_5 [i_0])))), ((+(arr_4 [(_Bool)1] [(unsigned short)3] [(_Bool)1])))))) % ((+(arr_1 [3] [i_0])))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min(((+(((((/* implicit */int) (_Bool)1)) - (-565087121))))), ((+(((/* implicit */int) (short)-17560)))))))));
            arr_7 [(short)5] [i_0] [(unsigned short)2] = (_Bool)1;
        }
        for (int i_2 = 4; i_2 < 18; i_2 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_5 [i_0])))), (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
            var_25 = ((/* implicit */unsigned char) arr_2 [(_Bool)0]);
            var_26 |= ((/* implicit */short) (-(((/* implicit */int) max((arr_10 [i_0 - 3] [i_2]), (arr_10 [i_0 - 2] [i_2]))))));
        }
    }
    for (unsigned int i_3 = 4; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_27 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_3 - 3] [i_3 - 1])), (var_4)))) ? (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 3] [i_3])) ? (((/* implicit */int) arr_3 [i_3 - 2] [i_3 - 1])) : (((/* implicit */int) (unsigned char)254)))) : (((/* implicit */int) arr_3 [i_3 - 2] [i_3 - 4])));
        arr_14 [i_3] = ((/* implicit */int) var_13);
        arr_15 [3LL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-13))))) : (var_16)));
        arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)42839)) : (max((0), (-565087111)))))) ? ((-((~(arr_12 [(unsigned short)15]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
    }
}
