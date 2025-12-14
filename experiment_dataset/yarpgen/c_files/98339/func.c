/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98339
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4] [8ULL] [i_2] [(short)2])) ? ((-(((/* implicit */int) arr_6 [i_2 + 1] [i_3 + 2] [i_3 + 2])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1292472187)) || (((/* implicit */_Bool) (unsigned char)29))))))));
                                var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 2] [i_3 + 2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2 - 2] [i_3 + 2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 2] [i_3 + 2]))))));
                                var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_2] [i_3 + 2] [(signed char)16] [i_0] [i_4] [i_2] [i_4]))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3 - 1] [i_4] [i_0] [i_4] [i_2 + 1])) ? (arr_9 [i_4] [i_4] [i_3 - 1] [i_4] [i_4] [i_2] [(_Bool)1]) : (arr_9 [i_0] [i_1] [i_3 - 1] [i_4] [i_0] [i_3] [i_0])))) ? (min((arr_9 [i_0] [i_1] [i_3 - 1] [i_4] [i_4] [i_0] [i_1]), (arr_9 [i_0] [i_0] [i_3 - 1] [i_4] [i_0] [i_4] [i_1]))) : (min((arr_9 [i_0] [i_1] [i_3 - 1] [i_4] [i_3] [i_0] [i_4]), (arr_9 [i_4] [i_2] [i_3 - 1] [i_4] [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 16; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) -1554836316))));
                            var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) var_6))), (max(((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_6] [i_5 - 3])))), (((((/* implicit */int) arr_13 [i_0] [i_6] [(short)1])) + (arr_3 [i_5] [i_5] [i_0])))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0])) : ((-((+(var_11)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((unsigned int) 1554836306)) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1554836314))))));
    var_21 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
    var_22 *= ((/* implicit */unsigned long long int) var_1);
}
