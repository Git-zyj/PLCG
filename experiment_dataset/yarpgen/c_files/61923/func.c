/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61923
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) arr_12 [i_2] [9] [i_2] [i_3] [i_0]);
                                var_17 = ((/* implicit */int) ((((/* implicit */long long int) var_14)) + (max((((/* implicit */long long int) (short)13455)), (-2656401503773350282LL)))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37568))) * (4389456576512LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_11)), (var_0))))) : (min((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) var_8)), (4389456576512LL)))))));
                                arr_13 [i_4] [i_2] [i_2] [i_2] [(unsigned short)3] = ((/* implicit */unsigned char) min(((signed char)-118), ((signed char)105)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max(((short)1767), (((/* implicit */short) (_Bool)1))));
                    var_20 &= ((/* implicit */int) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((var_5) ? (((/* implicit */int) var_8)) : (var_14))) - (8)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (short)31744))) & ((~(820134666U)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((short) (signed char)-82));
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((1153314913) >> (((/* implicit */int) (_Bool)1)))) == ((~(((/* implicit */int) (signed char)62)))))))) / (((unsigned long long int) arr_0 [i_5]))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) (short)30)))))));
        var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_9 [i_5] [i_5])) | (((/* implicit */int) arr_10 [i_5] [i_5] [i_5]))))))));
    }
    for (short i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (1054997519253775833ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51)))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_28 [i_9] &= ((/* implicit */_Bool) (-(((((/* implicit */int) (short)-19924)) % (((/* implicit */int) (short)-31751))))));
                        var_25 &= (((!(((/* implicit */_Bool) ((long long int) -1112593030))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((((/* implicit */short) var_11)), (arr_25 [i_6] [i_9] [(unsigned short)10])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 3; i_11 < 12; i_11 += 4) 
            {
                {
                    arr_33 [i_6] = ((/* implicit */int) ((long long int) var_11));
                    arr_34 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)16376)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_6] [i_6] [i_10] [i_10]))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */int) (-(min((((arr_35 [i_13] [i_11]) << (((((/* implicit */int) var_10)) - (15918))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6223403696713330258LL)) ? (arr_12 [i_6] [i_6] [i_12] [i_12] [i_13]) : (((/* implicit */unsigned int) -645876377)))))))));
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) var_2))), (var_4)))) ? (((/* implicit */long long int) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) 1079435576U)))))) : ((-(6223403696713330258LL)))));
                                var_28 = ((/* implicit */short) (_Bool)1);
                                var_29 = ((/* implicit */signed char) ((long long int) (_Bool)1));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) var_6);
                    var_31 = (i_6 % 2 == zero) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_39 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_6] [i_11] [(_Bool)1] [i_6])))) / (((/* implicit */int) ((unsigned char) arr_39 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_6] [i_10] [i_10] [i_10])))))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_39 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_6] [i_11] [(_Bool)1] [i_6])))) * (((/* implicit */int) ((unsigned char) arr_39 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_6] [i_10] [i_10] [i_10]))))));
                }
            } 
        } 
    }
}
