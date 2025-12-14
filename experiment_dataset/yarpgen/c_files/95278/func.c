/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95278
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [(short)8] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1237168363U);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_8 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_5 [i_0] [i_1] [(signed char)1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1])))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [(unsigned short)2]))))) : (3057798932U)));
                    arr_10 [i_2] [i_1] [i_1] [(signed char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (signed char)-125)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (1071621564)))) ? (((((/* implicit */int) arr_0 [(unsigned short)7])) | (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)61015)) : (((/* implicit */int) (signed char)125)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_2 [i_1] [i_2])))) && (((/* implicit */_Bool) var_10)))))));
                }
                arr_11 [i_1] [(short)12] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2595716157477567396LL)) ? (((/* implicit */int) (short)2032)) : (((/* implicit */int) arr_0 [i_0])))) % (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])))))) : (max((((unsigned int) 1237168342U)), (((/* implicit */unsigned int) max((arr_2 [i_0] [11ULL]), (((/* implicit */short) arr_6 [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)14])) ? (((/* implicit */int) arr_0 [(unsigned short)6])) : (((/* implicit */int) arr_23 [i_3] [(short)3] [i_4] [i_5] [i_5] [i_5] [i_7]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_25 [i_3] [i_5] [i_6] [i_5] [i_6] [i_7] [i_5])), (1870066233)))) : (((((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_5] [i_7])) ? (arr_19 [i_4]) : (((/* implicit */unsigned long long int) 1237168363U))))))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (arr_19 [i_3])))) || (((/* implicit */_Bool) (signed char)-111)))))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (unsigned char)142)), ((+(var_8)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_17 [(short)3] [i_8])) > (((/* implicit */int) arr_17 [i_3] [i_8]))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [11U] [i_3]))))) : (((/* implicit */int) (unsigned short)33426)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [10U] [i_3] [i_3] [i_3]))))))))));
                                arr_40 [i_10] [i_10] [i_9] [i_10] [i_8] [i_10] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) ((var_5) || (((/* implicit */_Bool) arr_35 [(short)10] [i_11] [i_10] [i_10]))))) > (((arr_24 [i_3] [i_8] [i_9] [i_10] [i_9]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((482210709), (((/* implicit */int) arr_1 [i_3]))))), (arr_5 [i_3] [i_3] [i_3])));
        arr_41 [i_3] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))));
    }
}
