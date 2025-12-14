/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67899
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_3))))));
    var_14 = ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)244)))))));
                var_16 = ((/* implicit */_Bool) 15228638758266705289ULL);
                var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) && ((!((_Bool)1)))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) * (-1LL)))) ? (((/* implicit */unsigned int) (-(var_0)))) : (max((min((3557019253U), (var_9))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)189)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */signed char) (short)-27154);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_19 |= ((/* implicit */_Bool) arr_3 [i_6]);
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_5])))) ^ (((/* implicit */int) arr_3 [i_3])))))));
                                var_21 -= max((((3590204586U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) (unsigned short)28164)))) : (((/* implicit */int) arr_0 [(_Bool)1] [i_2 + 4]))))));
                                var_22 = ((/* implicit */unsigned char) ((signed char) arr_14 [(_Bool)1] [i_4] [i_5] [i_6]));
                                var_23 += ((/* implicit */signed char) min((((((/* implicit */_Bool) 16363172106884946306ULL)) ? (((/* implicit */int) arr_1 [i_3])) : ((-(((/* implicit */int) arr_12 [(_Bool)1] [i_3] [i_4] [i_3] [i_6])))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-127)) > (((/* implicit */int) (unsigned char)67)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2])) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2 + 3] [i_2])) ? (((/* implicit */int) arr_14 [i_2] [7ULL] [i_2 + 1] [i_2 + 4])) : (((/* implicit */int) arr_14 [i_2 + 3] [i_2 + 3] [i_2 + 2] [(unsigned short)11])))) : (((/* implicit */int) (unsigned char)197))));
                }
            } 
        } 
    } 
}
