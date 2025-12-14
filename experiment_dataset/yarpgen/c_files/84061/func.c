/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84061
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
    var_16 += ((/* implicit */unsigned int) ((int) var_12));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    arr_6 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) / (min((1471189618739862322ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) & (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)7] [i_2]))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_11 [i_3] [i_3] = ((/* implicit */int) var_10);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)-24), ((signed char)118)))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (unsigned char)237))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_18 [12U] [12U] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(4096)));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((2619994394261803174ULL), (((/* implicit */unsigned long long int) var_0))))))));
                                arr_19 [i_0] [i_0] [i_0] [4U] [i_5] = ((15158819541897166049ULL) + (12320570336293126073ULL));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) max((var_18), (arr_16 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_2 + 3])));
                    arr_20 [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                }
                var_19 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) (_Bool)1)))))));
                var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) (+(((/* implicit */int) ((63U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_0 - 3] [i_1] [i_0]))))) * ((+(var_13)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((min((max((((/* implicit */unsigned long long int) var_3)), (11760186968632353307ULL))), (((/* implicit */unsigned long long int) (unsigned short)44487)))), (((/* implicit */unsigned long long int) var_1))));
}
