/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62890
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
    var_11 = ((/* implicit */_Bool) var_6);
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), (var_1)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_4] [i_3 + 1] [i_2 + 1] [(unsigned short)17] [i_1 - 1]))));
                                var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_2] [i_4] [i_3 + 1] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)25938)))), (((/* implicit */int) ((_Bool) arr_8 [i_2] [i_2] [i_3] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) 1480709830676546092LL);
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_6] [i_5 + 1] [i_2] [i_2])) || (((/* implicit */_Bool) arr_10 [i_6 + 1] [i_5 + 1] [i_5] [i_5])))) ? (((((/* implicit */_Bool) arr_1 [i_6 + 2] [i_0])) ? (max((((/* implicit */unsigned int) -1277750280)), (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_6] [i_0] [i_1] [i_1] [i_0])) + (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [16U] [i_5] [i_2] [i_0] [i_0]))))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((3252873652650288439ULL), (((/* implicit */unsigned long long int) arr_11 [i_6] [i_5] [i_2] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1 + 1]))) : (4294967295U)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (unsigned short)9)) ^ (((/* implicit */int) arr_11 [i_6] [9ULL] [i_2 - 1] [i_1] [9ULL])))))) : (((/* implicit */int) (unsigned short)45977)))))));
                                arr_18 [i_0] [i_2] [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) max((((931126008U) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) (unsigned short)58708))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
