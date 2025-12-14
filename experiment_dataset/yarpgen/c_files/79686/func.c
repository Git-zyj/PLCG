/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79686
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((/* implicit */unsigned int) arr_0 [i_0])), (((unsigned int) min((((/* implicit */int) var_8)), (var_9)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            var_15 -= ((/* implicit */long long int) ((unsigned short) (unsigned char)255));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_16 = ((/* implicit */int) var_11);
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) var_8);
                    arr_8 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9590631582497637376ULL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (6387195902716154021ULL)));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) 2147483647)))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_3]))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))) || (((/* implicit */_Bool) var_8))));
                        arr_11 [i_0] [(_Bool)1] [i_2] [(short)6] [i_4] [i_4] = ((/* implicit */int) (+(arr_1 [i_1 + 3])));
                        arr_12 [i_2] [i_3] [(short)13] [i_1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                    }
                    for (int i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        arr_15 [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_5 + 2] [12LL])) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_5 + 2] [10LL])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_5 + 2] [i_5]))));
                        var_20 ^= ((long long int) var_13);
                        arr_16 [i_5 + 2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7003507080929288251LL)) ? (9846834249209310587ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9846834249209310587ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19762))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_2]);
                        arr_21 [i_6] [i_2] [i_2] [i_0] = ((/* implicit */long long int) var_12);
                        arr_22 [i_0] [i_0] [i_2] |= ((/* implicit */unsigned short) ((arr_17 [i_0] [i_1 + 4] [i_6] [i_6] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_0] [i_1 - 1] [i_0] [i_0] [i_0]))));
                        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7003507080929288251LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) : (9590631582497637376ULL)));
                    }
                    var_22 = ((/* implicit */signed char) (~(9590631582497637376ULL)));
                }
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) 9223372036854775807LL);
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) % (18446744073709551615ULL)))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
                    {
                        arr_30 [i_9] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                        arr_31 [(_Bool)1] [i_1 + 2] [i_2] [i_1] [i_2] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)6] [i_0] [i_0])) % (((/* implicit */int) arr_6 [i_1 - 1] [i_2] [14]))));
                        var_25 = ((/* implicit */signed char) arr_19 [i_0] [i_0] [i_0]);
                    }
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) 12081841563829127270ULL))));
                        arr_35 [i_10] [i_2] [(_Bool)1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_9);
                        arr_36 [i_0] [i_0] [i_1 + 3] [i_10] [i_0] [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [12ULL] [i_8] [i_0])) || (((arr_18 [i_0] [i_1] [i_2] [(unsigned short)12] [i_0] [8U]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        arr_37 [i_2] [i_1] [(unsigned char)16] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 + 3] [i_1] [i_1] [i_1] [i_1] [i_0])) ^ (((/* implicit */int) var_11))));
                        var_27 = ((unsigned int) arr_13 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) arr_38 [i_2]);
                        arr_40 [i_0] [i_1 + 3] [i_2] [i_2] [i_11] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (arr_24 [i_0] [i_0] [i_2] [i_1 + 2] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186)))));
                        var_29 = ((/* implicit */unsigned long long int) var_0);
                        arr_41 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_1])));
                    }
                    for (unsigned char i_12 = 1; i_12 < 16; i_12 += 3) 
                    {
                        arr_44 [i_1] [i_2] [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0]))) * (arr_23 [i_1] [i_1 + 1] [i_2] [i_12 - 1])));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_8] [i_2] [i_1 + 2] [i_2] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_10 [i_12] [i_12] [i_12] [i_8] [i_1 + 2] [i_0])) : (((/* implicit */int) arr_10 [i_12] [(unsigned char)11] [i_8] [i_8] [i_1 + 2] [(_Bool)1]))));
                    }
                    var_31 = ((/* implicit */short) ((var_1) & (((/* implicit */long long int) var_0))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        arr_48 [i_0] [i_1] [i_2] [i_8] [i_13] = ((/* implicit */short) arr_0 [i_2]);
                        arr_49 [i_2] [(unsigned short)10] [i_2] [i_8] [i_8] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_13] [i_8] [i_0])) != (((((/* implicit */_Bool) 3141536423232967368LL)) ? (((/* implicit */int) arr_5 [i_8] [i_2] [i_1 + 3])) : (1496956082)))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((arr_46 [i_0] [i_1 + 4] [i_0]) - (3850649968959797786LL))))))));
                        var_33 = ((/* implicit */signed char) (short)32767);
                        var_34 += ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1 - 1] [i_13] [i_8])) ? (((/* implicit */int) arr_38 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned short i_14 = 2; i_14 < 14; i_14 += 4) 
                    {
                        arr_54 [i_14] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_14] [i_2] [i_1 - 1]);
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_0] [i_8] [i_14]))));
                    }
                }
                arr_55 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_2])) ? (((((/* implicit */unsigned long long int) var_10)) / (12081841563829127270ULL))) : (9590631582497637376ULL)));
            }
        }
        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 4) 
        {
            arr_58 [i_0] [i_0] = ((/* implicit */_Bool) (+(-1891924084)));
            arr_59 [i_15] [i_0] = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            var_36 |= arr_24 [1U] [i_16] [i_0] [i_0] [i_0];
            arr_62 [(_Bool)1] [i_0] [i_16] = ((/* implicit */unsigned char) arr_51 [i_0]);
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 2; i_17 < 14; i_17 += 2) 
            {
                var_37 &= ((/* implicit */long long int) ((((min((var_5), (((/* implicit */unsigned long long int) var_11)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_38 [i_17])) != (((/* implicit */int) arr_25 [i_17] [i_0] [i_16] [i_16] [i_0] [i_0])))))))));
                arr_67 [i_0] [i_16] |= ((/* implicit */unsigned short) -1891924084);
            }
            arr_68 [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -5637440455025369657LL)) ? (1877095496891502466LL) : (2496105597860756695LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
            arr_69 [i_0] [i_0] = ((/* implicit */long long int) max((1891924083), (((/* implicit */int) (short)7168))));
        }
        for (unsigned short i_18 = 3; i_18 < 16; i_18 += 2) 
        {
            var_38 -= ((var_5) | (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned char)69))))))));
            var_39 -= ((/* implicit */unsigned char) var_8);
            arr_72 [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 12081841563829127270ULL)))) : (arr_14 [i_18] [i_18] [i_18 + 1] [i_18 + 1]))))));
            /* LoopNest 3 */
            for (unsigned int i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 2) 
                {
                    for (int i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        {
                            arr_82 [i_0] [i_18] [i_18] [i_18] [i_0] [i_21] = ((/* implicit */unsigned short) arr_45 [i_0] [i_0] [i_0] [i_0]);
                            var_40 += ((/* implicit */long long int) (short)32767);
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_18 - 1] [i_19] [i_20] [i_21])) != (((/* implicit */int) var_11)))))))) ? (var_9) : (((((/* implicit */_Bool) arr_81 [i_0] [i_18 - 3] [i_18 - 3] [i_18 - 3] [i_21] [i_0])) ? (var_2) : (((/* implicit */int) arr_39 [i_20] [i_20] [i_18] [i_18 - 3] [i_18] [i_20] [i_18 - 3]))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_42 = ((/* implicit */int) var_12);
    var_43 -= ((/* implicit */long long int) min((max((14138343750369966869ULL), (var_5))), (35184372088831ULL)));
    var_44 = ((/* implicit */signed char) (unsigned short)24925);
    var_45 |= ((/* implicit */unsigned char) (unsigned short)21078);
}
