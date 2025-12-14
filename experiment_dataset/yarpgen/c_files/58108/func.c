/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58108
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
    var_15 = ((/* implicit */long long int) (+(max((18446744073709551601ULL), (((/* implicit */unsigned long long int) var_3))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_10 [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_3 - 1]))) <= (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [(_Bool)1] [(unsigned char)10] [(unsigned char)6] [i_3 - 2] [i_3] [i_3] [(unsigned char)6])) : (((/* implicit */int) arr_7 [5ULL] [i_1] [5ULL] [7LL])))), ((+(((/* implicit */int) (signed char)1))))))));
                                var_16 = ((/* implicit */long long int) (~((~(((/* implicit */int) ((((/* implicit */_Bool) 2418962473U)) || (((/* implicit */_Bool) (signed char)1)))))))));
                                var_17 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(arr_2 [i_1])))) ? (var_8) : (((/* implicit */unsigned long long int) ((arr_2 [i_3]) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2 - 3] [3LL] [(signed char)7] [i_4]))))))))));
                                var_18 = ((/* implicit */unsigned int) min((((unsigned long long int) (+(0U)))), (min((((/* implicit */unsigned long long int) (-(4294967290U)))), (((11793586204003231715ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_19 -= ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((((/* implicit */_Bool) (unsigned char)25)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [(signed char)13] [(short)15] [12LL] [i_0]), (((/* implicit */unsigned char) arr_8 [i_0] [(short)0] [i_0] [(_Bool)1] [i_0] [i_0] [i_1]))))))))));
                var_21 = ((/* implicit */long long int) var_10);
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(signed char)17] [i_1] [(short)14])) ? (((/* implicit */int) max((((((/* implicit */_Bool) (signed char)1)) || (((/* implicit */_Bool) (unsigned char)218)))), ((!(var_4)))))) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0] [i_0]))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) var_8);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_0)))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) var_2))));
}
