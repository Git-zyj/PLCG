/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57177
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
    var_13 = ((/* implicit */unsigned long long int) var_11);
    var_14 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_1)) > (var_0)))), ((short)-1)))));
                                arr_14 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
                                arr_15 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_16 = var_8;
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)55525)) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5] [i_0] [i_6])) < (((/* implicit */int) (unsigned short)40628))))) : (((((/* implicit */_Bool) ((signed char) -303364961))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_16 [i_6] [i_5] [i_2] [(unsigned short)18] [i_1] [i_0]))))));
                                arr_22 [i_0] [i_1] [6] [(unsigned short)3] [18] = ((/* implicit */unsigned long long int) (unsigned short)55525);
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)32)), (2U)));
                    var_18 = ((/* implicit */short) ((_Bool) 534773760LL));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_12))));
                }
                var_20 = ((/* implicit */long long int) var_7);
            }
        } 
    } 
}
