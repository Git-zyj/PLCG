/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86415
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
    var_18 = ((/* implicit */unsigned short) min((2573461939387630611ULL), (((/* implicit */unsigned long long int) (unsigned char)247))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) (-(15873282134321920994ULL)));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) arr_0 [i_3])), (2573461939387630615ULL))))) : (15873282134321921012ULL)));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2147483647) <= ((-(((/* implicit */int) (unsigned char)247)))))))) <= (min((((/* implicit */unsigned long long int) ((15873282134321921018ULL) <= (((/* implicit */unsigned long long int) var_9))))), (min((((/* implicit */unsigned long long int) 1054934464445274046LL)), (var_16)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (arr_14 [i_0] [i_1] [i_2] [i_3] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 10; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((max((arr_1 [i_0]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((unsigned int) 15873282134321921004ULL)))))) <= (9016826484295717096ULL)));
                                var_23 = ((/* implicit */long long int) min((((int) (short)-29587)), ((-(((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_11)))))))));
                                arr_20 [i_5] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 1822829057U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (int i_8 = 2; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0]))) ? (((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)4)), ((unsigned char)8)))))))) ? ((-(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_25 [i_8 - 2]), (arr_25 [i_0]))))));
                                var_25 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((unsigned long long int) arr_3 [i_0])), (var_17))))));
                                var_26 = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
