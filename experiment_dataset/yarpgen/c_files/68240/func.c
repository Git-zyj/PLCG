/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68240
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(11178937801741652096ULL)))) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */int) arr_1 [i_3 + 2])) : (((/* implicit */int) arr_1 [i_2 + 3]))))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_3))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */_Bool) (((((~(4ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [(signed char)6] [i_4] [i_5])) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (short)1920))))))) / (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-114)) ? (arr_7 [i_5] [i_4] [i_4] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32766))))))))));
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_4 + 1] [i_0] = ((/* implicit */unsigned char) ((var_12) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))));
                            var_19 = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)161))))) ? (((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) arr_14 [i_0])) : (1464849083))) : (((/* implicit */int) ((_Bool) 1769412083)))));
                            var_20 = ((/* implicit */unsigned int) ((0ULL) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)161)), ((short)-2755)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 18; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        {
                            arr_26 [i_0] [i_8 + 1] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_6 [i_0] [i_8 - 2] [i_1] [i_0])) ^ (((/* implicit */int) var_6))))));
                            arr_27 [i_0] [(short)15] [i_8] [(unsigned short)9] [(unsigned char)9] = ((/* implicit */unsigned long long int) (~(((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)150)), ((unsigned short)41005)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    for (int i_11 = 4; i_11 < 16; i_11 += 1) 
                    {
                        for (int i_12 = 1; i_12 < 18; i_12 += 4) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                                var_22 = ((/* implicit */short) arr_35 [i_11] [i_12] [(_Bool)1] [i_11]);
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_12 + 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_13 = 3; i_13 < 12; i_13 += 2) 
    {
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            for (short i_15 = 3; i_15 < 12; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 4; i_16 < 12; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 3; i_17 < 12; i_17 += 1) 
                        {
                            {
                                var_24 = var_6;
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((arr_49 [i_13] [i_13] [7LL] [7LL] [i_13 - 2] [7LL]), (((/* implicit */short) var_12)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            {
                                arr_54 [i_13] [i_13] [i_15] [i_15] [i_19] = ((/* implicit */unsigned int) ((var_2) | (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))))))));
                                arr_55 [i_14] [i_15 - 3] [i_18] [(unsigned char)0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)107))))) <= (((((/* implicit */_Bool) arr_36 [i_13 - 1])) ? (arr_36 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_18] [i_13 + 1] [i_15 + 1] [(short)8] [i_18] [i_13])))))));
                                var_26 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_52 [i_13] [i_13 - 2] [i_13 - 1] [i_13 - 1] [i_13])))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) ^ (2312336532U)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_19] [i_18] [i_15 - 3] [16U])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_45 [i_15 - 3] [i_18] [i_15 - 1] [i_18])))))))));
                                var_28 = ((/* implicit */unsigned long long int) var_11);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        for (unsigned int i_21 = 0; i_21 < 13; i_21 += 1) 
                        {
                            {
                                var_29 |= ((/* implicit */_Bool) (unsigned char)94);
                                arr_61 [i_13 + 1] [i_13] [i_13] [i_13] [i_13] = max(((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_14]))) * (var_8))))), (((unsigned int) var_0)));
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) & (((/* implicit */int) var_11)))) == ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))))));
                                arr_62 [i_13 - 2] [i_14] [i_15] [i_20] [i_21] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        for (signed char i_23 = 0; i_23 < 13; i_23 += 3) 
                        {
                            {
                                var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4154348418U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (4086805812U)));
                                arr_68 [i_14] [8] [i_14] [i_14] [i_14] &= ((/* implicit */short) max(((+(((/* implicit */int) (short)32766)))), ((+(((/* implicit */int) var_5))))));
                                arr_69 [i_23] [(signed char)12] [i_23] [i_22] [i_23] = ((/* implicit */_Bool) ((((var_5) ? (arr_25 [i_23] [i_22] [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_23] [0U] [i_14] [i_13]))))) << (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)240))))) ? (((((/* implicit */int) (unsigned char)243)) >> (((((/* implicit */int) arr_1 [(_Bool)1])) - (76))))) : (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
