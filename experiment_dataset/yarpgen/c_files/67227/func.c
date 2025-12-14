/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67227
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)76)), ((short)255))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_11 [(unsigned char)0] [i_3] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_16)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned char)192)))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)86)) : (-1140292237))) : (((/* implicit */int) ((short) var_13))))) - (76)))));
                        arr_12 [i_0] [i_1] [(_Bool)1] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_0] [i_3]))))) || (((/* implicit */_Bool) 1140292236))));
                        arr_13 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) (+(((unsigned long long int) -1140292226))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_0] [(unsigned char)3] [(unsigned char)15] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-1140292237) : (((/* implicit */int) (unsigned char)27))))) ? (((((/* implicit */int) (unsigned char)7)) << (((((/* implicit */int) var_8)) + (111))))) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_1]))));
                            arr_22 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) arr_1 [i_4]))));
                            arr_23 [i_0] [i_2] [i_2] [i_5] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_16) - (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_1);
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_1] = ((/* implicit */short) var_11);
                            arr_28 [i_0] [(unsigned char)8] [i_2] [i_4] [i_6] [i_0] = ((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_0] [i_6]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            arr_33 [i_0] [i_1] [(unsigned short)6] [i_2] [(unsigned char)7] [i_4] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)192)) * (((/* implicit */int) (signed char)79))))));
                            arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] [(short)18] [i_7 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_0])) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (short)-512))));
                            arr_35 [i_1] [i_1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_7] [i_7 + 1] [i_1] [i_7 - 1])) && (((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7] [(unsigned short)14] [i_1] [i_7 + 1]))));
                            arr_36 [i_0] [i_1] [i_0] [i_1] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) & (18446744073709551591ULL)));
                            arr_37 [i_0] [i_1] [i_1] [i_4] [i_7 + 1] = ((/* implicit */unsigned short) arr_1 [i_0]);
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_41 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)221)) - (((/* implicit */int) var_0))));
                            arr_42 [(short)19] [i_1] [i_1] [i_2] [i_1] [(short)19] [i_8] = (!(((/* implicit */_Bool) (signed char)-91)));
                            arr_43 [i_8] [i_1] [i_8] [i_4] [i_1] = ((/* implicit */unsigned int) (signed char)70);
                            arr_44 [i_0] [i_1] [i_1] [i_0] [0ULL] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) <= (((/* implicit */int) arr_0 [i_8]))));
                        }
                    }
                    arr_45 [(unsigned short)17] [(unsigned short)17] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)226)) | (((/* implicit */int) (unsigned char)225))))) & (var_16)))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((67108832U) - (67108816U))))))));
                    arr_46 [i_2] [i_1] [(unsigned char)11] = var_4;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            {
                arr_54 [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_10])) || (((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [8] [i_10] [(unsigned char)16]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2340535353025944447ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_26 [i_9] [i_9] [22U])), ((unsigned char)19))))));
                arr_55 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_9] [i_10] [i_10] [i_10] [0U]))));
                arr_56 [i_9] [i_9] = arr_26 [i_9] [18] [0];
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        {
                            arr_63 [i_9] [i_9] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) max(((unsigned char)252), ((unsigned char)225)))) : ((-(((/* implicit */int) arr_38 [(signed char)20] [i_12] [i_11 + 1] [i_11] [i_11 - 2] [i_11 + 1]))))));
                            arr_64 [i_9] [i_10] [i_11 - 2] [i_11] = ((/* implicit */short) max((((/* implicit */int) arr_10 [i_9] [20ULL] [i_10] [i_11] [i_12] [(signed char)16])), (((((((/* implicit */int) (signed char)-40)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)56)) - (55)))))));
                            arr_65 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((signed char)23), ((signed char)119))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_11 - 1] [i_11 - 2]))))) : (((/* implicit */int) max(((short)15466), (((/* implicit */short) max((var_1), ((signed char)-20)))))))));
                            arr_66 [i_9] [i_10] [i_10] [i_11] [i_10] [i_11] = ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
                arr_67 [i_10] [i_9] = max(((unsigned char)63), (((/* implicit */unsigned char) ((((/* implicit */int) arr_62 [i_9] [i_9] [i_9] [i_10] [(signed char)3])) < (((/* implicit */int) ((unsigned char) arr_50 [i_9] [i_10])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_14);
}
