/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83592
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
    var_13 = ((/* implicit */signed char) ((((max((((/* implicit */long long int) (signed char)33)), (var_0))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (unsigned short)7168)) : (((/* implicit */int) (signed char)-23))))))) || (((/* implicit */_Bool) ((unsigned int) (signed char)-22)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_2 - 3] [i_0] = var_1;
                    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) >= (arr_8 [i_2 - 2] [i_2 - 3] [i_2 + 2])));
                }
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        {
                            arr_15 [i_0] [i_3] [i_0] [i_4 - 1] [i_3 + 1] [i_0 + 2] = ((/* implicit */signed char) ((arr_7 [i_1 + 1]) & (-6727922067809859994LL)));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (signed char)21))));
                        }
                    } 
                } 
                arr_16 [i_1 + 1] [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0 + 4] [i_1 - 1] [i_0 + 3])))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_14 [i_0]))));
            }
        } 
    } 
}
