/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57237
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
    var_17 = ((/* implicit */signed char) -2147483640);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44475)) + (((((/* implicit */_Bool) (+(72057594037403648ULL)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_10)) << (((var_0) - (1184051462U)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) min((min((min((((/* implicit */int) (signed char)63)), (536870911))), (((/* implicit */int) (signed char)-74)))), (((/* implicit */int) (_Bool)1))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (signed char)112);
                        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) ? (((((/* implicit */_Bool) (signed char)-116)) ? (var_2) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (arr_6 [i_0] [i_1] [i_2] [i_3])))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24808)) ? (((((/* implicit */_Bool) (short)3111)) ? (((/* implicit */int) (unsigned short)65529)) : (-1390978323))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (_Bool)0)))))))));
                    }
                } 
            } 
            arr_11 [i_0] [(short)1] [i_1] = ((/* implicit */signed char) (+(arr_2 [(_Bool)1] [i_1] [i_0])));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((var_16), (((/* implicit */long long int) (~(var_8)))))))));
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) >= (((((/* implicit */_Bool) ((var_14) | (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */int) (signed char)83))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_4])) : (2603478894816372263LL)))))));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                arr_18 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_12)))), ((!(((/* implicit */_Bool) max((var_11), (var_8))))))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max(((-(((/* implicit */int) var_6)))), (((int) (short)2356)))))));
            }
            for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                var_24 *= (((-(((int) 4294967295LL)))) & ((~(1025946373))));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)99)), (arr_15 [i_7] [i_7] [i_6])));
                    /* LoopSeq 3 */
                    for (int i_8 = 3; i_8 < 14; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) ((signed char) var_6))) : (-1390978340))), ((~(((/* implicit */int) var_10))))));
                        var_27 = ((/* implicit */int) var_9);
                    }
                    for (short i_9 = 4; i_9 < 14; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_13))))))) < (13U))))));
                        var_29 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -536870911)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-21))))));
                        arr_29 [i_0] [i_4] [i_4] [i_6] [i_7] [i_7] = ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)112))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_32 [i_6] [10] [i_6] [i_7] [i_10] &= arr_3 [1ULL] [i_4];
                        var_30 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (signed char)(-127 - 1)))))) ? ((+(var_0))) : (max((arr_2 [i_0] [5] [i_6]), (((/* implicit */unsigned int) var_13)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) max(((signed char)-99), (var_10)))))))));
                        arr_33 [i_0] [i_0] [i_6] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 939587503)) ? (min((((/* implicit */long long int) var_11)), (max((arr_19 [i_0] [i_0] [14ULL]), (((/* implicit */long long int) -1261083261)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_0] [i_7])) << (((((/* implicit */int) arr_27 [i_0] [i_4])) - (64))))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) <= (16U)));
                        var_32 = ((/* implicit */int) ((unsigned short) ((signed char) arr_1 [i_0])));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)99))));
                    arr_36 [1ULL] [i_4] [i_6] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) max((((/* implicit */int) (signed char)103)), (1432653348))))) ? ((+(((long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))));
                    arr_37 [i_11] [i_11] [11LL] [i_11] [i_0] = ((/* implicit */unsigned char) ((13478191815066968009ULL) / (((/* implicit */unsigned long long int) -1))));
                }
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                for (unsigned char i_13 = 3; i_13 < 12; i_13 += 4) 
                {
                    {
                        var_35 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(2027379472))))))), (1099511365632ULL)));
                        arr_42 [i_4] [i_4] [i_12] [(unsigned short)9] |= ((/* implicit */_Bool) -1272306602877955016LL);
                    }
                } 
            } 
            var_36 = ((/* implicit */_Bool) 7841753255264446993LL);
            var_37 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        }
        var_38 ^= ((/* implicit */unsigned long long int) arr_12 [2ULL] [i_0]);
        /* LoopSeq 4 */
        for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            arr_46 [i_14] [i_0] = (-(2027379472));
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (!((_Bool)0))))));
        }
        for (unsigned int i_15 = 3; i_15 < 14; i_15 += 3) 
        {
            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_15] [i_0] [i_15] [i_15] [3] [i_15 + 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(4294967276U))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-103))))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (((~(((/* implicit */int) (short)13754)))) == (((((/* implicit */_Bool) 4294967295LL)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_47 [i_15] [11LL])))))))));
                arr_54 [i_15] [i_15] [i_16] = ((/* implicit */signed char) ((arr_25 [10ULL] [i_15] [i_16] [i_15] [i_16]) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (short)-32760)))))) : ((+(((/* implicit */int) arr_16 [i_15 + 1] [i_15 - 3]))))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        {
                            var_42 -= ((/* implicit */short) (~(min((((/* implicit */long long int) var_10)), (170577280417233706LL)))));
                            var_43 = ((/* implicit */long long int) arr_39 [11] [i_16]);
                        }
                    } 
                } 
                var_44 -= min((max((8709108167053138109LL), (((/* implicit */long long int) arr_58 [i_15 + 1] [i_15] [i_15] [i_15] [i_16])))), (((/* implicit */long long int) ((_Bool) ((long long int) (unsigned char)255)))));
            }
        }
        for (int i_19 = 1; i_19 < 11; i_19 += 1) 
        {
            var_45 = ((/* implicit */long long int) ((signed char) (~((+(((/* implicit */int) (unsigned char)219)))))));
            /* LoopNest 2 */
            for (long long int i_20 = 0; i_20 < 15; i_20 += 2) 
            {
                for (short i_21 = 0; i_21 < 15; i_21 += 4) 
                {
                    {
                        var_46 = ((/* implicit */unsigned int) (signed char)-62);
                        arr_69 [i_19] [i_21] = ((/* implicit */unsigned short) var_13);
                    }
                } 
            } 
            var_47 &= ((/* implicit */int) var_10);
            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) 4294967295LL))));
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_49 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) (unsigned short)17669)) ? (-402150978996242501LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [9ULL] [(short)5] [2LL] [i_22] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) > (4294967295LL))))))));
            arr_72 [i_22] = ((/* implicit */int) ((signed char) (short)854));
        }
    }
    var_50 = ((/* implicit */int) ((signed char) ((unsigned long long int) ((int) -324430330))));
    /* LoopSeq 1 */
    for (int i_23 = 0; i_23 < 23; i_23 += 1) 
    {
        var_51 = ((/* implicit */long long int) 20U);
        var_52 = (short)(-32767 - 1);
    }
}
