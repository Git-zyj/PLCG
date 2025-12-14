/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96810
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_15), ((unsigned char)214))))))) ? (var_18) : (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_15)), (((unsigned int) ((arr_5 [i_0] [i_0] [i_1] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)53913))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) 758985602U)) : (var_18))))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_3] |= ((/* implicit */unsigned int) (~(arr_7 [i_3])));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~((~(var_16))))))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_4 [i_2 - 1] [i_0 - 2] [i_0 - 1])))));
                }
                for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_23 += ((/* implicit */unsigned int) (unsigned short)53913);
                        var_24 = ((/* implicit */unsigned char) ((long long int) ((unsigned int) ((signed char) arr_10 [i_6] [i_6] [i_5] [i_1] [i_6] [i_5] [i_5]))));
                        arr_18 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)13711)) ? ((~(arr_10 [i_5] [i_5] [i_5] [i_1] [i_5] [i_5] [(unsigned char)5]))) : (((/* implicit */unsigned long long int) ((var_10) ? (1255832083U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)4] [i_5] [i_6]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */int) arr_3 [i_1] [i_5] [i_5]);
                        arr_22 [i_1] [i_5] [i_1] = arr_0 [i_1];
                        arr_23 [i_1] [i_1] [i_1] [i_1] = (~(11361032939107749838ULL));
                    }
                    var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_5 - 2] [i_5 - 2] [i_5 - 1]))) ? (((/* implicit */int) (unsigned short)51841)) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (short i_9 = 1; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */short) ((int) (_Bool)1));
                                arr_29 [i_5] [i_5 - 1] [i_5] [i_1] [i_9] [i_5 - 1] = ((/* implicit */unsigned char) (signed char)9);
                                arr_30 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) (+(max((((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_5 - 2] [i_5 - 2] [i_8] [i_9])), (var_17))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)78))))) ? (((long long int) ((long long int) (unsigned short)53612))) : (((/* implicit */long long int) arr_19 [i_5] [10U] [i_1] [i_1] [i_1] [i_0]))));
                    var_29 = ((/* implicit */int) (-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)4])));
                }
                var_30 = ((/* implicit */int) ((unsigned long long int) max((1372965833U), (((/* implicit */unsigned int) arr_20 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0])))));
            }
        } 
    } 
}
