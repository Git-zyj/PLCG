/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91828
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
    var_17 -= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) min((var_12), (var_5)))), (max((var_6), (((/* implicit */unsigned int) var_16)))))), (((/* implicit */unsigned int) var_15))));
    var_18 = ((/* implicit */int) min((max((((/* implicit */long long int) var_14)), (var_10))), (((/* implicit */long long int) max((1831909567), (((/* implicit */int) (unsigned short)56745)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) max((max((min((var_3), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) var_14)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned int) max((min((min((((/* implicit */long long int) var_8)), (var_2))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_1)), (var_12)))))), (max((((/* implicit */long long int) var_6)), (max((var_11), (((/* implicit */long long int) var_9))))))));
                            var_21 = ((/* implicit */unsigned long long int) var_9);
                            var_22 = ((/* implicit */short) var_11);
                            var_23 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_13)))), (max((((/* implicit */unsigned long long int) var_4)), (var_3))))), (((/* implicit */unsigned long long int) var_14))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    var_24 = var_16;
                    var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((-245616834), (-1831909568)))), (max((((/* implicit */unsigned long long int) var_13)), (var_7)))));
                    var_26 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)-27890)), (1831909583)));
                }
            }
        } 
    } 
}
