/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61039
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
    var_13 = ((/* implicit */unsigned short) var_8);
    var_14 = ((/* implicit */_Bool) 5704408801657910474ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 2] &= ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 3])) && (((/* implicit */_Bool) 18446744073709551602ULL)));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0]))) || ((!(((((/* implicit */_Bool) 5881673089200144806LL)) && (((/* implicit */_Bool) var_9))))))));
                arr_6 [i_0] = ((/* implicit */signed char) 18446744073709551602ULL);
                arr_7 [i_0] [i_0 + 1] [i_1 + 3] = ((/* implicit */signed char) (~(arr_2 [i_0 - 1] [i_1 + 3])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [8U] [8U] [i_4] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_2] [i_2]))))) < (arr_1 [i_3] [i_3])));
                    var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) ^ (((unsigned int) arr_3 [i_4] [i_2])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))));
                        arr_20 [i_4] [4U] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))));
                    }
                }
            } 
        } 
    } 
}
