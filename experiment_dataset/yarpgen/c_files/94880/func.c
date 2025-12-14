/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94880
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) var_14);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) 536870848)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (21ULL))) | (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536870868)) ? (((/* implicit */long long int) -536870869)) : (9223372036854775804LL)))))))))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_15))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) - (max((((unsigned long long int) 4294967295U)), (((/* implicit */unsigned long long int) var_14))))));
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_20 = arr_7 [i_2];
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) var_13))))), (1099511496704LL)));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_8 [i_3])) : (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_15 [(unsigned char)9] [i_3] [i_4] [i_5])) - (var_7))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 4; i_6 < 19; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_7] [i_4] [i_5])) & (((/* implicit */int) arr_16 [i_3] [i_4] [i_5]))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((15ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5]))) : ((-(arr_19 [i_3] [i_3] [i_3] [i_4] [i_5] [i_6] [i_7])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((/* implicit */int) var_12))));
    }
}
