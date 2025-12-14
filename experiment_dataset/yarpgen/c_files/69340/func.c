/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69340
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
    var_18 &= ((/* implicit */unsigned long long int) ((((_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
                    var_19 = ((/* implicit */long long int) arr_6 [i_2]);
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_4 [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned short) ((_Bool) 0U));
                                var_20 = ((/* implicit */short) 13062216913457793206ULL);
                                arr_15 [i_0] [i_1] [i_2 - 2] [i_3] [(unsigned char)12] [i_4] = ((/* implicit */_Bool) ((((var_8) == (((/* implicit */long long int) (-(((/* implicit */int) (short)0))))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) (short)9773)))) ^ ((-(((/* implicit */int) (short)0))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-9774)), (-8116058345546320126LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9337))) : (arr_3 [i_2 - 1])))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
            {
                {
                    arr_20 [i_0] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned char) arr_7 [i_0]);
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~((+(arr_1 [i_6 + 1]))))))));
                    var_23 = ((/* implicit */unsigned short) arr_12 [i_6] [i_6 - 1] [i_5] [i_5] [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_7 = 3; i_7 < 15; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 4; i_8 < 18; i_8 += 3) 
                        {
                            arr_25 [(short)2] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_5] [i_5] [i_7] [i_7 + 2])) != (((/* implicit */int) arr_10 [i_0] [i_5] [i_7 + 4] [i_8]))));
                            arr_26 [i_8 - 3] [i_7 + 3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6] [i_6 - 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_5]))) : (arr_12 [i_5] [i_6] [i_6 + 1] [i_6 - 1] [i_7 - 3])));
                            var_24 = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_5] [(unsigned char)12] [i_7 + 1] [i_8]);
                            arr_27 [i_0] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */long long int) arr_24 [i_6 + 1] [i_5] [i_0]);
                        }
                        arr_28 [i_0] [i_6] [i_6] [12U] = ((/* implicit */unsigned short) ((arr_17 [i_6 - 1]) & (arr_17 [i_6 - 1])));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 1; i_9 < 17; i_9 += 3) 
                    {
                        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_6 + 1] [i_9] [(unsigned char)0])) ? (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)9787)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : ((+(((/* implicit */int) (short)9784))))));
                        var_26 = 7612523522913816133ULL;
                    }
                }
            } 
        } 
    }
    var_27 &= var_14;
    var_28 -= ((/* implicit */unsigned char) var_17);
}
