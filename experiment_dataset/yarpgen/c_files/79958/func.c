/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79958
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((var_9) / (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)19060))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) arr_0 [i_0])), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_12 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [(unsigned short)16] [i_2 - 2] [i_3 - 1]))));
                                arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (var_4) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)46469)))))));
                                var_13 *= ((/* implicit */unsigned char) 12808633383741230181ULL);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_1] = ((arr_0 [(short)12]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((((/* implicit */int) (unsigned short)48689)) << (((((/* implicit */int) (unsigned short)19058)) - (19057))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2 + 1]))))) : ((-(5638110689968321451ULL))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 19; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) 1048575))));
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(min((arr_2 [7] [i_2 + 1] [i_5 - 3]), (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned long long int) var_8);
    var_17 &= ((/* implicit */unsigned char) (_Bool)1);
}
