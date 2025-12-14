/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76304
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)59)) < (((/* implicit */int) var_3)))))));
        var_12 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((unsigned char)109), (((/* implicit */unsigned char) ((_Bool) 2488269020534323809LL))))))));
    }
    for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */long long int) arr_2 [i_1 + 3])) : (var_4))), (((/* implicit */long long int) var_10)))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_14 += ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) < (var_4))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned int) (signed char)109)), (var_0)))));
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_6 [i_2] [i_1 + 2] [i_2]))));
            var_16 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) var_8)) ? (((unsigned int) (unsigned char)109)) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)109)) / (511))))))));
            var_17 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) 3362970371U)), (((18446744073709551601ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) var_2))));
        }
        var_18 += ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_1)) - (27221)))))) : (arr_2 [i_1]));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (_Bool)1))));
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_11 [i_1] [15ULL] [i_1 + 3] [15ULL])))) ? (((arr_11 [i_1 + 1] [i_1] [i_1] [i_1 + 3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (arr_6 [i_1] [(short)13] [i_1])))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_2 [i_1])), (15272790677746907037ULL))), (((((/* implicit */unsigned long long int) var_4)) ^ (arr_7 [i_1 + 3] [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 6; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */signed char) ((((arr_7 [17] [i_5] [i_5]) - (((/* implicit */unsigned long long int) -14)))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [2U])))))));
        var_21 = ((/* implicit */short) (signed char)104);
    }
    var_22 -= ((/* implicit */int) ((unsigned long long int) var_6));
    var_23 = ((/* implicit */unsigned int) var_10);
    var_24 = ((/* implicit */unsigned int) ((unsigned long long int) var_6));
}
