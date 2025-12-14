/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84289
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (var_9)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                var_11 = ((/* implicit */unsigned short) max((((min((arr_3 [i_0] [i_0 + 3] [i_0]), (arr_3 [i_0] [i_0] [i_0]))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_1 + 4] [i_0])), (17705115567159726917ULL))) : (((/* implicit */unsigned long long int) 7775986568660422678LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (max((var_8), (((/* implicit */long long int) (signed char)-75)))))))));
                var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (741628506549824680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((~(var_6))) : ((-(arr_4 [i_0] [i_0 + 4]))))), (((/* implicit */int) min((((741628506549824722ULL) != (((/* implicit */unsigned long long int) 3259216372U)))), ((!(((/* implicit */_Bool) -7775986568660422669LL)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) 862244747431134089ULL);
                            arr_12 [i_2] [i_2] [i_2] [i_0] = var_9;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (long long int i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4] [i_6])) >> (((((/* implicit */int) var_1)) + (63)))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_0))))) - (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_18 [i_4] [i_4] [i_4])), (var_8))) < (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-3)))))))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((4531472208630991763LL) / (((/* implicit */long long int) ((/* implicit */int) max((arr_15 [i_4] [i_4]), (arr_20 [i_4] [i_4]))))))) << (((min((((/* implicit */long long int) 482052212)), (((((/* implicit */_Bool) -8935566515783034161LL)) ? (((/* implicit */long long int) 4294967295U)) : (-7775986568660422655LL))))) - (482052205LL)))));
                }
            } 
        } 
    } 
}
