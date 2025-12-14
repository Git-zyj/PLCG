/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98110
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
    var_12 = -1085178940;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((min((-218134709), (1085178962))) - (((((-1085178941) + (2147483647))) >> (((-1085178947) + (1085178973)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1]))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)0))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_14 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) / (((/* implicit */int) var_0)))) * (((int) 1085178964))))) / (((unsigned long long int) max((((/* implicit */unsigned long long int) (short)3713)), (4779516037769372703ULL))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_15 *= ((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_14 [i_0 + 4]))));
                            var_16 = ((/* implicit */unsigned long long int) (!(((_Bool) arr_13 [i_4] [i_4] [i_2] [i_0 + 2] [i_4]))));
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-3716)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (26042657)))) : ((-(1805430576U))))) + (((/* implicit */unsigned int) -1085178941))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                        {
                            arr_20 [i_3] [i_5] [i_3] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_5] [i_2] [i_2] [i_3] [i_5]);
                            arr_21 [i_2] |= min(((+((-(((/* implicit */int) var_6)))))), ((+(((/* implicit */int) var_6)))));
                        }
                        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_2] [i_0])) + (((((/* implicit */int) (signed char)53)) + (((-1085178940) - (((/* implicit */int) (unsigned char)245))))))));
                        var_18 -= ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) 1295220386)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (var_8))) >> (((((((/* implicit */_Bool) 1085178963)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))) : (1805430567U))) - (4294967213U))))), (((/* implicit */unsigned int) (signed char)85))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) max((var_7), (var_7))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (signed char)126))));
                        arr_25 [i_0] [i_0] [i_2] [i_6] [i_2] [i_0] = ((/* implicit */signed char) var_1);
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_20 -= ((short) ((((/* implicit */int) (signed char)99)) >= (((/* implicit */int) (short)16586))));
                            var_21 = ((/* implicit */signed char) 7420013474052500985ULL);
                            var_22 += ((/* implicit */unsigned short) ((long long int) arr_13 [i_0] [i_8] [i_8] [i_0 + 1] [i_8]));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                        {
                            var_23 = arr_6 [i_9] [i_7] [i_0 + 4];
                            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)254))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0 - 2] [i_0]))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0 - 2] [i_0 + 4] [i_1]);
                            arr_37 [i_0] [i_1] [i_7] [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)1))));
                            arr_38 [i_10] [i_2] [i_1] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) (~(((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */unsigned long long int) -1085178963)) & (arr_40 [i_1] [i_1] [i_2] [i_7] [i_11]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_7] [i_2])))))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (short)27))))) | (((/* implicit */int) arr_7 [i_1] [i_11 + 1])))), ((~(((/* implicit */int) min((arr_14 [i_1]), (((/* implicit */unsigned short) (short)-4527))))))))))));
                            var_29 &= ((/* implicit */signed char) var_1);
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */_Bool) min((((((((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_2] [i_12] [i_2] [i_12])) / (1085178932))) % (arr_30 [i_0] [i_1] [i_2] [i_2]))), (((/* implicit */int) ((signed char) ((arr_4 [i_1] [i_1]) * (((/* implicit */unsigned long long int) var_8))))))));
                        arr_44 [i_12] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) var_9);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_2] [i_12] [i_1])) : (max((((/* implicit */int) (unsigned short)0)), (var_3)))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)0)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (18446744073709551604ULL))))) : (((/* implicit */unsigned long long int) arr_31 [i_2]))));
                        var_32 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)64273)) : (((/* implicit */int) (short)32765))))) ? (((var_9) / (arr_30 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 3]))) : (((/* implicit */int) ((152991378U) >= (((/* implicit */unsigned int) arr_1 [i_0]))))));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)23949)) : (arr_1 [i_0 + 1])));
                        var_34 -= ((/* implicit */unsigned int) ((arr_32 [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0 - 2])))));
                    }
                    arr_48 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_2);
                }
                for (unsigned short i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
                {
                    arr_51 [i_14] [i_1] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)24463)) : (max((min((((/* implicit */int) (signed char)57)), (1085178943))), (((/* implicit */int) (signed char)-73))))));
                    var_35 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) arr_32 [i_0] [i_14] [i_0 - 1] [i_14] [i_0] [i_0] [i_0 - 1])));
                    arr_52 [i_0] [i_1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32765)) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) 1085178940)) : (4844262547283410425LL))) : (((/* implicit */long long int) 59748526U))));
                    /* LoopSeq 2 */
                    for (int i_15 = 2; i_15 < 14; i_15 += 3) 
                    {
                        arr_55 [i_0] [i_1] [i_15] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) * (3495584651U)))));
                        var_36 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-16081)))))))), (((((/* implicit */unsigned long long int) -482624165)) % (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_14] [i_14] [i_15]))))))));
                        var_37 &= ((/* implicit */_Bool) ((5686319905078937462LL) + (((/* implicit */long long int) -1))));
                    }
                    for (unsigned long long int i_16 = 4; i_16 < 13; i_16 += 3) 
                    {
                        arr_58 [i_0] [i_14] = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)41095)) % (((/* implicit */int) (signed char)-79)))) + (((/* implicit */int) (unsigned short)2694))));
                        var_38 += ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned char)244)))) & (((/* implicit */int) (short)-9425)))) & (((/* implicit */int) var_4))));
                    }
                }
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) (short)5561);
                    var_40 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)52)), ((unsigned char)244)));
                    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((8274111488441955613ULL) << (((arr_0 [i_17]) - (2814659626025457904ULL)))))) ? (((((/* implicit */_Bool) (short)-13140)) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (3695153394135023837LL))))));
                }
            }
        } 
    } 
}
