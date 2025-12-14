/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66564
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
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 0LL))))))))));
    var_12 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)28116)) : (((/* implicit */int) (signed char)11))))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (signed char)127)))))) + (2147483647))) >> (((var_1) - (12586294197536489092ULL)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_13 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_8)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-120)))) : (2993287188200181615ULL)))) || ((_Bool)0)));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                arr_7 [i_1] [i_2] [(unsigned char)2] = (((-(((/* implicit */int) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) var_8))))))) < (((/* implicit */int) arr_3 [i_0])));
                var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1]))));
            }
            arr_8 [i_0] |= ((/* implicit */unsigned int) ((((-3338182403575884580LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) (signed char)126)))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned char)56))));
            arr_12 [(signed char)0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) / (((/* implicit */int) arr_10 [i_3]))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_0])) << (((((/* implicit */int) arr_9 [i_0] [i_0])) - (11426))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_16 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((((/* implicit */int) (short)28116)) - (1)))));
            arr_17 [i_0] [i_4] [i_4] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0])), (var_4))));
        }
    }
    for (short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned char) arr_3 [(_Bool)1]);
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_19 [i_5]) ? (((/* implicit */int) (signed char)-42)) : (((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)63))))))) ? ((((~(((/* implicit */int) arr_6 [i_5] [i_5] [6ULL])))) - ((((_Bool)1) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) arr_10 [i_5])))))) : ((~(((/* implicit */int) arr_14 [i_5] [i_5]))))));
        arr_21 [(_Bool)1] [i_5] = ((/* implicit */int) ((unsigned char) var_8));
    }
    var_17 = ((/* implicit */unsigned char) -6774967330887203991LL);
}
