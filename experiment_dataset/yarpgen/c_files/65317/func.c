/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65317
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
    var_11 = (-(((((/* implicit */int) var_3)) % (((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1]);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 6; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-13184)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)221)))), (((((/* implicit */int) var_3)) - (((/* implicit */int) var_6))))))) ? ((+(max((((/* implicit */unsigned int) arr_7 [i_1])), (arr_3 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned int) (+(arr_0 [i_0] [i_0 + 1]))))));
                    arr_8 [i_0] [6ULL] |= ((/* implicit */unsigned char) (signed char)122);
                }
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (signed char)122))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_4])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_15 = ((/* implicit */int) ((unsigned char) arr_23 [i_3] [i_4] [i_5] [i_3] [i_7]));
                            arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((short) var_5));
                            var_16 = ((/* implicit */unsigned char) (short)-7741);
                            arr_25 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */signed char) (~(((int) arr_15 [i_3] [i_3]))));
                            arr_26 [i_3] [i_4] [i_5] [2] [i_7] [i_5] [i_7] = ((/* implicit */signed char) (((-(arr_10 [i_5]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        }
                        var_17 = ((/* implicit */signed char) arr_10 [i_5]);
                    }
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_13 [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                arr_32 [i_3] [(unsigned short)5] [i_5] [i_9] [(unsigned short)5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [i_8]))));
                                var_19 += ((/* implicit */signed char) (unsigned short)49994);
                                arr_33 [i_3] [i_9] [i_4] [i_5] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) 4194304);
                            }
                        } 
                    } 
                    arr_34 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_23 [i_3] [i_3] [i_4] [i_4] [i_5])) : (((/* implicit */int) (unsigned short)22387))));
                }
                var_20 = ((/* implicit */signed char) min((var_20), ((signed char)88)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (var_10)));
}
