/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68457
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((var_9) ? (var_10) : (((/* implicit */int) (signed char)83)))))))), (max((5615547373269280762LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (-319465234) : (((/* implicit */int) (unsigned char)208)))))))));
                    arr_9 [8] [i_1] [i_2] [8] = ((/* implicit */long long int) (unsigned char)48);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */short) (signed char)85);
                                arr_16 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) (unsigned char)208);
                                arr_17 [i_0] [i_0] [2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */int) (unsigned char)182);
                                arr_18 [i_3] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                    arr_19 [(_Bool)1] [(_Bool)1] [i_1] [16ULL] = ((/* implicit */unsigned short) max(((signed char)-33), ((signed char)118)));
                }
                arr_20 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_6);
                arr_21 [i_0] [i_1] [i_1] = ((/* implicit */short) ((var_9) ? (max((max((((/* implicit */unsigned int) (unsigned char)0)), (var_7))), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) var_8))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    arr_26 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) (unsigned char)23);
                    arr_27 [i_5] [i_1] [i_1] [(unsigned short)20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_7)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_7)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) 319465233)) ? (var_1) : (((/* implicit */int) (unsigned char)36)))))) : (((/* implicit */int) var_2))));
                }
                arr_28 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)177)))), (((/* implicit */int) var_9))));
            }
        } 
    } 
}
