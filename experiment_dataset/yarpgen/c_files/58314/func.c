/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58314
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
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 = ((/* implicit */unsigned short) ((var_9) ^ (((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned short)1)))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 |= ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 990549596))));
                    var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 1] [i_0] [i_0])) != (((/* implicit */int) var_11))))), ((~(((/* implicit */int) var_1))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_5)))));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) min(((((+(var_0))) / (((/* implicit */long long int) (-(-30519098)))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-19)) ? (990549596) : (((/* implicit */int) (unsigned short)15853)))))))));
        var_17 = (signed char)-102;
        var_18 |= ((/* implicit */short) (+(max((990549596), (((/* implicit */int) var_1))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            arr_16 [i_3] [i_4] |= ((/* implicit */unsigned short) arr_14 [i_4]);
            var_19 = ((/* implicit */unsigned int) ((min((((/* implicit */int) ((short) arr_14 [i_3]))), (var_8))) ^ (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))), ((+(((/* implicit */int) var_7))))))));
        }
    }
    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_20 = min((((unsigned int) (!(((/* implicit */_Bool) 3667917894U))))), (((/* implicit */unsigned int) ((unsigned short) arr_18 [i_5] [23ULL]))));
        var_21 = ((/* implicit */short) ((unsigned long long int) (unsigned short)15854));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) arr_17 [i_5]))) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)44)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (var_9))))))));
        arr_21 [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_18 [i_5] [i_5])))) / (((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (var_3)))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        arr_25 [i_6] = (((+(((/* implicit */int) arr_24 [i_6])))) < (((/* implicit */int) arr_19 [i_6] [i_6])));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) <= (8597123205224658796LL)));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (signed char)-45))) && (((/* implicit */_Bool) (unsigned short)54351))));
            arr_29 [6ULL] [(short)4] [i_7] = ((/* implicit */signed char) 4ULL);
            var_24 = ((var_5) >> (((((/* implicit */int) ((unsigned short) arr_26 [i_7] [i_6] [i_6]))) - (53980))));
            var_25 |= ((/* implicit */short) (_Bool)1);
        }
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (arr_22 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
}
