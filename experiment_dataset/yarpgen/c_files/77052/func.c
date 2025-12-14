/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77052
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
    var_20 = ((/* implicit */unsigned short) ((unsigned int) var_1));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) ^ (((long long int) var_1))));
    var_22 = ((/* implicit */unsigned short) -1070086562);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] = ((short) var_6);
                    var_23 = ((/* implicit */_Bool) arr_1 [i_0 - 2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) : ((-(arr_0 [i_4])))));
                                arr_15 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */int) (-((+(arr_0 [i_0])))));
                                var_25 = ((/* implicit */unsigned short) ((short) arr_14 [4] [i_0 - 1]));
                                arr_16 [i_1] [i_1] [i_1] [(unsigned short)7] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_2])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 7; i_6 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) arr_10 [i_0 - 2] [i_0] [i_0 - 3] [i_1] [i_6 + 3] [i_6 + 2]);
                                var_27 = ((/* implicit */unsigned short) ((arr_21 [i_0] [i_0] [i_2] [i_5] [i_6 - 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))));
                                arr_24 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */long long int) (~(var_2)));
                                arr_25 [i_0] [i_1] [i_0] [i_5] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)126)) ? (1163224257U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2))))));
                }
            } 
        } 
        arr_27 [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -401500693)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [0LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 3] [(unsigned short)6] [i_0]))) : (var_16)));
    }
}
