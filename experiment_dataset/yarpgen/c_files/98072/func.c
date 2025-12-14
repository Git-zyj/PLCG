/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98072
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
    var_14 = var_10;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_11 [i_3] [i_1] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 2])) : (arr_9 [0] [i_2] [i_2] [i_0])))));
                        arr_12 [i_3] [i_3] [i_2] [i_3] [i_2] [(signed char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (unsigned short)65535)))))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) ^ (18446744073709551615ULL))), (((((/* implicit */_Bool) arr_7 [6U] [i_1] [i_2] [5ULL])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))) : (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1] [i_2] [i_0 + 1]))));
                    }
                    arr_13 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-24547)) ? (1ULL) : (((/* implicit */unsigned long long int) 1298319376))));
                }
            } 
        } 
    } 
    var_15 = 18209727724644702892ULL;
}
