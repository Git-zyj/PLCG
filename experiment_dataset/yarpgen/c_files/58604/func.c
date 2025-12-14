/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58604
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_4))))));
        var_11 ^= ((/* implicit */short) max((4692042273350462577ULL), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), ((-(arr_1 [(unsigned short)6] [12U]))))))));
        arr_2 [(signed char)11] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) var_3)) * (7376000343936578231ULL)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */int) (unsigned short)4729)) % (((/* implicit */int) arr_3 [i_1 + 2])))) : ((-((~(((/* implicit */int) arr_4 [i_1])))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            var_13 = ((/* implicit */signed char) (-(var_6)));
            var_14 = ((var_8) << (((max((min((arr_5 [(short)15] [i_2]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) arr_3 [(unsigned char)11])))) - (13279996U))));
        }
        var_15 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((-316723654) & (((/* implicit */int) (signed char)56)))))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [7])) ? (((arr_6 [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)26501))))))) ? (arr_6 [i_1 + 2]) : (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1] [i_1 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)64506)))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_18 *= ((/* implicit */short) arr_3 [i_3 + 2]);
        /* LoopSeq 1 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_4 - 1])) > (((/* implicit */int) (signed char)-124))));
            var_20 = ((/* implicit */long long int) var_5);
        }
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [19LL])) ? (((/* implicit */int) arr_10 [i_3 + 2])) : (((/* implicit */int) arr_9 [i_3 + 2] [i_3] [(_Bool)1]))));
    }
    var_22 = ((/* implicit */signed char) ((int) var_2));
}
