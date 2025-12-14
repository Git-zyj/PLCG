/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94492
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
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_8)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((signed char) (unsigned char)3)), (var_1))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) var_0);
                }
                var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-5693792838244885909LL)))) ? (((((_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (short)-20500)) : (((/* implicit */int) (signed char)7)))) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [(short)4] [i_3] [i_4] [(short)8] [i_5] = ((/* implicit */_Bool) (~((~(arr_1 [i_0 - 2])))));
                                arr_19 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [(unsigned char)8] [i_5] [i_5] [i_5])) * (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) max((var_11), (((/* implicit */short) arr_10 [i_0] [i_3] [i_0]))))) : (((/* implicit */int) (unsigned short)12288)))))));
                                var_21 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13421816929450418668ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)31))))), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_4 [(unsigned char)15] [(_Bool)1])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((-7819363598580897089LL) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_3] [i_0] [i_0])))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
