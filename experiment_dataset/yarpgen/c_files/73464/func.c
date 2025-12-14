/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73464
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
    var_18 = ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) var_5)) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (4147826353140539061LL))))));
    var_19 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_2])) >> (((((/* implicit */int) arr_5 [14U] [(short)10] [i_2])) - (14327))))))));
                    arr_6 [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)26292)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11))))) : (11411330416704113234ULL)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((long long int) var_4))));
                                arr_12 [i_4] [i_3] [i_2] [i_2] [7ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_3 + 3] [i_3] [i_0])) >= (((/* implicit */int) arr_1 [i_0])))))))) ? ((+(((/* implicit */int) arr_0 [i_1] [i_1 - 1])))) : (((/* implicit */int) var_11))));
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-20759))));
                                arr_13 [i_4] [i_2] [i_2] [i_3 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_5 [i_2] [i_2] [i_2]), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_2] [i_3] [i_2])) != (var_9)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */unsigned char) min((((var_12) & (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) << (((4322454144398057890ULL) - (4322454144398057889ULL))))))));
                }
            } 
        } 
    } 
}
