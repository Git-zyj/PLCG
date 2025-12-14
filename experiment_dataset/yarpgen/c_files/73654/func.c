/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73654
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
    var_20 &= ((/* implicit */unsigned short) var_16);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [(unsigned char)5])) ? (((/* implicit */unsigned int) var_2)) : (1632030268U))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) <= (((((/* implicit */_Bool) (unsigned char)26)) ? (778433173U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145)))))));
                    var_23 = ((((/* implicit */_Bool) -6147447725234657859LL)) ? (((/* implicit */int) (unsigned short)914)) : (((/* implicit */int) (unsigned char)91)));
                    arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [20U])) ? (var_18) : (((/* implicit */unsigned int) arr_0 [i_0 - 1]))));
                    var_24 = ((/* implicit */unsigned char) ((var_17) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64650)))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned short)36212)) ? (((/* implicit */int) arr_4 [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_2] [i_0 - 1] [i_4])))) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3]))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)218)) & (((/* implicit */int) arr_10 [i_2] [i_0 - 1] [5U] [5U]))));
                            var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)240))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (short)-11067);
                            var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)164))));
                            arr_18 [i_0] = ((/* implicit */long long int) ((267583334263820175LL) > (((/* implicit */long long int) 729354467U))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_3] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-49))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_2] [i_2]))) != (var_18)))) : ((+(((/* implicit */int) var_4))))));
                        }
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0 - 2] [i_1] [(unsigned char)16])) : (arr_0 [i_0 - 1]))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_14 [i_0 - 1] [(unsigned char)9]))) != (arr_15 [(unsigned char)16] [i_1] [i_1] [i_2] [i_3])));
                        var_32 = arr_5 [i_0] [i_0];
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            arr_21 [i_0] [(_Bool)0] [i_2] [(unsigned char)3] [i_6] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218))) : (arr_16 [i_1] [i_1] [i_1] [i_6])));
                            arr_22 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_13);
                            var_33 = ((/* implicit */int) arr_16 [(short)22] [i_2] [(unsigned short)15] [(short)22]);
                            arr_23 [i_0 - 2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_2 [i_1]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            arr_28 [i_7] [i_7] [i_1] [(unsigned short)10] [i_2] [i_1] [13LL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [5U])) <= (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2]))));
                            arr_29 [i_0 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_0 - 2]))));
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        arr_33 [i_0 + 1] [4LL] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)251)) > (((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_0 [i_2]) : (((/* implicit */int) var_1))))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 729354467U)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (signed char)-118))))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)82)))))));
                        var_35 = ((/* implicit */_Bool) max((var_35), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0))))));
                    }
                }
            } 
        } 
        arr_34 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])));
    }
    /* vectorizable */
    for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            for (unsigned int i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    {
                        arr_48 [i_11] [i_11] = ((/* implicit */signed char) arr_0 [i_12]);
                        var_36 = ((/* implicit */unsigned char) (signed char)-18);
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) arr_5 [17] [i_9 - 1]))));
        /* LoopSeq 2 */
        for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            var_38 -= ((/* implicit */signed char) arr_19 [i_9 - 1] [i_13] [i_9] [i_9]);
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    {
                        arr_57 [i_9] [i_9] [i_9] [9LL] [i_9] = ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) : (4317210595395750673LL))));
                        var_39 ^= ((/* implicit */unsigned short) arr_13 [i_9 + 1] [i_9 + 1] [(unsigned short)19] [(unsigned short)20] [i_9]);
                    }
                } 
            } 
            var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_40 [i_9 + 1] [i_13] [i_9 + 1] [i_13])) : (((/* implicit */int) arr_40 [i_9 - 1] [i_13] [i_9] [i_9]))));
            var_41 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) > (arr_44 [i_9 - 1] [i_9 + 1])));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_60 [(_Bool)1] [i_16] [7] = ((/* implicit */unsigned char) ((1559224500U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_9] [i_16] [i_9] [i_9 + 1])))));
            var_42 ^= ((/* implicit */int) 3888235455U);
        }
        var_43 -= ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_55 [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_9] [5])));
    }
    for (unsigned short i_17 = 2; i_17 < 12; i_17 += 2) 
    {
        var_44 = ((/* implicit */unsigned int) ((arr_14 [i_17] [i_17]) <= (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        var_45 = (+(((/* implicit */int) (unsigned char)108)));
    }
    for (int i_18 = 0; i_18 < 11; i_18 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            var_46 = ((/* implicit */short) ((arr_39 [i_18] [i_18] [i_19]) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            arr_67 [(_Bool)0] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_58 [i_18] [(unsigned short)4])) != (((/* implicit */int) arr_40 [i_18] [i_18] [i_18] [i_19]))))) != ((~(((/* implicit */int) arr_40 [i_18] [i_19] [i_19] [i_19]))))));
            var_47 *= ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3565612845U))))), (var_5)));
            var_48 = ((/* implicit */int) var_1);
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                for (unsigned char i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    for (unsigned char i_22 = 2; i_22 < 9; i_22 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */int) var_11);
                            var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-127)), (-932680435732855966LL)))) ? ((~(((/* implicit */int) (unsigned short)18097)))) : ((+(arr_0 [3U]))))) : (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_18] [(unsigned short)20])))), (((/* implicit */int) ((unsigned char) var_4)))))));
                            arr_75 [i_18] [i_21] [(unsigned char)9] [i_18] [(unsigned char)9] [i_19] = ((/* implicit */unsigned short) max((min((-416605322241089302LL), (((/* implicit */long long int) (signed char)-64)))), (((/* implicit */long long int) min(((unsigned short)51912), (((/* implicit */unsigned short) (signed char)84)))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_51 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_18] [i_18] [i_18] [i_18] [i_18] [i_23] [i_23])) ? (((((/* implicit */_Bool) (unsigned char)106)) ? (arr_20 [i_18] [5LL] [i_23] [13U] [(signed char)8] [i_18] [i_23]) : (arr_20 [i_23] [i_23] [(unsigned short)8] [i_23] [i_18] [i_18] [i_18]))) : (arr_20 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])));
            var_52 |= ((/* implicit */unsigned short) var_6);
            arr_79 [i_18] [i_23] [i_23] = ((/* implicit */signed char) (~(((/* implicit */int) arr_40 [i_23] [i_18] [i_18] [i_18]))));
        }
        arr_80 [i_18] = ((/* implicit */unsigned int) (unsigned char)157);
        arr_81 [i_18] = ((/* implicit */int) min((2190649015U), (3492345267U)));
    }
}
