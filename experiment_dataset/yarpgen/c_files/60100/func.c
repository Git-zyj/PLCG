/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60100
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
    var_20 = var_9;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [1U] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_1 [i_0])))) ^ (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] [i_3] [i_4 - 2] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) : (arr_7 [i_0] [i_2] [16U] [16U])))) ? (((3481769725U) | (3481769742U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 813197591U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-20936)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((((((/* implicit */_Bool) 3481769725U)) ? (6798867938031155023ULL) : (((/* implicit */unsigned long long int) -1091436568)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [(unsigned char)3] [(unsigned char)10])))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((4294967274U) <= (((/* implicit */unsigned int) -65536)))))))) ? (min((min((((/* implicit */long long int) var_10)), (var_12))), (((/* implicit */long long int) arr_5 [i_4] [i_1] [i_4])))) : (((/* implicit */long long int) (+(min((3585582371U), (((/* implicit */unsigned int) arr_14 [i_4 - 4] [i_4] [(short)12])))))))));
                                arr_17 [i_4] [(short)16] [i_2] [i_4] [i_4 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14017))))) ? (((/* implicit */int) (short)28603)) : (((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_3] [i_0])))))) != (((((/* implicit */_Bool) arr_12 [i_4 - 3] [5] [(signed char)15] [(_Bool)1] [5] [5])) ? (arr_13 [i_4 + 1] [i_4 - 1] [i_4 - 4] [i_4 - 1] [i_4 + 1] [(short)8]) : (((251658240U) & (((/* implicit */unsigned int) 1421985628))))))));
                                var_22 = ((/* implicit */unsigned char) min((max((4294967288U), (((unsigned int) 813197570U)))), (((/* implicit */unsigned int) ((_Bool) arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_4])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((unsigned int) 328509485U)) : (min((((/* implicit */unsigned int) arr_10 [i_2] [i_1] [16U] [i_0] [i_1])), (1405725907U)))))) ? (arr_7 [i_0] [i_0] [i_0] [9U]) : (((/* implicit */long long int) 3566727715U))));
                    var_24 = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [(unsigned char)18]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17U)) ? ((+(((/* implicit */int) (unsigned char)245)))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)63))))))) ? (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) arr_15 [i_0] [2U] [2U] [i_0] [i_0] [i_5])) : (((/* implicit */int) (signed char)2)))) : (((/* implicit */int) (signed char)-36)))))));
                    var_26 = ((/* implicit */short) arr_21 [i_0] [i_5] [i_0] [i_0]);
                    var_27 = ((((/* implicit */_Bool) max((((/* implicit */signed char) var_10)), (var_15)))) ? ((~(((/* implicit */int) arr_15 [i_6] [i_0] [i_5] [i_5] [i_0] [i_0])))) : (((/* implicit */int) arr_22 [i_0] [i_5] [i_6])));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) ((unsigned short) ((short) ((arr_11 [i_0] [i_0] [12]) ? (var_17) : (328509487U)))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            for (signed char i_8 = 3; i_8 < 19; i_8 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) arr_10 [i_9] [i_8 - 1] [(unsigned char)15] [(unsigned char)10] [(unsigned char)15]);
                        arr_31 [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-16))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_8 - 2] [i_7 - 2] [i_7 + 1] [i_7 + 4] [i_7 + 2])) ? (((/* implicit */int) var_2)) : (arr_10 [i_8 - 3] [i_7 + 4] [i_7 + 4] [i_7 - 3] [i_7 - 1])))) : (min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) arr_26 [i_7 - 2] [i_7 + 3] [i_7 - 2] [i_9])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)0])))))))));
                        var_30 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_12 [(unsigned char)13] [2U] [i_7] [i_7] [i_0] [i_0])), ((-(min((((/* implicit */unsigned int) var_15)), (4294967278U)))))));
                    }
                    for (int i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        var_31 *= ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned short) arr_15 [16U] [i_7 + 1] [i_8 - 3] [i_10 - 3] [i_0] [i_0]))));
                        var_32 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) (short)28603)))));
                        var_33 = ((/* implicit */int) arr_15 [i_0] [i_7 + 3] [i_7 + 3] [i_0] [i_7] [8]);
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 2; i_11 < 18; i_11 += 3) 
                        {
                            arr_40 [i_11] [i_10 - 1] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((var_11), (((/* implicit */unsigned long long int) 3757300716U)))) : (((/* implicit */unsigned long long int) ((3966457807U) + (709384933U))))))) ? (((/* implicit */int) min((arr_28 [i_7] [i_8 + 1]), (arr_28 [i_7] [i_8 + 1])))) : (min((max((arr_2 [i_7] [0ULL]), (65536))), (((/* implicit */int) (signed char)11))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_13 = 3; i_13 < 19; i_13 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned char) arr_21 [i_8 - 1] [i_12 - 1] [i_8 - 1] [i_13 - 2]);
                            arr_46 [i_0] [i_0] [i_7] [i_8] [i_7] [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_7 + 1])) | (((/* implicit */int) ((709384925U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_7] [i_8 - 2] [i_12 + 2] [i_12 + 2]))))))));
                        }
                        var_36 = ((/* implicit */signed char) arr_29 [i_7 - 3] [i_8 + 1] [i_12 + 1]);
                    }
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7] [i_8 - 2])) ? (65536) : (((/* implicit */int) (signed char)-65))))))))));
                    var_38 ^= ((/* implicit */unsigned char) (+((-(27044773)))));
                }
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        arr_49 [(unsigned short)7] = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */short) arr_22 [(_Bool)1] [i_14] [i_14])), ((short)20779)))), (max(((((_Bool)0) ? (((/* implicit */int) (short)12464)) : (((/* implicit */int) (signed char)49)))), (min((((/* implicit */int) (short)32767)), (65549)))))));
        arr_50 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) min((arr_15 [i_14] [i_14] [i_14] [(_Bool)1] [10] [i_14]), (arr_15 [i_14] [i_14] [i_14] [i_14] [2U] [i_14])))) : (((((/* implicit */_Bool) arr_2 [i_14] [i_14])) ? (arr_2 [i_14] [i_14]) : (arr_2 [i_14] [i_14])))));
        var_39 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_20 [i_14] [i_14])) ? (((/* implicit */int) arr_20 [i_14] [i_14])) : (((/* implicit */int) arr_20 [i_14] [i_14])))), (((((/* implicit */_Bool) arr_20 [i_14] [i_14])) ? (((/* implicit */int) arr_20 [i_14] [i_14])) : (((/* implicit */int) arr_20 [i_14] [i_14]))))));
        var_40 -= ((/* implicit */int) var_14);
        var_41 &= ((/* implicit */signed char) min((((((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (signed char)-1))))) >> (((((var_17) - (((/* implicit */unsigned int) arr_2 [i_14] [(unsigned char)17])))) - (2998684222U))))), ((-(((/* implicit */int) arr_20 [i_14] [(_Bool)1]))))));
    }
    for (unsigned int i_15 = 2; i_15 < 12; i_15 += 2) 
    {
        var_42 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3049301663U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))) : (max((((/* implicit */unsigned int) (unsigned char)72)), (3585582370U)))))) ? (((/* implicit */int) min(((short)14336), (((/* implicit */short) (signed char)0))))) : (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_15] [(unsigned char)1] [(signed char)19] [i_15]))))) : (((((/* implicit */_Bool) (short)-32738)) ? (-800593898) : (((/* implicit */int) (signed char)-94)))))));
        var_43 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */int) (signed char)0)), (arr_44 [(unsigned char)14] [i_15 - 2] [i_15 + 1] [i_15 + 3] [i_15] [(unsigned char)14])))) ? (min((((/* implicit */int) (unsigned short)55963)), (-2147483628))) : ((+(((/* implicit */int) (unsigned short)39288))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 1) 
    {
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 3) 
        {
            {
                arr_61 [i_17] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)14152)) ? (709384943U) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((unsigned int) (short)(-32767 - 1))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)6), ((signed char)-68)))))))));
                var_44 = ((/* implicit */unsigned char) (short)48);
            }
        } 
    } 
    var_45 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))), (min((var_17), (var_5))))) << ((((~(((/* implicit */int) var_10)))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (-1472289652))))))));
}
