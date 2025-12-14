/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65251
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [(short)5] [(short)5] [9LL] = ((/* implicit */unsigned int) arr_2 [i_1]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -320234973)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (arr_4 [(signed char)1] [10] [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57)))));
                arr_7 [0ULL] = ((/* implicit */short) -320234973);
                var_14 = ((((unsigned long long int) ((((/* implicit */int) arr_3 [19] [(unsigned char)3])) >= (((/* implicit */int) var_6))))) << (((((int) arr_4 [13ULL] [i_1] [13ULL])) - (1066200780))));
            }
        } 
    } 
    var_15 -= 9151990116831664206ULL;
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)215))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 301691909)) <= (var_0))))));
}
