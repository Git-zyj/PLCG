/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57688
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) (+(218431430)));
        var_15 = ((/* implicit */short) (~(((int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) % (12075920235750004777ULL)));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) / ((+(((/* implicit */int) (signed char)7))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) var_6))));
                }
            } 
        } 
        var_19 &= ((/* implicit */long long int) (~(arr_3 [i_0])));
    }
    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 1) 
    {
        var_20 *= ((/* implicit */unsigned int) ((unsigned short) max((arr_9 [i_3 - 1]), (arr_9 [i_3 - 4]))));
        var_21 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 1]))))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)1818)) : (((/* implicit */int) (short)-8612)))) > (min((2147483647), (((/* implicit */int) (unsigned short)24))))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) (short)1126)))))));
                        arr_21 [i_4] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */int) ((((arr_11 [i_4] [i_4]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6]))))) > (max((var_11), (((/* implicit */unsigned long long int) (unsigned char)255))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 1])) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_4] [i_3] [i_6] [i_6]))))) ? (arr_12 [i_4] [i_3 + 1]) : (((/* implicit */int) arr_17 [i_3] [i_3] [i_3 - 2] [i_3]))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) max((min((var_3), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_7] [i_8]))))))), (arr_28 [i_7])));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((min((var_3), (((/* implicit */unsigned int) arr_17 [i_7] [i_7] [i_8] [i_7])))), (((/* implicit */unsigned int) ((signed char) arr_17 [i_8] [i_8] [i_7] [i_7]))))))));
            var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) ((max((arr_24 [12LL]), (((/* implicit */long long int) (short)8630)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_15 [i_7] [i_7] [i_7] [i_8]) : (var_3))))))) ? (((/* implicit */int) max((arr_16 [i_7] [i_8] [i_7] [i_8]), ((unsigned short)24760)))) : (((/* implicit */int) var_12))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8612)) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_8))))))) : ((-(arr_15 [i_8] [i_8] [i_8] [i_8])))));
                            arr_37 [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21998))) + (8193274646548105488ULL)));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_12 = 3; i_12 < 18; i_12 += 3) 
        {
            var_28 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7] [i_12 - 1])) ? (arr_15 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_26 [i_7] [i_12])), ((signed char)32)))))))) / (((arr_29 [i_12 - 2] [i_12] [i_7] [i_12]) / (((/* implicit */long long int) ((/* implicit */int) var_9))))));
            /* LoopSeq 3 */
            for (short i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                var_29 = (((~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)38)), (var_12)))))) & (((((/* implicit */_Bool) arr_33 [i_7] [i_12 + 1] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_4)) : (-1587184349))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        {
                            var_30 = (+(((arr_20 [i_7]) / (((/* implicit */int) var_7)))));
                            var_31 = ((/* implicit */short) max((var_31), (var_6)));
                            var_32 = ((/* implicit */unsigned long long int) arr_31 [i_7] [i_7] [i_13]);
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) arr_14 [i_12 + 1] [i_12 - 2] [i_12 + 1] [i_12]);
            }
            for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                var_34 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_41 [i_7])), (max((arr_14 [i_7] [i_12] [i_12 - 1] [i_16]), (((/* implicit */unsigned int) (signed char)114)))))), (((((/* implicit */_Bool) arr_32 [i_12 + 1] [i_12 - 2] [i_12 - 2] [i_12 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 2]))) : (var_3)))));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)63)) | (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_23 [i_7])) ? (-2147483646) : (arr_38 [i_7] [i_12] [i_7])))))) ? (((/* implicit */int) ((unsigned short) arr_42 [i_16] [i_12] [i_7] [i_7] [i_7]))) : (min(((~(((/* implicit */int) arr_51 [i_7] [i_12 - 3] [i_12] [i_16])))), (arr_12 [i_7] [i_16])))));
                var_36 |= ((/* implicit */_Bool) min((var_8), (((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11)))))))));
            }
            for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                var_37 |= ((/* implicit */unsigned char) var_1);
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) min((((((/* implicit */_Bool) arr_47 [i_12 + 1] [16] [16] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_7] [i_12 - 1] [i_17] [i_17] [i_12]))) : (max((arr_22 [i_17] [i_12]), (((/* implicit */unsigned long long int) (unsigned char)255)))))), (((/* implicit */unsigned long long int) ((arr_44 [i_7] [i_7] [i_7]) == (((/* implicit */int) arr_53 [i_12 + 1] [0LL]))))))))));
                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551596ULL), (((/* implicit */unsigned long long int) (unsigned char)241))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (min((max((((/* implicit */unsigned long long int) var_2)), (12393328867082057920ULL))), (((/* implicit */unsigned long long int) ((short) arr_38 [4U] [i_12] [i_17]))))))))));
            }
        }
        var_40 = ((/* implicit */int) arr_28 [i_7]);
    }
}
