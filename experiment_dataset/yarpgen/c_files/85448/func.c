/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85448
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
    var_17 = ((/* implicit */unsigned long long int) max((var_8), (((signed char) var_12))));
    var_18 = ((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0 + 1] [i_0 + 1] [i_3] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */short) (+(((arr_8 [i_0 + 1] [i_1] [i_2] [i_3]) & (arr_8 [i_0 - 1] [i_1 - 1] [i_2] [i_3])))));
                                arr_12 [i_1 + 1] [i_1 + 1] [i_3] [i_3] [i_4 + 3] [i_2] = ((/* implicit */unsigned long long int) var_0);
                                arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_20 [i_0 + 1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_7] [i_7] [i_7] [i_1 + 1] [i_0]), (arr_19 [i_1 + 1] [i_1 - 1] [i_6] [i_7] [i_7])))) && (((/* implicit */_Bool) var_1))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])))) == (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1 + 1]))))))));
                                arr_21 [i_1] [i_1] [i_5] [i_1] [i_7] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((unsigned short) var_2))), (arr_8 [i_1] [i_1 - 1] [i_5] [i_5]))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_0]))))), (var_7))))));
                                var_20 += ((((/* implicit */int) min((arr_16 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_0 + 1]), (arr_16 [i_1 + 1] [i_1 + 1] [i_5] [i_0])))) | ((~(((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0 + 1])))))) | (((unsigned int) var_4))));
                }
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_22 -= ((/* implicit */signed char) var_16);
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_4 [i_1 - 1] [i_0 - 1])))), (((/* implicit */int) ((unsigned char) var_0))))))));
                            arr_28 [i_0] [i_1] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_8] [i_0])) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 1] [i_9]))) & (((1442241049289837777ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) - (114ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = var_2;
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((var_14) || (((/* implicit */_Bool) var_12))))))));
}
