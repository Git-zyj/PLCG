/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80055
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) > (511)))) << ((((-(var_2))) - (430122164)))))), (max((((/* implicit */unsigned int) (signed char)42)), (arr_2 [i_2])))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) (signed char)42)) / (arr_6 [i_1 - 2])))));
                    arr_12 [i_1] [8ULL] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned int) var_10))))) != (((/* implicit */int) var_1)))) ? (((((((/* implicit */_Bool) (signed char)48)) ? (2145386496U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((3214310283U) - (3214310277U))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-14)) && ((_Bool)1)))) - (1))))))));
                    arr_13 [i_1] = ((/* implicit */int) var_0);
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((3214310290U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (32985348833280LL))))))) + (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (signed char)74);
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_16 [i_3]))));
        var_21 |= ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) (short)-27472)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (32767U)))))));
    }
    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    arr_24 [i_5] |= ((/* implicit */signed char) ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))))), (((((/* implicit */int) var_15)) % (((/* implicit */int) (signed char)42)))))) << (((/* implicit */int) ((signed char) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_22 |= ((/* implicit */signed char) (_Bool)1);
                        var_23 |= ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_4] [(short)19] [(short)19] [(unsigned short)2])) : (((/* implicit */int) arr_10 [i_4] [i_7 - 1] [i_6] [i_7 - 1]))))));
                    }
                    var_24 = ((/* implicit */unsigned int) ((int) -32985348833281LL));
                    var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5560)) ? (((/* implicit */int) (short)26981)) : (((/* implicit */int) (signed char)-54))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4 - 1])) && (((/* implicit */_Bool) arr_16 [i_4 + 2])))))) : (min((arr_25 [i_4 - 1]), (arr_25 [i_4 + 1])))));
                }
            } 
        } 
        arr_27 [i_4] = ((((((/* implicit */_Bool) (unsigned short)62371)) && (((/* implicit */_Bool) (unsigned short)50912)))) ? ((~(13296555635190831137ULL))) : (((/* implicit */unsigned long long int) -861363040428337695LL)));
        var_26 = ((/* implicit */short) max(((-(arr_14 [i_4 - 1]))), (((arr_14 [i_4 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17917)))))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned int) arr_7 [i_8]);
        var_27 = ((/* implicit */int) arr_5 [i_8]);
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8])) ? (((/* implicit */unsigned int) arr_29 [i_8])) : (arr_14 [i_8])));
        var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_2)));
        arr_33 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483648U)) ? ((-(((/* implicit */int) (short)-27460)))) : (((/* implicit */int) (_Bool)1))));
    }
}
