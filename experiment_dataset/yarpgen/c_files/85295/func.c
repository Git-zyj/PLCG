/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85295
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
    var_12 |= ((/* implicit */int) ((unsigned int) (_Bool)0));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)148))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))));
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)8])))))));
                        var_16 = ((/* implicit */unsigned long long int) (short)511);
                    }
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 2) 
                        {
                            var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)82))));
                            var_18 &= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) (short)-504))));
                            var_19 |= ((long long int) (short)490);
                            var_20 = ((/* implicit */int) ((signed char) 841667143));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3661133355U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3661133361U)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 8504069164633127316ULL))));
                            var_23 *= ((/* implicit */short) (+(var_4)));
                        }
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_24 ^= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_25 ^= ((/* implicit */long long int) 4294967295U);
                            var_26 = ((/* implicit */unsigned short) (~(-841667147)));
                            var_27 = ((/* implicit */unsigned int) (+((+(var_3)))));
                        }
                        var_28 &= ((/* implicit */_Bool) ((signed char) 3086815430U));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((unsigned long long int) var_10)))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((unsigned short) 3U)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_31 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_8 + 1])) & (((/* implicit */int) arr_12 [i_0 + 1] [0ULL] [i_2 - 1] [i_8 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 2) 
                        {
                            var_32 = ((int) var_11);
                            var_33 = ((/* implicit */_Bool) (((+(var_5))) % (3500410581U)));
                            var_34 &= ((/* implicit */signed char) (_Bool)1);
                        }
                    }
                    var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)498)) - (841667149)));
                    var_36 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [(short)6] [(short)6] [(short)6] [i_2 + 1]))));
                }
            } 
        } 
        var_37 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (841667153) : (((/* implicit */int) var_0)))));
    }
    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 3770838342U)) || (((/* implicit */_Bool) arr_26 [3LL] [3LL])))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (9942674909076424292ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(8504069164633127318ULL)))))))))))));
        var_39 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((min((var_6), (((/* implicit */long long int) var_11)))) - (arr_25 [(_Bool)1] [(unsigned short)13])))) % (((var_4) + (var_4)))));
    }
    var_40 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) 2U)), (var_10))))), (((max((((/* implicit */unsigned long long int) var_9)), (var_3))) >> (((((/* implicit */int) ((signed char) (unsigned char)236))) + (27)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_7)))) ? (min((((/* implicit */unsigned int) min(((unsigned char)19), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */unsigned int) (unsigned char)201)), (var_8))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned char)161)))), (((/* implicit */int) arr_31 [i_11] [i_11])))))));
        var_42 = ((/* implicit */unsigned short) min((max((((/* implicit */signed char) var_9)), ((signed char)-1))), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))) != (27U))))));
    }
    for (unsigned int i_12 = 2; i_12 < 24; i_12 += 1) 
    {
        var_43 = ((/* implicit */unsigned short) 2369677641U);
        var_44 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2)))) ? (min((((/* implicit */long long int) 0U)), (var_6))) : (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_12 - 2] [i_12 - 2])) - (((/* implicit */int) arr_32 [i_12 - 1])))))));
        /* LoopSeq 2 */
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            var_45 *= ((/* implicit */short) (~(max((var_8), (((/* implicit */unsigned int) arr_33 [i_12 - 1]))))));
            var_46 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (16U)))));
        }
        for (int i_14 = 3; i_14 < 23; i_14 += 4) 
        {
            var_47 = ((/* implicit */unsigned int) (unsigned char)184);
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (unsigned char)204)))))));
                    var_49 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max(((signed char)28), ((signed char)23)))), (max((6968418812202931986ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                }
                /* vectorizable */
                for (short i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((unsigned long long int) var_7)))));
                    var_51 -= ((/* implicit */short) (~((~(var_7)))));
                    var_52 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_12 - 1]))));
                }
                /* LoopSeq 3 */
                for (short i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    var_53 = ((/* implicit */unsigned int) var_2);
                    var_54 ^= max((((/* implicit */unsigned int) ((int) var_4))), (((unsigned int) min((((/* implicit */unsigned int) (unsigned char)184)), (3086815445U)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_55 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)511))));
                        var_56 = ((/* implicit */signed char) (~(3086815430U)));
                        var_57 = ((/* implicit */short) ((var_5) << (((arr_41 [i_12 - 2] [i_14 + 1]) - (831060305)))));
                        var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)255)))));
                    }
                }
                for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 3) /* same iter space */
                {
                    var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) min(((+(((((/* implicit */_Bool) 1608809609)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned char)151)))))), (((/* implicit */int) (unsigned char)17)))))));
                    var_60 = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) var_2)))));
                    var_61 = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) + (633833943U))));
                    var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) ((short) ((unsigned long long int) (_Bool)0))))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 3) /* same iter space */
                {
                    var_63 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-31)) ^ (((/* implicit */int) (unsigned char)55))));
                    var_64 = ((/* implicit */long long int) (_Bool)1);
                }
            }
            var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) max(((unsigned short)7), (((/* implicit */unsigned short) (unsigned char)57)))))));
        }
    }
    var_66 = ((/* implicit */unsigned char) var_9);
}
