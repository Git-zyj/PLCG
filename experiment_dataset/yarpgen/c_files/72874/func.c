/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72874
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */long long int) 3U)), (var_11))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) (+((~(var_5)))));
                                var_19 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_9 [i_0] [0LL] [0LL]))))));
                                var_20 ^= ((/* implicit */unsigned short) (+((~((+(arr_1 [14LL])))))));
                                arr_14 [(unsigned short)9] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65531)), (arr_9 [0LL] [0LL] [0LL])))) ? (arr_7 [1ULL] [1ULL] [1ULL] [1ULL]) : (17301469019505546010ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7357902199941394767LL)) && (((/* implicit */_Bool) -7797446010748590057LL))));
                    var_22 += ((/* implicit */long long int) 3527379776U);
                }
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                arr_27 [5U] [5U] [16U] [5U] [16U] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)28615)), (18446744073709551615ULL)));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)77)) && (((/* implicit */_Bool) arr_0 [i_7 - 1])))))) >= (((((/* implicit */_Bool) arr_13 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (14642528619677784418ULL))))))));
                                arr_28 [0LL] [1ULL] [11LL] [1ULL] [16ULL] &= var_4;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
