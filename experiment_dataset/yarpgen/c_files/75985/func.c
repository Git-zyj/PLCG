/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75985
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_13))));
        var_20 = ((unsigned char) (~(((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_3 [i_0 + 3] [i_0] = ((/* implicit */unsigned char) (signed char)-6);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) (_Bool)1);
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)157))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            var_22 = ((/* implicit */long long int) var_6);
            arr_9 [i_2 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_2 [i_1] [i_1])))))))) ? (((((/* implicit */_Bool) (unsigned short)62177)) ? (((/* implicit */long long int) ((/* implicit */int) ((-9075664004576479792LL) == (7718704011844029446LL))))) : (9075664004576479785LL))) : (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)51464)))) & (((/* implicit */int) ((_Bool) -9075664004576479792LL))))))));
        }
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) arr_5 [(_Bool)1]);
        var_24 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_5 [i_3])))));
    }
    var_25 = ((/* implicit */signed char) (((+(((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) var_5))));
}
