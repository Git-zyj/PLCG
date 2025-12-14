/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86489
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((int) (((!(((/* implicit */_Bool) (short)-4264)))) ? (((/* implicit */int) var_11)) : (max((((/* implicit */int) (_Bool)1)), (arr_2 [i_0] [i_0])))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) var_1);
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_3))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(max((((/* implicit */int) max(((_Bool)1), (var_1)))), (((((/* implicit */_Bool) 2405337052U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_2);
                            var_15 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (1902757381850428968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) (-(-594477341)))))))));
    var_17 = var_11;
    var_18 *= ((/* implicit */unsigned char) var_5);
}
