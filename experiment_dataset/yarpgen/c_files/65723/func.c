/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65723
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_9 [i_1])))) : (((/* implicit */int) arr_6 [i_1] [i_3]))))) ? (((var_11) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_12 [i_1])))) : (((/* implicit */int) arr_5 [i_1]))));
                        arr_15 [i_1] [i_1] [i_4] = min((max((min((var_3), (((/* implicit */unsigned long long int) arr_9 [i_1 + 1])))), (((/* implicit */unsigned long long int) arr_13 [i_1] [9ULL] [i_1] [i_1 - 1])))), (var_2));
                        var_19 = ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))) : (var_3));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */signed char) (_Bool)1);
        var_20 -= ((/* implicit */_Bool) var_8);
    }
    var_21 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) max((((arr_0 [i_7]) ^ (arr_0 [i_7]))), (arr_0 [i_6])));
                    var_23 = ((/* implicit */unsigned char) (!((_Bool)1)));
                    var_24 = ((min((((/* implicit */int) ((_Bool) 3124536684313268427LL))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_6])) : (((/* implicit */int) var_6)))))) <= (((/* implicit */int) (_Bool)1)));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_7] [i_6] [i_5]))) ? ((((_Bool)1) ? (arr_21 [i_5] [(signed char)4] [i_7]) : (var_2))) : (((var_16) ? (arr_21 [i_5] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned char) ((_Bool) arr_25 [i_5] [i_8] [i_8]))), (var_0))));
                    arr_26 [i_6] [i_8] = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6]))))), ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) var_17)))))));
                    var_27 |= ((/* implicit */unsigned char) ((signed char) arr_2 [i_5] [i_6]));
                    var_28 = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) max((arr_19 [i_6] [i_6]), (((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (var_2)))))));
                }
                var_29 = var_16;
            }
        } 
    } 
}
