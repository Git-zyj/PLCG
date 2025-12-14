/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71333
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) (-(3566964224U)));
            var_17 &= ((/* implicit */long long int) 3166807965U);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) (signed char)-111);
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)48511))));
            arr_10 [i_0] = ((/* implicit */unsigned int) var_0);
            arr_11 [i_2] = ((/* implicit */long long int) (+(3166807974U)));
        }
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) (unsigned char)195)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))))))));
            arr_15 [i_0] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
            arr_16 [i_0] = ((((/* implicit */_Bool) 1128159347U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1128159317U)) ? (((/* implicit */int) (unsigned short)17032)) : (((/* implicit */int) (unsigned char)94)))) <= (((/* implicit */int) (unsigned char)88)))))) : (((((/* implicit */_Bool) 3166808008U)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
        }
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (long long int i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_5))))));
                arr_21 [i_4] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_0)))));
                var_21 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((long long int) var_9));
    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 16777184)))), ((!(((/* implicit */_Bool) (unsigned short)255)))))))) + (max(((-(var_11))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1106601399U))))))));
}
