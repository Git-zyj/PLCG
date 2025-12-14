/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69274
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
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_2 + 1])) | (min((((/* implicit */int) (!(((/* implicit */_Bool) 36028797002186752ULL))))), (((((/* implicit */int) arr_9 [i_1 + 2] [i_1] [i_1] [i_2 + 1] [i_1 + 2] [i_1] [i_0])) ^ (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3] [(short)1] [i_2] [i_2 - 1]))))))));
                                arr_11 [i_0] [i_0] [i_0] [(signed char)5] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [0U] [i_1] [0U] [0U] [i_1])) : (((/* implicit */int) (unsigned short)65535))));
                                var_15 -= ((/* implicit */unsigned char) ((762557288U) + (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)11489)), ((unsigned short)8953)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_0] [i_1 + 2] [i_0]))) : (((((/* implicit */_Bool) (short)26275)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (890448364U)))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)17712)) | (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)56563)) >= (((/* implicit */int) (signed char)-23)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 890448364U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (var_6)))) : (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) 12849998303719219670ULL)) ? (((/* implicit */int) (unsigned short)8188)) : (((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 2; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 10; i_7 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        arr_22 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((6142103256455365338ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_6] [i_5] [i_5] [i_8] [i_8]))))) && (((/* implicit */_Bool) 606200682U))));
                        var_17 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (var_6)))) * (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)27533))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_18 = ((signed char) (~(((/* implicit */int) arr_15 [i_5]))));
                        var_19 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-116)) || (((/* implicit */_Bool) arr_17 [i_9])))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_19 [i_7 - 2] [i_6]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 4) 
                    {
                        for (signed char i_11 = 3; i_11 < 13; i_11 += 2) 
                        {
                            {
                                arr_31 [i_7] [i_7] [i_10] [i_11] &= ((/* implicit */short) (+(((((/* implicit */_Bool) 6749466828105105405ULL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_1))))));
                                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2246342876907827124ULL))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) (unsigned char)58)))));
                }
            } 
        } 
        arr_32 [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */int) ((short) var_10))) : ((+(((/* implicit */int) var_1))))));
        arr_33 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 122523911461873723ULL)) ? (arr_20 [(signed char)12] [i_5] [i_5] [(signed char)12] [i_5] [i_5]) : (var_6)))) ? (((/* implicit */int) arr_27 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 2])) : (((/* implicit */int) arr_27 [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2]))));
        arr_34 [i_5] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2199006478336ULL)))))));
        arr_35 [i_5 + 1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_5] [(short)0] [i_5 + 1] [i_5 - 2] [i_5 + 2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(signed char)10] [4U] [i_5] [i_5 + 2] [i_5 + 1])))));
    }
}
