/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5548
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) 4032);
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (((-(arr_1 [(unsigned short)16]))) << (((((((var_9) ? (arr_1 [6LL]) : (arr_1 [12LL]))) + (5608164612835446569LL))) - (2LL))))))));
        var_16 = max((((/* implicit */unsigned short) var_10)), (var_5));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(-4040)))), (min((14297934895832703725ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) && (((/* implicit */_Bool) (unsigned short)8))))) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */int) max(((!(((/* implicit */_Bool) (~(((/* implicit */int) var_14))))))), (((((/* implicit */long long int) min((663972731U), (((/* implicit */unsigned int) var_3))))) >= ((~(arr_1 [i_0])))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (signed char)126))));
                var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((unsigned char) arr_4 [i_2]))) ? (((long long int) arr_4 [i_2])) : (((/* implicit */long long int) min((arr_4 [i_2]), (arr_4 [i_2]))))))));
            }
            arr_9 [i_0] [(unsigned char)2] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > ((-(arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_0])))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_20 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) arr_12 [i_0] [i_3 - 1] [(signed char)8]))))));
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [10LL]))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 - 1] [i_0])) ? ((-(((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_0])))) : (((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_0]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_16 [i_0] [i_4] [i_3 - 1] [i_0] = ((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1]);
                arr_17 [i_0] [i_3] [i_0] = ((/* implicit */int) (signed char)101);
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                var_23 += ((/* implicit */unsigned int) (unsigned char)200);
                arr_20 [i_0] [i_0] = ((/* implicit */signed char) (((-(arr_7 [i_3 - 1] [i_3] [i_5 + 1] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 + 1] [i_0] [i_0] [i_0])))));
            }
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            arr_30 [i_0] [i_0] [(signed char)13] [i_7] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((signed char) arr_18 [i_0] [i_0] [i_0]))) > (((/* implicit */int) arr_29 [i_0] [i_0] [i_3] [i_3] [i_6] [i_7 + 1] [i_8])))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_0] [i_3 - 1] [i_0] [i_7 + 1])), (9223372036854775807LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_8] [i_0] [i_8] [i_8])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_0])));
                            arr_31 [i_0] [i_0] [i_3] [i_6] [i_7] [i_0] = 4032;
                            arr_32 [i_8] [i_7] [i_0] [i_3] [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_25 [i_3 - 1] [i_3 - 1] [10U] [i_3 - 1]))));
            }
            arr_33 [0LL] [i_3 - 1] &= ((/* implicit */short) arr_4 [8LL]);
        }
        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned char)58)))) + (2147483647))) >> (((max((((/* implicit */long long int) 4036)), (-9084327159468271274LL))) - (4013LL)))))) ? (((/* implicit */int) ((unsigned char) (-(1897721615U))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (4032)))))))));
            var_26 -= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)69))));
            var_27 = ((/* implicit */signed char) arr_1 [i_0]);
        }
    }
    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_27 [i_10] [i_10] [14ULL] [i_10] [i_10])))) ? (((/* implicit */int) max(((unsigned short)14707), (((/* implicit */unsigned short) (signed char)-50))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [(short)12] [i_10] [16U] [i_10] [i_10])) || (((/* implicit */_Bool) arr_27 [i_10] [i_10] [10U] [i_10] [i_10])))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)(-32767 - 1))))))));
        arr_39 [i_10] &= ((/* implicit */short) (~(max((((/* implicit */long long int) max((1023576868), (((/* implicit */int) (unsigned short)65528))))), (((((/* implicit */long long int) 12U)) | (arr_23 [i_10] [i_10] [i_10])))))));
        var_30 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_10])) || (((/* implicit */_Bool) arr_3 [i_10])))), (((arr_3 [i_10]) < (arr_3 [i_10])))));
    }
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_5))));
    var_32 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) var_4))) ? (max((arr_3 [i_11]), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_11] [i_11])) - (((/* implicit */int) (unsigned short)12))))))))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (short)-32761))));
    }
    for (int i_12 = 0; i_12 < 12; i_12 += 1) 
    {
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) arr_43 [i_12]))))))));
        arr_44 [i_12] = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_12]))) : (arr_10 [i_12] [i_12] [i_12]))) * (((/* implicit */unsigned long long int) arr_34 [i_12]))))));
        arr_45 [i_12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(arr_34 [i_12])))) || (((/* implicit */_Bool) (-(arr_34 [i_12])))))) ? ((+(arr_10 [i_12] [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_3 [i_12]) : (((/* implicit */long long int) arr_18 [(_Bool)1] [i_12] [i_12])))))))))));
    }
}
