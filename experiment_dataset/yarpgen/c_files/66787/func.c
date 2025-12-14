/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66787
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_12))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned short)0] = ((/* implicit */int) ((((var_4) || (var_1))) && (((((/* implicit */_Bool) 4163882282079396278ULL)) || (((/* implicit */_Bool) 4163882282079396278ULL))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned char)120)))))) >= (((((/* implicit */unsigned long long int) var_14)) ^ (14282861791630155345ULL)))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_1))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_2])))))));
                }
            } 
        } 
    } 
    var_20 = ((((((((/* implicit */int) var_9)) % (((/* implicit */int) (short)-4)))) & (var_2))) * (((/* implicit */int) var_15)));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_11 [i_3]))))) + (((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_11)))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        {
                            arr_22 [i_3] [i_3] = ((/* implicit */unsigned short) ((((((var_14) + (2147483647))) >> (((arr_16 [i_5] [i_5 - 1] [i_5 - 1]) - (2929937299U))))) <= (((/* implicit */int) ((arr_16 [i_5] [i_5 - 1] [i_5 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))))));
                            arr_23 [i_3] [i_5 - 1] [i_6] = (i_3 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */int) var_15)) - (((/* implicit */int) arr_18 [i_3])))) ^ (((((/* implicit */int) (short)256)) >> (((((/* implicit */int) arr_18 [i_3])) - (7731)))))))) : (((/* implicit */_Bool) ((((((/* implicit */int) var_15)) - (((/* implicit */int) arr_18 [i_3])))) ^ (((((/* implicit */int) (short)256)) >> (((((((/* implicit */int) arr_18 [i_3])) - (7731))) - (18696))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38875))))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-3256)) * (((/* implicit */int) (unsigned short)39208))))))))));
            }
        } 
    } 
}
