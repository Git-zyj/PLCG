/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97118
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
    var_10 -= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)16383))))) + (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_2) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_6))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (+(arr_3 [i_3 - 1] [i_3 - 2] [9U])));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((short)(-32767 - 1)), ((short)32767)))) ? (arr_5 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32767)) ? (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3] [6U])) * (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)45933))))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */unsigned short) (short)(-32767 - 1));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    arr_18 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_1] [i_5]))));
                    var_15 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0]);
                    var_16 = ((/* implicit */short) var_7);
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [0] [i_1] [0])) % (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                }
            }
        } 
    } 
}
