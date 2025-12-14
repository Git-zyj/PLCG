/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74339
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) max((max((min((var_13), (13569851526378922567ULL))), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_12))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((((unsigned int) var_7)), (min((((/* implicit */unsigned int) ((signed char) var_8))), (var_1)))));
                                var_16 = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                arr_18 [i_5] [i_6] = ((/* implicit */unsigned short) min((212565082U), (((/* implicit */unsigned int) (short)-16813))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) var_12);
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((long long int) var_10)))));
                    var_19 = ((/* implicit */unsigned int) ((unsigned char) (short)-16813));
                    var_20 *= ((/* implicit */unsigned int) var_8);
                }
                for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    arr_23 [i_5 + 2] [i_6 - 1] [i_8] = ((/* implicit */_Bool) min((((unsigned int) var_7)), (((/* implicit */unsigned int) var_9))));
                    arr_24 [i_8] [i_5 + 2] [i_5 + 2] = ((/* implicit */int) var_5);
                }
                arr_25 [i_5 + 2] = ((/* implicit */long long int) var_13);
                var_21 = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_22 -= ((/* implicit */long long int) var_2);
}
