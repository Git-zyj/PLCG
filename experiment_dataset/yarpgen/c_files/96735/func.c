/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96735
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
    var_13 = 0U;
    var_14 -= ((/* implicit */short) var_5);
    var_15 = ((/* implicit */int) var_2);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) max(((unsigned char)148), ((unsigned char)241))))) | (((/* implicit */int) (short)-32764))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_17 += ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)8] [(unsigned char)8]))) : (9U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_4)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_18 *= ((/* implicit */signed char) 6U);
                            var_19 |= ((/* implicit */unsigned short) (+(((/* implicit */int) max((((short) var_8)), (((/* implicit */short) arr_11 [i_0] [0U] [i_1] [i_0] [i_4 - 1])))))));
                            var_20 = ((/* implicit */unsigned long long int) ((long long int) max((1671343612771432677ULL), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_10)), (arr_14 [i_4] [i_3] [i_0] [i_0] [i_1 + 1] [i_0])))))));
                        }
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_3] = arr_8 [i_1 - 2] [i_2] [i_0] [i_3];
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_1 - 1] [i_1] [i_1] [i_0] [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [(short)3] [i_0] [i_0] [i_0] [(short)3] [(short)3])), (var_11)))) : (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_10))))));
                            arr_19 [i_0] [i_1] [i_0] [i_2] [i_0] [i_0] = (-(((/* implicit */int) ((signed char) max(((short)7556), (((/* implicit */short) var_10)))))));
                            var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (short)24395))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        arr_28 [i_0] = ((((((/* implicit */_Bool) ((short) arr_25 [i_0] [i_0] [i_8] [i_8] [i_0]))) && (((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)254)) > (((/* implicit */int) arr_2 [i_0] [i_7 + 1]))))) : (((/* implicit */int) (unsigned char)163)));
                        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_6] [i_0] [i_0])) < (var_6))))) : (max((arr_9 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)43016)))))), (var_0)));
                        arr_29 [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_25 [i_6] [i_0] [i_7 + 1] [i_7] [i_7 + 2]) : (arr_25 [i_0] [i_0] [i_7 + 2] [i_7 - 1] [i_7 + 1]))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) var_9)) : (((((((/* implicit */_Bool) var_8)) ? (arr_26 [i_0] [i_0]) : (((/* implicit */int) var_7)))) & (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (var_0))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned char) ((short) ((short) 65535ULL)));
        var_26 = ((/* implicit */int) (-(arr_32 [i_9] [i_9])));
        var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_30 [(unsigned short)9])) ? (((/* implicit */long long int) var_6)) : (arr_31 [i_9] [i_9]))));
    }
    for (short i_10 = 2; i_10 < 17; i_10 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (var_5)))) ? (min((-2147483639), (((/* implicit */int) var_5)))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */int) max((((/* implicit */short) arr_35 [(unsigned short)15])), (max((var_7), (((/* implicit */short) var_2)))))))));
        /* LoopSeq 2 */
        for (int i_11 = 4; i_11 < 19; i_11 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_10]))) ? (((((/* implicit */unsigned long long int) (+(-2147483647)))) / (min((3933703514301874144ULL), (((/* implicit */unsigned long long int) (short)-1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) (short)32762)), (arr_31 [i_11] [i_10]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12725)) * (((/* implicit */int) (short)-30))))))))));
            var_30 = ((/* implicit */unsigned int) 14513040559407677471ULL);
        }
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            arr_43 [i_12] [i_12] [i_12] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((7979942585339479460ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (max((3387008760410537746ULL), (18446744073709551589ULL))))), (((/* implicit */unsigned long long int) (-(2147483641))))));
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_14 = 4; i_14 < 17; i_14 += 2) 
                {
                    var_31 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)148)), ((+(((((/* implicit */_Bool) 65528ULL)) ? (arr_46 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_14] [i_14] [i_13] [16LL])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        arr_51 [i_10] [i_10] [i_10] [5ULL] [i_12] [i_15] = ((/* implicit */unsigned char) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_35 [i_10 + 2])) : (((/* implicit */int) arr_35 [i_10 + 1])))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) 88721081)) : (15785649148931497348ULL)));
                    }
                }
                arr_52 [i_10] [i_12] = ((/* implicit */long long int) var_12);
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 3; i_16 < 19; i_16 += 2) 
                {
                    var_33 ^= ((/* implicit */int) ((unsigned short) max((arr_55 [i_10 - 2] [i_12] [i_13] [i_16]), (arr_55 [i_16] [i_13] [i_10 - 2] [i_10 - 2]))));
                    var_34 += ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_35 [i_10])), (max((((/* implicit */unsigned short) ((short) (short)4104))), (min((((/* implicit */unsigned short) arr_35 [i_12])), ((unsigned short)44194)))))));
                    arr_56 [15] [i_12] [i_16] = ((/* implicit */long long int) arr_32 [i_10] [i_10]);
                }
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    var_35 = ((/* implicit */unsigned short) 1464484380);
                    arr_59 [i_12] [i_12] [i_13] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_10] [i_10])) ? (((/* implicit */int) max((arr_38 [i_10 + 1] [i_10 + 1]), (arr_38 [i_10 - 1] [i_10 + 2])))) : (((/* implicit */int) (unsigned char)32))));
                    var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_48 [i_10] [i_12] [i_10] [i_17] [i_10] [i_10 + 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_40 [i_10 + 2] [i_10 + 2]) >= (((/* implicit */int) arr_50 [i_13] [i_13] [i_10 + 3] [i_13] [i_10 + 2])))))) : (((unsigned long long int) arr_40 [i_10 - 1] [i_10 - 1]))));
                }
                arr_60 [i_10 - 1] [i_10] [i_13] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_55 [i_10 + 3] [i_10 - 2] [i_10 + 3] [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_10 + 3] [i_10])))))) ? (((((/* implicit */_Bool) arr_42 [i_10 + 2] [i_13])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_42 [i_10 - 2] [i_13])))) : (((/* implicit */int) ((_Bool) arr_32 [i_10 + 3] [i_10 + 1])))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) (-(max((arr_64 [i_10 + 3] [i_12] [i_10 + 1] [i_10 + 1]), (arr_64 [i_10 + 1] [i_12] [i_10 - 2] [i_10 + 1])))));
                            arr_68 [i_10] [i_10] [i_13] [i_12] [i_12] = ((/* implicit */int) var_9);
                            var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                            arr_69 [i_10] [i_10] [i_10] [i_10 - 2] [i_12] [(unsigned short)8] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_10] [i_12] [i_10] [i_18] [i_10]))))))))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (int i_20 = 0; i_20 < 20; i_20 += 2) 
        {
            var_39 = ((/* implicit */unsigned short) (((+(min((((/* implicit */unsigned long long int) arr_67 [i_20] [i_10] [i_10] [i_10 + 2] [i_10])), (var_8))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4105))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_7)), (var_6)))) : ((+(3157249239470938849LL))))))));
            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) 18446744073709551593ULL))));
        }
    }
}
