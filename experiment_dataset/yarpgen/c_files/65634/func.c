/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65634
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_11 *= ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_13 -= ((/* implicit */_Bool) 17872317064320994894ULL);
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            arr_9 [i_1] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) ((unsigned int) var_4));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17872317064320994894ULL)) ? (((/* implicit */int) arr_8 [i_2 + 3] [i_2 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63932)))))));
                var_15 = ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) <= (arr_7 [i_2 + 1]));
                var_16 &= ((/* implicit */signed char) arr_0 [i_1]);
            }
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (signed char)-32))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_18 = (~(2913265181U));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            arr_16 [i_4] [i_4] [i_5] = ((/* implicit */signed char) var_5);
            var_19 += ((/* implicit */unsigned long long int) max(((((_Bool)1) || (((/* implicit */_Bool) (signed char)27)))), (arr_4 [i_4])));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((arr_1 [i_5] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) max(((signed char)102), (((/* implicit */signed char) arr_4 [i_4])))))))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1677858980650158227ULL)) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_4]))))) ? (((/* implicit */int) arr_10 [i_4] [i_4] [3LL])) : (((/* implicit */int) ((1152921229728940032ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78)))))))), (((/* implicit */int) ((signed char) 16768885093059393388ULL))))))));
        }
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)-3))) ? (((((/* implicit */int) arr_3 [i_4])) * (((/* implicit */int) arr_3 [i_4])))) : (((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)5837), (((/* implicit */unsigned short) var_10)))))))))));
    }
    var_22 = ((/* implicit */signed char) var_3);
    var_23 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) var_3))))))));
    var_24 = ((/* implicit */unsigned char) var_5);
}
