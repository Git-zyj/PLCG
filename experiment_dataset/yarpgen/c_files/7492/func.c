/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7492
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
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_11)), (arr_0 [i_0 - 1]))) ^ (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (short)27058);
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) 4623255783724046026LL);
            var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (short)7725))) > (((6644370436601158710LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))))) ? (min((((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned short)48933)) : (((/* implicit */int) arr_6 [i_1])))))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_1)))))));
            var_21 = ((/* implicit */long long int) arr_6 [i_2]);
            /* LoopSeq 2 */
            for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3] [i_3 + 2]))))) ? (-4623255783724046014LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)15251))))) ? (((/* implicit */int) arr_9 [i_3] [i_3 + 2] [i_3] [i_3 + 2])) : (((((/* implicit */_Bool) arr_5 [i_1] [i_3])) ? (((/* implicit */int) (short)18835)) : (((/* implicit */int) (unsigned short)48958)))))))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48937)) ? (min((((/* implicit */long long int) arr_6 [i_1])), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((-5873878327622021106LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47638)))))))))) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 2])))) : (((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_1])), (var_6))))))));
            }
            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                var_24 |= ((/* implicit */short) var_9);
                var_25 = ((/* implicit */long long int) min((var_25), (min((var_14), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22708)))))) >= (-4950308848406297688LL))))))));
                var_26 = ((/* implicit */long long int) var_7);
            }
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)18004))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_16))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (unsigned short)9716))));
        }
        arr_15 [i_1] = max((((((/* implicit */_Bool) (unsigned short)8176)) ? (4950308848406297688LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1])))))))), (max((var_5), (var_8))));
        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    }
    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
    {
        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) (unsigned short)48958)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6]))) : (arr_12 [i_6] [i_6] [i_6])))))) ? (var_5) : (arr_1 [i_6 + 1])));
        var_33 = ((/* implicit */unsigned short) arr_17 [i_6]);
    }
}
