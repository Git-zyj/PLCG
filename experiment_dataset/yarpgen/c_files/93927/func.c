/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93927
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_18 = (~(arr_4 [i_0]));
                                var_19 ^= ((/* implicit */unsigned char) var_9);
                                var_20 = ((/* implicit */int) 5LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_21 += (_Bool)1;
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) 3529302895781487265LL))));
                                arr_19 [i_0] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_11 [i_0] [i_0] [i_2] [i_2] [i_5] [i_6]) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_6]))));
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_6 - 1] [i_1] = (i_2 % 2 == 0) ? (((/* implicit */long long int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))) | (4ULL))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_0] [i_2] [i_6 + 2])) >> (((((/* implicit */int) arr_12 [i_6] [i_5] [i_0] [i_2] [i_1] [i_0])) + (99)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [8] [(unsigned char)6] [i_6 + 2])) ^ (((/* implicit */int) var_11))))) : (((unsigned int) arr_9 [i_0] [i_2] [i_1] [i_0] [i_5] [i_6 - 2])))) - (36190U)))))) : (((/* implicit */long long int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))) | (4ULL))))) << (((((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_0] [i_2] [i_6 + 2])) >> (((((/* implicit */int) arr_12 [i_6] [i_5] [i_0] [i_2] [i_1] [i_0])) + (99)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [8] [(unsigned char)6] [i_6 + 2])) ^ (((/* implicit */int) var_11))))) : (((unsigned int) arr_9 [i_0] [i_2] [i_1] [i_0] [i_5] [i_6 - 2])))) - (36190U))) - (18656U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) / ((-(4294967293U)))));
    var_24 = ((/* implicit */_Bool) ((unsigned char) 784267049));
    var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
}
