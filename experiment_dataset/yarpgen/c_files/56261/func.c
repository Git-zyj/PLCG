/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56261
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (5060798069123452758ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2 - 1] [i_3])))))) ? (2310540978131192200LL) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (signed char)-108)))))))));
                            var_18 -= ((unsigned int) ((10121417U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50)))));
                            arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_1 [i_2 + 1])), (4294967295U))), (((unsigned int) max((10121417U), (var_13))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 4] [i_1 + 1]))) * (((((/* implicit */_Bool) 1890255433U)) ? (((/* implicit */unsigned int) 173906027)) : (4294967281U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [20ULL] [20ULL])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_5 [i_1] [i_1] [i_0])))) ? (((((/* implicit */unsigned long long int) -450592064)) | (7908367907445602268ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6333696789376119555ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1 - 1])))))))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_1 - 3]), (((/* implicit */int) (unsigned short)20464))))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_0] [i_1] = arr_16 [i_1] [i_1] [i_0];
                            var_20 = ((/* implicit */long long int) min((((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 3])) - (59586))))), (((/* implicit */int) ((arr_10 [i_1 - 2] [i_1 - 4]) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
                arr_22 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1 - 3]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), ((unsigned char)123))))) : (4284845878U)))) ? (var_17) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1320882195U)) ? (((/* implicit */unsigned long long int) 1890255440U)) : (9071141907870920629ULL)))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) var_3))))) : (((((/* implicit */_Bool) 8922955142703762720LL)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))))));
}
