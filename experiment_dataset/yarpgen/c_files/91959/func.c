/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91959
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
    var_16 = ((/* implicit */unsigned short) var_10);
    var_17 *= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_8))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_19 = ((/* implicit */short) ((_Bool) var_10));
                    var_20 = ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_3 [i_2] [(unsigned short)4] [i_0])));
                    arr_7 [i_1] |= ((/* implicit */int) ((long long int) arr_6 [i_2] [i_1] [17LL]));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [10] [(unsigned short)6] [i_0] = ((/* implicit */long long int) ((arr_10 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [6LL] [i_4])))));
                                var_21 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)73))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_0]))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_6 [i_2] [i_1] [i_3])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])))))) + (((unsigned int) var_8))));
                }
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_5] [i_1] [i_0] [i_6] = ((/* implicit */long long int) (-((-(max((arr_9 [i_0] [i_0]), (((/* implicit */int) var_13))))))));
                                var_24 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7 + 1]))))))));
                                var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((17870283321406128128ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (min((arr_21 [i_7] [i_1] [i_7] [i_7] [i_5]), (arr_21 [i_7 + 1] [i_6] [i_0] [i_0] [i_0])))));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1167031732)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_9)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_3 [i_7] [i_7 + 1] [i_7 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 576460752303423487ULL)))))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_7 + 2] [i_0] [i_6] [i_7 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) (-(12114124306516134124ULL)));
                    arr_23 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) var_14)))), (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_5]))))))));
                    arr_24 [i_0] = ((/* implicit */_Bool) (+(max((208277568U), (((/* implicit */unsigned int) -1071344313))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((signed char) var_15));
}
