/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87245
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [13LL] [i_0] [9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [14])) ? (max((var_12), (18446744073709551615ULL))) : (((((/* implicit */_Bool) arr_4 [(short)17] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_9 [i_0] [(unsigned char)7] [i_0] [(short)2] [0U] [i_0])))))) && (((/* implicit */_Bool) max((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_7)))))));
                            var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) ? (3842744623U) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (short)0))))))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [7] [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)32)))) : (((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))), ((~(((((/* implicit */_Bool) 7502414335452734526LL)) ? (((/* implicit */unsigned long long int) -2147483622)) : (3302067021200481583ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_2))));
}
