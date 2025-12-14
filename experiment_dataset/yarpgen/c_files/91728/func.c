/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91728
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
    var_12 ^= ((/* implicit */unsigned long long int) ((65535) | (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)136))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (0U)))))));
        arr_2 [i_0 - 1] [i_0 + 1] = ((((((/* implicit */_Bool) ((short) var_11))) && ((!(((/* implicit */_Bool) arr_0 [i_0])))))) ? (min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [(unsigned short)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1)));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) min(((short)-32693), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3 - 3] [i_2 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) : ((-(arr_10 [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_19 [i_1] [(unsigned char)9] [i_2] [i_4] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1] [i_2 - 1] [i_2 + 1] [i_1] [i_4 - 3] [i_5 + 1])) ? (((/* implicit */int) ((arr_14 [i_2] [(unsigned char)1] [1] [i_4 - 3]) >= (((/* implicit */int) (short)-19052))))) : (min((arr_14 [i_2] [i_2] [i_3 - 3] [i_4 - 2]), (((/* implicit */int) (short)-5824))))))), (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)3))))), (min((((/* implicit */unsigned int) arr_3 [i_3])), (0U)))))));
                                var_15 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 444087224)) ? (((/* implicit */int) (_Bool)0)) : (444087238)))), (((831224030U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 2] [i_2 - 2])))))));
                                var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))))));
            var_18 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned char)54)))), (((/* implicit */int) ((unsigned char) arr_13 [i_1])))));
        }
    }
    for (int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_7]))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)49525)), (arr_22 [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_9)))))) : (arr_10 [7U]))) : (max((15U), (((/* implicit */unsigned int) (_Bool)1))))));
        var_20 *= ((/* implicit */unsigned long long int) arr_10 [i_7]);
        arr_26 [i_7] [i_7] = min(((+(((/* implicit */int) min((arr_5 [i_7]), (((/* implicit */unsigned short) var_11))))))), ((-(((/* implicit */int) arr_13 [i_7])))));
        arr_27 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_7])) | (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)19035)) : (1407043440))))))) : ((+(((/* implicit */int) ((short) (short)32698)))))));
    }
    var_21 *= ((/* implicit */unsigned char) var_7);
}
