/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90468
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4015677521U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */long long int) var_2)), (var_14))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */int) (unsigned short)40421);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-2976112880141267675LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)113)))))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)-104)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [6])) || (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_3 [i_0])))))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_13 [(unsigned char)17] [(unsigned char)17] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-104)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-25), ((signed char)-84))))) : (max((((/* implicit */unsigned long long int) arr_1 [20LL])), (18186672801700083568ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)8)) / (((/* implicit */int) arr_12 [i_3 - 3])))))));
        arr_14 [i_3] [i_3] = (((-(max((((/* implicit */int) (unsigned char)47)), (var_8))))) / ((-(-1878435796))));
        arr_15 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-15), (arr_5 [i_3 + 4] [i_3 + 4] [i_3 + 4] [14LL]))))) : (((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (3138742722U))))))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) max((((min((var_8), (var_11))) + (((((/* implicit */_Bool) 1659101504)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))))), (max((var_0), (min((-755121122), (var_11)))))));
        arr_20 [i_4 + 2] = ((/* implicit */unsigned int) var_3);
    }
    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? ((-(var_13))) : (1559838451U)))));
    var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (signed char)-105)))) & (var_1))) ^ ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)9602))))))));
}
