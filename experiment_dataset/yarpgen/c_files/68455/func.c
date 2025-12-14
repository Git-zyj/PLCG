/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68455
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
    var_17 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((((/* implicit */_Bool) 5994972404853015144LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6371))) : (-3668030649241232416LL))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                var_19 = ((/* implicit */int) min((((/* implicit */long long int) ((var_12) >> (((5994972404853015171LL) - (5994972404853015168LL)))))), (5994972404853015176LL)));
                var_20 -= ((/* implicit */signed char) arr_3 [i_1]);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_5 [i_2 - 2])))) ? (((/* implicit */int) (_Bool)1)) : ((-(arr_5 [i_2 + 2])))));
                var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)48951)) ? (5506575543519563842ULL) : (12940168530189987767ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0 + 1]))));
                var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (signed char)15)))));
            }
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 4; i_4 < 15; i_4 += 2) 
            {
                var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)15)), (3515764668U)));
                var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_14 [i_0 + 2]))))) ? ((~((~(((/* implicit */int) (unsigned char)139)))))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
            }
            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5994972404853015161LL)) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_0 - 1]))))) ? (((long long int) 3668030649241232420LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_27 = ((unsigned short) -2172840110211071924LL);
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(2172840110211071923LL))), (((2172840110211071913LL) >> (((((/* implicit */int) arr_3 [i_0 - 3])) - (24513)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), ((_Bool)1))))) : (((((/* implicit */_Bool) (signed char)120)) ? (-5994972404853015176LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36450)))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_3])), ((unsigned short)49653)))))) : (2065396277))))));
            arr_20 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (~(var_10)));
        }
        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 453756001)) ? (-5994972404853015191LL) : (((/* implicit */long long int) arr_7 [i_0 + 2]))))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (arr_7 [i_0 + 1]) : (arr_7 [i_0 - 2]))));
    }
}
