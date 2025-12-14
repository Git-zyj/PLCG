/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81275
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
    var_17 = ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-32762)), (arr_0 [i_0])))), (min((((/* implicit */long long int) (unsigned short)65535)), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) var_2);
                                var_19 = var_1;
                                arr_17 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((var_15) ? (min((((/* implicit */int) var_7)), (arr_8 [i_0] [i_2] [i_0]))) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_4 + 4])))) + (min((arr_8 [i_0] [i_2] [i_2]), (((/* implicit */int) ((unsigned short) (short)-18387)))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((min((-2043102067), (((/* implicit */int) var_12)))) / (max(((-(((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) min((((/* implicit */signed char) var_15)), (arr_5 [i_0])))))))))));
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */int) ((((((/* implicit */int) (short)6)) + (arr_8 [i_2 - 1] [i_1] [i_2]))) != (((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (var_9)))) && (((((/* implicit */int) arr_7 [i_2] [i_1] [i_0] [i_0])) >= (((/* implicit */int) var_0)))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_0] [i_0]) != (arr_6 [i_0] [i_0] [i_0] [i_0])))), ((-((-(arr_6 [i_0] [i_0] [i_0] [i_0])))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0])))));
    }
    var_24 = (-(min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_8))))));
    var_25 = ((/* implicit */unsigned char) ((-2147483646) | (((/* implicit */int) var_15))));
    var_26 = ((((((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) var_16))))) & (((((/* implicit */int) (unsigned char)248)) ^ (((/* implicit */int) (unsigned short)5)))))) + (((/* implicit */int) var_6)));
}
