/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55941
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
    var_11 *= ((/* implicit */_Bool) ((int) var_7));
    var_12 = ((/* implicit */unsigned long long int) var_0);
    var_13 = ((/* implicit */short) (+(min((9007199254740991ULL), (((/* implicit */unsigned long long int) -7572895703747325380LL))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) (-(10482076876567304742ULL)));
        var_15 &= ((/* implicit */signed char) ((unsigned char) (+(arr_2 [i_0 + 1]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) var_9);
                    arr_14 [i_1] [1ULL] [1ULL] |= ((/* implicit */unsigned long long int) ((unsigned short) ((short) arr_2 [i_1])));
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (8986282547721618899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
        var_16 = ((/* implicit */short) -3486089042425584068LL);
        arr_16 [i_1] = ((/* implicit */unsigned char) ((arr_11 [(short)3] [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))));
        var_17 = arr_5 [i_1] [5LL];
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_4])))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
            arr_22 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5])))));
        }
        arr_23 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (arr_2 [i_4]) : (((/* implicit */int) var_10))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) arr_11 [i_4] [i_6] [i_4]);
            arr_27 [i_4] [i_6] [i_6] = var_5;
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 3; i_8 < 13; i_8 += 4) 
            {
                arr_32 [i_4] [11U] [i_4] [i_4] = ((/* implicit */unsigned char) var_6);
                arr_33 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_1)))) ? ((+(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) arr_24 [i_4] [i_4]))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_7]))) ? (((/* implicit */int) arr_8 [i_8 - 2] [i_7] [i_7])) : (((((/* implicit */_Bool) arr_5 [i_4] [(short)12])) ? (((/* implicit */int) arr_28 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_24 [i_4] [i_4]))))));
            }
            /* LoopSeq 2 */
            for (short i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                var_22 = ((/* implicit */unsigned long long int) var_0);
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [13])) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (9464613900829864965ULL)));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-((-(arr_11 [i_4] [(short)1] [(short)1]))))))));
            }
            for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 3) 
            {
                arr_39 [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_37 [(unsigned char)8] [i_4] [(unsigned char)8]);
                var_25 = ((((/* implicit */int) (unsigned short)58061)) | (((/* implicit */int) arr_34 [i_4] [i_4] [i_10 - 2])));
                arr_40 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_26 [i_4])));
                arr_41 [i_4] [i_4] [i_10 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((2014477183U) - (2014477180U)))));
            }
            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) & (((/* implicit */int) arr_10 [i_4] [i_7] [i_4] [i_7]))));
            var_27 = ((/* implicit */_Bool) var_9);
        }
        arr_42 [i_4] [i_4] = ((unsigned short) var_3);
    }
}
