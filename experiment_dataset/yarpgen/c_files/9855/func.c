/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9855
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (~(var_12)));
        var_15 = ((/* implicit */int) var_0);
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        for (int i_2 = 4; i_2 < 20; i_2 += 2) 
        {
            {
                arr_11 [i_2] [i_2] [i_1] = (~((~(var_13))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                            {
                                var_16 = min(((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_5])) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 46962266)) ? (((/* implicit */int) var_11)) : (413386199)))) ? (((/* implicit */int) max((((/* implicit */short) var_3)), ((short)27915)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)119))))))));
                                var_17 *= ((/* implicit */signed char) var_6);
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                            {
                                var_18 = ((((/* implicit */_Bool) (unsigned short)33287)) ? (var_12) : (arr_16 [i_2 + 2] [i_2] [i_3 + 2] [i_4] [i_6]));
                                var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_3 + 2] [i_2 - 3]))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? ((~(arr_19 [(signed char)9] [i_2] [i_4] [i_4 - 1] [i_1] [i_2] [i_1]))) : (154830691))))));
                                arr_23 [i_3] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) arr_2 [i_1 - 4] [i_4 + 1])) / (var_7))));
                                arr_24 [i_1] [i_2 + 2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_3] [i_4 + 1] [i_1 - 3] [i_1] [i_1] [i_3])) / (((/* implicit */int) arr_20 [i_3] [i_4 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_3]))));
                            }
                            var_21 = ((/* implicit */unsigned short) min((var_21), (min((min((((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (arr_19 [i_1] [i_2] [2] [i_4] [i_1] [i_3] [i_3])))), ((unsigned short)32246))), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_11)))))))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(arr_20 [i_1] [(_Bool)1] [i_3 - 1] [i_4 - 1] [(_Bool)1] [i_3])))) * (((/* implicit */int) arr_20 [i_1] [i_2 - 2] [i_3 + 1] [i_4 - 1] [i_2] [i_3]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
                            {
                                var_23 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 + 1])) > (arr_22 [i_4 - 1] [i_4 - 1])));
                                arr_27 [i_4 + 1] [i_4 - 1] [(_Bool)1] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 2] [i_2]))));
                                arr_28 [i_1] [i_1 - 1] [i_1] [i_3] = ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_12))));
                            }
                            for (signed char i_8 = 1; i_8 < 21; i_8 += 4) 
                            {
                                arr_31 [i_1] [i_2] [i_3] [i_4 + 1] [i_8 - 1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_19 [i_3 + 2] [i_2 + 1] [i_2 + 2] [i_2] [i_1] [i_1] [i_1 - 4])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1])))))));
                                var_24 = ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (((((/* implicit */long long int) arr_3 [i_1 - 1])) | (var_13))));
                            }
                            for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                            {
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (-(((((((/* implicit */_Bool) 154830677)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_13)))) << (((((((/* implicit */_Bool) (unsigned short)58390)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12))) - (68LL))))))))));
                                arr_35 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) arr_2 [i_1 - 3] [i_9])))))));
                            }
                            arr_36 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_2] [i_3]))))) == (((((/* implicit */_Bool) arr_2 [i_4 - 1] [i_3 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 4]))) : (var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                {
                    var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((-9223372036854775805LL) - (-9223372036854775805LL)))))) ? (-2777778020443797714LL) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_4)))))))));
                    var_27 &= ((/* implicit */unsigned short) ((signed char) var_12));
                }
            } 
        } 
    } 
    var_28 += ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))));
}
