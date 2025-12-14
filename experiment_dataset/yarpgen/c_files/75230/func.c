/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75230
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_14)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_0] [i_2] [i_2 - 4])), (arr_2 [i_0])))) : (((/* implicit */int) ((_Bool) arr_1 [i_0 - 2]))))), (((((/* implicit */int) (short)-26581)) - (((/* implicit */int) (_Bool)1))))));
                    arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_0)) > (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)29154))))));
                    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_1])), (((unsigned long long int) (unsigned short)36376))))) ? (((/* implicit */int) min((((unsigned short) 15768338959256434884ULL)), (((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_0 - 2]))))) : (((/* implicit */int) (!(arr_4 [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2 - 3] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) 11081344812101561873ULL)) && (arr_3 [i_0] [i_0 - 2] [i_0 + 1])))), (min(((-(((/* implicit */int) (unsigned short)46054)))), (((/* implicit */int) max(((unsigned short)16173), (((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2 - 4] [i_3 + 1] [i_1] [i_4])))))))));
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) & (arr_8 [i_2] [i_2 - 3] [i_3] [i_3 + 1])))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (16394543653100900924ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 - 3] [i_2 - 2] [i_3 + 1])) ? (arr_8 [i_2 - 1] [i_2 - 3] [i_3 + 1] [i_3 + 1]) : (arr_8 [i_0] [i_2 - 3] [i_2 - 2] [i_3 + 1]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) (~(((((/* implicit */int) ((((/* implicit */int) (short)18191)) < (((/* implicit */int) var_18))))) & ((+(((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                var_24 *= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 6770444738835894243ULL)) ? (((/* implicit */int) min((var_6), (arr_3 [i_5] [i_5] [i_6])))) : ((-(((/* implicit */int) arr_17 [i_6] [i_5])))))));
                var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_6] [i_6]), (((/* implicit */short) ((((/* implicit */int) arr_17 [i_5] [i_6])) != (((/* implicit */int) arr_17 [i_5] [i_5])))))))) ? (min((((/* implicit */int) (unsigned char)229)), ((+(((/* implicit */int) (_Bool)1)))))) : (min((((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((arr_9 [i_5] [i_5] [i_5] [10]) != (((/* implicit */int) arr_18 [i_5] [i_6] [i_6])))))))));
                arr_19 [i_6] = ((/* implicit */signed char) (~((((+(((/* implicit */int) arr_6 [i_5] [i_6] [i_5])))) << (((arr_1 [i_5]) - (1415657211)))))));
                arr_20 [i_6] [i_5] = ((/* implicit */unsigned short) ((min(((~(var_4))), (((((/* implicit */_Bool) var_11)) ? (2052200420608650691ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_5])) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)18185))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (11676299334873657374ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)14173)) : (((/* implicit */int) var_5)))))))));
}
