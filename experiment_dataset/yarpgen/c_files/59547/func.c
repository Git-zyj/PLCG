/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59547
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
    var_18 = ((/* implicit */int) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_19 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) > ((~(4026531840U)))))), ((-(1U)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                arr_9 [5U] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_0 [i_0])))))) | (((((/* implicit */_Bool) ((18446744073709551614ULL) & (((/* implicit */unsigned long long int) 1317131654))))) ? (3150670622U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((~(1144296673U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
            }
            var_21 = ((/* implicit */_Bool) arr_0 [i_0]);
        }
        var_22 = ((/* implicit */unsigned short) ((61572651155456LL) | (((/* implicit */long long int) ((max((1343444684), (((/* implicit */int) arr_0 [i_0])))) + (((((/* implicit */int) (_Bool)1)) - (arr_5 [i_0]))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) 3150670622U);
        var_24 = ((/* implicit */long long int) ((1264292121U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-27612)))));
    }
}
