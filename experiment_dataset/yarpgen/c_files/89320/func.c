/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89320
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (short)-16767)) <= (((/* implicit */int) (short)16778))));
    var_20 = ((/* implicit */_Bool) var_9);
    var_21 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_22 = ((((/* implicit */int) (short)-16767)) ^ ((-(((/* implicit */int) (signed char)114)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) (signed char)114)) / (((/* implicit */int) (unsigned char)176)))))));
                                var_24 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) / (var_0)));
                            }
                        } 
                    } 
                    var_25 = var_11;
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_15) - (((/* implicit */long long int) ((/* implicit */int) (signed char)114))))))));
                                arr_22 [12U] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_6);
                                arr_23 [i_0] [i_2] [i_2] [i_5] [i_6 - 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > ((+(var_7)))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((var_15) + (var_14)))) : (((((/* implicit */_Bool) (unsigned char)83)) ? (var_0) : (((/* implicit */unsigned long long int) var_2)))))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)512))));
    }
}
