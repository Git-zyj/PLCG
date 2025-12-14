/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77684
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
    var_11 = var_10;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_7)))) * (((/* implicit */int) (!(arr_4 [i_0] [i_1]))))))) ? (min((min((9223372036854775807ULL), (((/* implicit */unsigned long long int) arr_2 [i_2])))), (var_5))) : (((/* implicit */unsigned long long int) var_10))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 = ((max((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)77)))), ((!(((/* implicit */_Bool) var_8)))))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)194)), (var_10)))))));
                                var_13 = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])) ? (arr_9 [i_0] [i_1] [i_2] [i_1 + 1] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1016462176U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    var_14 = ((((/* implicit */_Bool) (+(5032023465000173365ULL)))) ? (min((24U), (((/* implicit */unsigned int) (short)940)))) : (min((4294967295U), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_1 - 1] [i_2])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (3278505093U)))))));
    var_16 = ((/* implicit */unsigned char) min((min((max((((/* implicit */unsigned long long int) (_Bool)1)), (12093963625133353210ULL))), (((/* implicit */unsigned long long int) (unsigned char)245)))), (var_5)));
}
