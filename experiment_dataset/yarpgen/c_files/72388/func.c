/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72388
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_18 &= ((/* implicit */unsigned int) (+(0ULL)));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-26508)) + (((/* implicit */int) arr_2 [i_0 - 1]))));
        }
        for (short i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            arr_7 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_0 + 1] [i_2]));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0]))))) + (((/* implicit */int) arr_0 [i_0 - 1]))));
            arr_8 [i_0] = ((/* implicit */short) (+(1551223268)));
            arr_9 [i_0 - 1] [(_Bool)1] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_2)))));
        }
        for (short i_3 = 3; i_3 < 21; i_3 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)6254)) / (((/* implicit */int) ((unsigned char) (_Bool)1)))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (unsigned short)16384))))))));
            var_23 -= ((/* implicit */_Bool) 2967542266U);
        }
        for (short i_4 = 3; i_4 < 21; i_4 += 4) /* same iter space */
        {
            var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_4 - 2] [20ULL])) ? (13931227322278361501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 - 2] [(_Bool)1])))));
            arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) (unsigned char)0);
        }
        var_25 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned char)77))) & (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_17 [i_0] = ((/* implicit */signed char) var_4);
    }
    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) var_4))), (min(((unsigned short)462), (((/* implicit */unsigned short) var_11))))))) ? (((/* implicit */int) ((short) min((var_4), (((/* implicit */unsigned short) var_11)))))) : (((/* implicit */int) var_10))));
    var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)25357), (((/* implicit */unsigned short) var_8)))))) / (((long long int) 1958542324)))));
    var_28 |= ((/* implicit */int) 34947015U);
}
