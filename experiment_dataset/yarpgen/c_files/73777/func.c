/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73777
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
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) 301714408U)) % ((-9223372036854775807LL - 1LL))));
    var_20 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (2032) : (((/* implicit */int) (short)-6))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 10; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [0LL] [0LL] [i_1] [i_0] [0LL] [i_1] [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (-9223372036854775806LL)));
                            arr_14 [8ULL] [8ULL] [i_2] [i_2] [i_4] [i_4] [9] = ((/* implicit */unsigned int) arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_2]);
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (-2476290554426088478LL) : (((/* implicit */long long int) (-(((/* implicit */int) (short)23169)))))));
                            var_23 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1] [(unsigned short)5]);
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 2])) <= (((/* implicit */int) arr_10 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 - 3]))))), (arr_11 [i_0 - 1] [i_0] [i_0 + 2])));
                            var_24 = ((/* implicit */unsigned long long int) ((var_17) % (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 0ULL)) ? (arr_18 [i_2] [0] [i_2]) : (((/* implicit */int) var_8))))))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) 1966158644U)), (9223372036854775807LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_3])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_0 - 2]))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18))))), (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */long long int) var_2)) : (var_6)))))) ? (max((((/* implicit */unsigned long long int) ((15374198204609838518ULL) != (((/* implicit */unsigned long long int) 9223372036854775807LL))))), (((18446744073709551590ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) arr_0 [i_0])), (var_17))))))));
                    }
                } 
            } 
        } 
    }
}
