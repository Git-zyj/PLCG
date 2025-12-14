/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61529
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
    var_14 = ((/* implicit */unsigned short) max((max((((/* implicit */signed char) ((_Bool) var_4))), (var_9))), ((signed char)-73)));
    var_15 -= ((/* implicit */long long int) 7870155887691012591ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)72))))) ? (((((/* implicit */_Bool) var_6)) ? (576456354256912384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [6ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)5))))));
        arr_3 [i_0] = ((/* implicit */short) -1);
        var_17 *= ((/* implicit */unsigned short) arr_2 [i_0]);
        var_18 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_19 *= ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_5 [(short)7] [i_2]) : (((/* implicit */int) var_8))))) ? ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64833)) || (((/* implicit */_Bool) arr_9 [10ULL]))))) : (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))) : (((/* implicit */int) var_9))));
            arr_11 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (short)23689)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))));
        }
        var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (2839016074057756132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) : (var_5)));
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (576456354256912384ULL));
        arr_15 [12ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) 9223372036854775801LL)) : (877752683142834060ULL)));
    }
    var_22 |= var_11;
    var_23 = ((/* implicit */unsigned short) var_11);
}
