/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73552
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4160749568U))))) & (((/* implicit */int) var_11))))) + (((((/* implicit */_Bool) var_1)) ? (((var_6) ^ (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((short) (short)16365));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            var_14 = ((/* implicit */_Bool) ((3213489999082337129LL) % (((/* implicit */long long int) 4160749568U))));
            var_15 = ((/* implicit */unsigned char) ((((unsigned int) 4398046380032LL)) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_4))))))));
            var_16 = (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])) != (((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1]))))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3213489999082337133LL)) || (((/* implicit */_Bool) (unsigned short)15)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)4956)))))))))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)10663)) || ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) : (max((134217710U), (((/* implicit */unsigned int) arr_7 [i_2]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (((arr_7 [i_2]) ? (((/* implicit */long long int) var_6)) : (arr_4 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_2]))))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_18 -= ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_3]))))), (max((((/* implicit */long long int) (+(134217728U)))), (((((/* implicit */long long int) arr_9 [i_2])) / (var_10)))))));
            var_19 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_1)))))) | (((((/* implicit */_Bool) -223478349292818098LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (var_3))))));
        }
    }
}
