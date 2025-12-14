/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78493
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / ((+(((/* implicit */int) (_Bool)1))))))) : ((((+(var_8))) - (((/* implicit */long long int) 3705310677U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) (~((((_Bool)0) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91)))))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2])) | ((~(((/* implicit */int) arr_10 [i_2 + 1] [i_1] [i_2 + 2] [i_2 + 1] [i_4]))))));
                            }
                        } 
                    } 
                    var_14 = ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) (short)-29061)) : (((/* implicit */int) (short)-29042)))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (((((~(arr_13 [i_0] [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) (short)-14846)))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!((_Bool)1))), ((_Bool)1))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (~(((unsigned long long int) var_8))));
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0)), (5156310442416899750ULL)));
    var_18 = var_10;
}
