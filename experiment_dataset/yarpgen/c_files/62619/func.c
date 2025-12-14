/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62619
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_6 [i_2] [0LL] [i_2]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) (~(arr_7 [i_0 + 2] [i_0])));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_14))));
                        var_19 = (!(((/* implicit */_Bool) (short)32754)));
                    }
                    var_20 += ((/* implicit */short) 9444389258273575986ULL);
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_1 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_1 - 2] [i_1 + 1] [i_2])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [(unsigned short)9]))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) 3993681720U)) : (9905516381110463694ULL))))) : (((/* implicit */int) var_13))));
                    arr_13 [i_0] = ((/* implicit */long long int) ((9002354815435975634ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-171)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                arr_19 [i_5] [i_5] = min(((~(((arr_4 [i_5] [i_4] [i_4]) ? (((/* implicit */unsigned long long int) var_14)) : (arr_7 [i_4] [i_5]))))), (((/* implicit */unsigned long long int) arr_17 [i_4] [i_5] [i_4])));
                /* LoopSeq 2 */
                for (short i_6 = 3; i_6 < 19; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        for (long long int i_8 = 2; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8242271554247827429LL)) ? (arr_16 [(unsigned short)6]) : (arr_16 [(unsigned short)18])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7 + 1] [i_8] [i_8 - 2] [i_8] [i_8]))) / (9002354815435975629ULL)))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((var_12) ? (var_15) : (((/* implicit */long long int) var_10)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_5] [i_4 + 1])))))), (arr_24 [i_4] [i_5] [i_8] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)0))))))));
                                var_23 ^= arr_14 [i_5];
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))));
                }
                for (long long int i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_4] [i_4 + 1] [i_4]))) : (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) arr_21 [i_5] [i_4])) : (16190240355778359025ULL)))))) ? (((/* implicit */unsigned long long int) arr_25 [i_4] [i_5] [i_4] [i_5] [i_5] [i_4 - 1] [i_9])) : (((((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_9 + 1] [i_5])) ? (arr_23 [i_4 - 1] [i_5] [i_9 + 1] [i_5]) : (arr_23 [i_5] [i_5] [i_5] [i_5])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        arr_33 [i_5] = ((long long int) -9223372036854775803LL);
                        arr_34 [i_4] [i_10] [i_5] [(unsigned short)20] [i_5] [i_4 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)310)) ? (15ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (2187695332522202638LL) : (var_15))))));
                        arr_35 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_4] [i_4 - 1] [i_5] [i_9] [i_10] [i_5])) | (((((/* implicit */_Bool) 9014597385948553116ULL)) ? (((/* implicit */int) (_Bool)1)) : (-1012129172)))));
                        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_10] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_9 + 3])) : (((/* implicit */int) var_16))))));
                    }
                    arr_36 [i_4] [i_4] [i_5] [i_9] = ((/* implicit */_Bool) (~(1412278713U)));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        arr_39 [i_11] [i_11] = ((((/* implicit */_Bool) 2187695332522202638LL)) ? (((/* implicit */long long int) min(((~(1012129171))), (((/* implicit */int) (unsigned char)255))))) : (min((((((/* implicit */_Bool) var_10)) ? (-1196261277861171001LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))))), (-787463421177099230LL))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    var_27 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-787463421177099231LL)))));
                    var_28 = ((/* implicit */short) ((((long long int) (_Bool)0)) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_29 = ((/* implicit */short) min((((/* implicit */long long int) ((_Bool) arr_2 [i_11] [i_11]))), (min((((/* implicit */long long int) (short)-5305)), (8795019280384LL)))));
                    var_30 = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
    {
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) << (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_0 [i_14]))))))))));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) -4125705348296738682LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-5310))));
        arr_49 [i_14] = ((/* implicit */_Bool) var_16);
        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [i_14] [i_14]))));
    }
    for (short i_15 = 3; i_15 < 15; i_15 += 3) 
    {
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_23 [(_Bool)1] [i_15 + 4] [i_15] [(_Bool)1]))));
        var_35 = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)7)), ((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) -6965341822588532847LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4537))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_1))))) == (((/* implicit */int) ((_Bool) arr_5 [20LL] [i_15] [20LL]))))))));
    }
}
