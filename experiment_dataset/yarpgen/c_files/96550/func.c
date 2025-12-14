/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96550
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(min((((/* implicit */long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) * (((((/* implicit */_Bool) (unsigned short)62842)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7288707515864037198ULL)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((0ULL) << (((((7288707515864037215ULL) | (7288707515864037196ULL))) - (7288707515864037207ULL)))));
                                var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((7993482779352425563LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_2] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))))) - (var_8)));
                                arr_15 [i_0 - 2] [i_0 - 2] [i_2 - 1] [i_3] [i_4] [i_0] [i_1] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)25519)))));
                                arr_16 [0LL] = ((/* implicit */short) (+(((/* implicit */int) min((arr_14 [i_4 - 1] [i_3] [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]), ((unsigned char)10))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] = ((/* implicit */unsigned char) min(((((-(var_6))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))), ((+(var_10)))));
                    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)192)), ((short)-3850))))));
                    var_19 = max((((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)232)), ((unsigned short)64149)))), (-7993482779352425557LL));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) min((((/* implicit */long long int) -613713485)), (7993482779352425557LL)));
}
