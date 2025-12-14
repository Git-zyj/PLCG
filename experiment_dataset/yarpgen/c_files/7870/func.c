/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7870
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 405707362220434838LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) -854396860))))) ? (((int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_3 - 2] [i_4] = ((/* implicit */unsigned short) max((var_9), (var_6)));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-56)) && (((/* implicit */_Bool) (unsigned short)20973))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */_Bool) max(((~(((((/* implicit */int) (unsigned short)20973)) * (((/* implicit */int) (_Bool)0)))))), (((arr_6 [i_0] [i_0] [i_0] [i_1 - 2]) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) max((var_2), (arr_8 [i_0] [(unsigned short)7] [i_0] [(unsigned char)5] [i_0]))))))));
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned int i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        for (int i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */short) arr_1 [i_5]);
                                var_17 = ((/* implicit */int) min((var_17), ((~(((int) ((var_0) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_13 [i_5] [i_7])))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_11)) ? (1850880293) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_0] = -880499200;
                var_19 = ((/* implicit */long long int) arr_16 [i_0]);
            }
        } 
    } 
}
