/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79172
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
    var_19 = ((/* implicit */unsigned int) ((long long int) (~((~(((/* implicit */int) var_7)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [4LL] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (min((6106170009091629103ULL), (((/* implicit */unsigned long long int) var_6)))) : (6106170009091629109ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_16)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + (var_10)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (12U) : (9U))) : (((12U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1]))))))))));
        arr_5 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0])))) || (((/* implicit */_Bool) 2147483638)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_3);
            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2])))))))), (((unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-13)))))));
        }
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) var_13);
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                arr_16 [i_1] [i_1] [i_4] = ((/* implicit */signed char) -5);
                arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned short) 5748528224491656968LL));
            }
            arr_18 [i_1] [i_1] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)239)))), ((+(((/* implicit */int) var_3))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_21 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_5] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_11 [i_1])));
            arr_22 [i_5] [i_1] [i_5] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_4)))) / (((/* implicit */int) ((arr_19 [i_1]) > (((/* implicit */int) (unsigned char)21)))))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((12340574064617922512ULL) >> (((((/* implicit */int) var_12)) - (10520))))))));
        }
        arr_23 [(short)6] [(short)6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) ? (12340574064617922512ULL) : (((/* implicit */unsigned long long int) 4294967277U))))) && (((/* implicit */_Bool) (+(12340574064617922505ULL))))));
    }
    for (long long int i_6 = 2; i_6 < 11; i_6 += 1) 
    {
        var_23 &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_11 [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) arr_25 [12])))))) : (((((/* implicit */_Bool) arr_12 [i_6 - 2] [i_6])) ? (var_18) : (var_18))))));
        arr_27 [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1775580344)) && (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) (~(var_18)))) ? (arr_11 [i_6]) : (arr_14 [i_6] [i_6])))));
    }
}
