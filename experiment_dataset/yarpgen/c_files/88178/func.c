/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88178
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1 - 2] [i_1] &= ((/* implicit */unsigned long long int) var_10);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    arr_11 [i_0] [i_1 - 2] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_14)) % (((/* implicit */int) arr_1 [i_0])))));
                    var_18 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-82)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56587))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((arr_0 [5ULL] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (-1LL))))))));
                    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_2] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1 - 2] [6ULL]))) : (arr_9 [i_2] [i_2 + 1] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (arr_10 [i_0] [i_1] [i_0]))))) : (((170673621U) * (var_5)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) ^ (-1LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) + ((+(((/* implicit */int) var_2)))))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11699)))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) (_Bool)1)))));
}
