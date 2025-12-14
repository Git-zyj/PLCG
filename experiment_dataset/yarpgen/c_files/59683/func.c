/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59683
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) (short)-1);
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 6; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 4])) ? (1929586705U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_2 - 3] [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2 + 3])))) : (((((/* implicit */_Bool) arr_2 [i_2 + 3])) ? (((/* implicit */unsigned long long int) 157181811U)) : (arr_2 [i_2 - 2])))));
                                var_17 = ((/* implicit */signed char) max((var_17), (arr_8 [(short)8] [i_2 - 2] [(unsigned char)4] [i_4])));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [5ULL] [5ULL] = ((/* implicit */signed char) 1929586708U);
            }
        } 
    } 
    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 17873437524671443312ULL)) ? (((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) var_11)))) : (((/* implicit */int) var_8))));
}
