/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68392
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)-29102))) ? (var_19) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) : ((-(4142447151U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) 4047724669U))) && (((/* implicit */_Bool) max((13201435865424292469ULL), (((/* implicit */unsigned long long int) var_19)))))))))));
    var_21 = ((/* implicit */signed char) (+(247242627U)));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((signed char) (((-(((/* implicit */int) var_8)))) * ((+(((/* implicit */int) var_11)))))));
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) (-(((arr_0 [i_0]) | (((/* implicit */long long int) arr_1 [11LL]))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_0 + 1] [i_1] = max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37908)) % (((/* implicit */int) (unsigned short)27627))))), (12464880493587842866ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37908)) ? (((/* implicit */int) arr_6 [3ULL] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (8301349744807863852LL))))))));
            arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1 - 1]) < (arr_0 [i_1 - 2]))))) : (arr_0 [i_1 - 2])));
            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */long long int) arr_1 [i_0])) : ((~(arr_0 [i_0])))));
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                arr_16 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
                var_23 = var_14;
                var_24 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_2]))))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
            }
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [6LL] [i_2]))))))))));
            var_26 += ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (unsigned char)45)), (8583346603686925773LL)))));
        }
        var_27 = ((/* implicit */long long int) max((var_27), (var_14)));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) (~(arr_12 [i_0] [(unsigned short)5])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3702296802U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) : (2829929408U)))) ? ((~(arr_1 [i_0]))) : (arr_1 [i_0])))))))));
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            var_29 = ((/* implicit */int) arr_20 [i_5]);
            var_30 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (2887256300970736797LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4])) ? (((/* implicit */int) arr_19 [i_4] [i_4])) : (1645319098))))));
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_6 [i_4] [i_5]))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 4; i_6 < 12; i_6 += 2) 
            {
                for (unsigned int i_7 = 4; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_32 = arr_0 [i_4];
                        var_33 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_10 [i_4]))))));
                        arr_28 [i_4] [(unsigned char)10] [i_4] [(unsigned char)10] |= ((/* implicit */long long int) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5]);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                {
                    var_34 = ((/* implicit */short) ((unsigned int) ((arr_23 [i_8 - 1] [i_8 + 2]) | (arr_23 [i_8 + 2] [i_8 + 2]))));
                    var_35 = ((/* implicit */unsigned int) ((signed char) ((unsigned short) var_4)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_11 = 1; i_11 < 16; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_12 = 4; i_12 < 15; i_12 += 2) 
            {
                for (unsigned short i_13 = 3; i_13 < 15; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1338080649U)) ? (2065342805U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27628)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned char)37))));
                            var_38 += ((/* implicit */unsigned int) arr_43 [i_10] [i_10] [i_10] [i_10]);
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_10] [i_11 - 1] [(short)3])) ? (((/* implicit */int) arr_44 [i_10] [i_11 - 1] [(short)15] [i_11])) : (((/* implicit */int) arr_38 [i_10] [i_10] [i_11 + 2]))));
            var_40 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-1))));
            var_41 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned short)1040))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10] [i_10]))))))));
        }
        var_42 = ((/* implicit */unsigned char) arr_42 [i_10] [i_10] [i_10]);
    }
    for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            for (short i_17 = 1; i_17 < 19; i_17 += 2) 
            {
                {
                    var_43 *= ((/* implicit */short) arr_54 [i_17]);
                    var_44 |= ((/* implicit */int) (unsigned char)35);
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (13201435865424292486ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) : (min((arr_52 [i_15] [i_15] [i_15]), (((/* implicit */long long int) arr_55 [i_15] [i_15] [i_15] [i_15])))))))));
    }
    var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 4) 
    {
        for (short i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            {
                var_47 = ((/* implicit */unsigned int) arr_61 [i_18] [i_18] [i_18]);
                var_48 = ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)167)), ((unsigned short)33205)));
                arr_62 [i_18] [i_18] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_60 [i_18] [i_19]))) ? (((/* implicit */int) ((unsigned short) ((long long int) 2887256300970736797LL)))) : ((+(((/* implicit */int) (unsigned char)220))))));
            }
        } 
    } 
}
