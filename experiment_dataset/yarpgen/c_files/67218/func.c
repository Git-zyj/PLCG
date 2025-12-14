/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67218
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (+(((/* implicit */int) (short)2068))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 677283629350504150LL))))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (arr_1 [i_0] [i_0]))))) >> (((/* implicit */int) ((677283629350504160LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3584)))))))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) ? (((arr_1 [i_1] [i_1 - 1]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : ((+(arr_1 [i_1 - 1] [i_1 + 1])))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_22 += ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 1] [i_1 + 1]);
            var_23 = ((/* implicit */unsigned short) var_2);
            var_24 = var_13;
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 3) 
                    {
                        {
                            arr_13 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) max((9175732621036783614ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1])) < (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_4] [i_3])))))))));
                            var_25 *= ((/* implicit */unsigned long long int) arr_2 [i_1 + 1]);
                            var_26 &= arr_1 [i_1] [i_1];
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) (!((!((_Bool)1)))));
                arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)121))))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_2] [i_3] [i_3] [i_3]))));
                var_29 += ((/* implicit */unsigned long long int) var_17);
            }
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    arr_23 [i_7] [i_7] [i_2] [2LL] [i_7] = ((/* implicit */unsigned char) 2261543039U);
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_11))));
                }
                arr_24 [i_1 + 1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13085))) != (137438953471ULL)));
                var_31 ^= ((/* implicit */int) var_11);
            }
        }
        arr_25 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49311))));
    }
}
