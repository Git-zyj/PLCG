/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80823
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17262)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17262)))))) ? (((((/* implicit */_Bool) var_3)) ? (69269232549888ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */unsigned long long int) arr_2 [i_0])) % (var_4)))));
                var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (69269232549888ULL) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48283))) : (69269232549888ULL))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0]) & (arr_6 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)17259)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) var_10))))))))));
                arr_7 [i_0] [i_1] [17ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)124)) || (((/* implicit */_Bool) (unsigned short)49120)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (unsigned short)17262)) : (var_7))) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 69269232549888ULL)) ? (arr_10 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)32512))))))));
                arr_13 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))))) / (arr_8 [i_2] [i_3]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_3] [i_2])))))));
            }
        } 
    } 
}
