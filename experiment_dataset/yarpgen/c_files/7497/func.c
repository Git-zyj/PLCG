/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7497
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) max((max((((/* implicit */long long int) max((var_18), (((/* implicit */unsigned int) var_9))))), (min((-4536506311640787912LL), (4536506311640787915LL))))), (min((-4536506311640787910LL), (((/* implicit */long long int) 469762048))))));
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned char) max((min((min((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_2]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_1] [i_2])), (arr_8 [i_0])))))), (max((min((0ULL), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 11U)), (arr_8 [i_0]))))))));
                    var_19 = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_5), ((unsigned char)215)))), (min((4536506311640787911LL), (((/* implicit */long long int) (signed char)30))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-32)), (-4536506311640787912LL)))), (max((arr_5 [i_0] [14ULL] [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [17ULL] [10LL])))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_3 [i_2] [i_2])), (-4536506311640787912LL))), (min((arr_8 [i_0]), (((/* implicit */long long int) var_9))))))), (min((((/* implicit */unsigned long long int) min((var_17), (((/* implicit */short) (signed char)-104))))), (min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_8))))))));
                    var_20 = max((max((min((4536506311640787912LL), (((/* implicit */long long int) (short)-14)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)7)), (arr_6 [1] [i_0] [i_1] [(unsigned short)6])))))), (max((((/* implicit */long long int) max((((/* implicit */int) (short)13)), (var_12)))), (max((((/* implicit */long long int) arr_0 [10U])), (arr_2 [(_Bool)1] [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((max((max((var_15), (((/* implicit */long long int) var_17)))), (max((-4536506311640787937LL), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned char) var_10))))), (max((((/* implicit */unsigned int) var_0)), (4294967295U))))))));
    var_22 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)249)), (var_18)))), (min((((/* implicit */unsigned long long int) var_18)), (var_11))))), (((/* implicit */unsigned long long int) min((min((var_1), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)13)), (var_14)))))))));
}
