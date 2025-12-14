/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86563
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_2 [i_0]))));
        var_20 = ((/* implicit */unsigned char) var_18);
        var_21 += ((/* implicit */unsigned char) min(((-(arr_2 [i_0 - 2]))), ((~(arr_2 [i_0 - 2])))));
    }
    var_22 = ((/* implicit */unsigned char) max((min((min((((/* implicit */unsigned int) var_10)), (2926068900U))), (((/* implicit */unsigned int) max((((/* implicit */int) var_18)), (var_17)))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) <= (17583185187681832164ULL)))), (var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    for (int i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_1] [i_2] [0] [i_3 + 1] [0])) || (((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_5)))))) ? (((min((((/* implicit */unsigned long long int) var_13)), (arr_5 [i_4 + 1] [i_2]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (863558886027719452ULL)));
                            var_24 += ((/* implicit */unsigned long long int) arr_7 [i_1]);
                            var_25 ^= ((/* implicit */_Bool) var_18);
                            var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_1] [i_4 - 2])) || (((/* implicit */_Bool) min((((/* implicit */long long int) min((-74474127), (((/* implicit */int) (unsigned char)60))))), (arr_8 [i_1]))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((unsigned char) var_8);
            }
        } 
    } 
}
