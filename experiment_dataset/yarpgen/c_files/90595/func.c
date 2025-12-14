/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90595
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (4020579441U)));
        var_14 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (-1929223272));
        var_15 |= ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0]));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)11)) ? (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) ((-469893694727267308LL) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) arr_3 [i_1] [i_1])))) : (((/* implicit */int) arr_4 [i_1]))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(((-957073241707618386LL) / (-469893694727267308LL))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(13126898585233034380ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1] [i_1])))))))) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : ((~(((/* implicit */int) ((((/* implicit */long long int) 528482304U)) > (-469893694727267314LL))))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) arr_4 [i_1])), (1589270777))))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5759)) ? (((/* implicit */long long int) 8U)) : (-957073241707618373LL))))));
    }
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((max((((((/* implicit */int) (_Bool)1)) >> (((var_2) + (691124587))))), (((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)81)))))) >> (((((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) - (192))))) - (89))))))));
}
