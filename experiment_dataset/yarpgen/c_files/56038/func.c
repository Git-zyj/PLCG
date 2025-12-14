/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56038
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned char)1] = ((/* implicit */int) (+(((1738784771U) - (((/* implicit */unsigned int) ((int) 2147483647U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) 2147483654U));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */short) var_15);
        var_16 = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            arr_11 [i_1] [i_2 + 1] = (+(min((max((arr_6 [i_1]), (((/* implicit */int) (signed char)117)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (2147483657U)))))));
            arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_2 + 2] [i_1]), (arr_7 [i_2 + 4] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_2 + 2])) || (((/* implicit */_Bool) ((((arr_10 [i_1] [10] [i_1]) + (9223372036854775807LL))) >> (((133955584U) - (133955557U))))))))) : (((/* implicit */int) var_4))));
        }
        for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            arr_15 [i_1] [i_1] [i_3] = ((/* implicit */signed char) arr_14 [i_1] [i_3 + 4]);
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_3] [17ULL] [(signed char)2])) >> ((((~((~(((/* implicit */int) arr_16 [i_6] [i_5] [i_1] [i_1])))))) - (47)))));
                            arr_25 [i_1] [i_4 + 1] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) min((3107417583U), (arr_24 [i_1] [i_4 + 3] [i_1] [(_Bool)1] [i_4 + 3])))) : (max((((/* implicit */long long int) arr_24 [3] [i_4 - 1] [i_1] [16ULL] [i_5])), (var_11)))));
                            var_18 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_15) || (((/* implicit */_Bool) arr_18 [i_1] [i_3 + 3] [i_4 + 3]))))) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6])) : (-1)))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        arr_28 [i_7 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_7 + 1])), (arr_27 [i_7 + 1] [i_7 + 1])))) ? (((((/* implicit */_Bool) arr_27 [i_7 - 1] [i_7 + 1])) ? (arr_1 [i_7 + 1]) : (-4503599627370496LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_7 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)60)))))))));
        arr_29 [i_7] = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 + 1] [i_7 + 1]))) : (var_6))) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 - 1] [i_7 + 1]))));
        var_19 = ((/* implicit */unsigned short) 754260198U);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 2; i_8 < 19; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (unsigned int i_10 = 2; i_10 < 16; i_10 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (4503599627370503LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_7])))))) ? (arr_1 [i_7]) : (((/* implicit */long long int) arr_32 [i_10 + 3] [i_8 - 1] [i_9]))));
                        var_21 *= ((/* implicit */unsigned long long int) arr_30 [i_7]);
                        arr_39 [i_7] [(unsigned char)11] [(_Bool)0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))))) ? (((/* implicit */int) arr_33 [15U])) : (((/* implicit */int) (unsigned char)253))));
                        var_22 = ((/* implicit */signed char) ((_Bool) arr_38 [(unsigned short)6] [i_10] [i_10] [13ULL] [(_Bool)1] [i_10 - 2]));
                    }
                } 
            } 
            var_23 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_30 [i_7]))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) 2255400070U)) >= (268419072ULL))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 3; i_11 < 16; i_11 += 1) 
            {
                for (unsigned int i_12 = 2; i_12 < 19; i_12 += 4) 
                {
                    {
                        arr_44 [9] [9] [i_11] [11] &= ((/* implicit */unsigned int) -5519012006459270506LL);
                        arr_45 [i_7 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_12 - 1] [i_12 - 1])) ? (-25) : (((/* implicit */int) arr_41 [i_11 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(_Bool)1]))) : ((~(var_5)))));
                        arr_46 [i_7] [i_7] [i_11 + 4] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3107417555U)) ? (2147483657U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107)))));
                    }
                } 
            } 
        }
    }
    var_24 = var_1;
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) max(((+(max((var_6), (((/* implicit */long long int) -594708486)))))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) ((signed char) 144115188075855871ULL)))))))))));
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        for (int i_14 = 1; i_14 < 8; i_14 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) | (arr_9 [i_13] [i_13]))), ((((((~(8970765110533732754LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (short)1984)) - (1984))))))))));
                arr_52 [i_14] [i_14 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_32 [i_14] [3U] [i_14 - 1]))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8705))))) : (var_6)));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) -4503599627370488LL))));
            }
        } 
    } 
}
