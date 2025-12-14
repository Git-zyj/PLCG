/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94847
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
    var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_2)) * (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_9)))))))));
    var_13 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4788933611433166022LL)))), (arr_0 [i_0])));
        var_16 = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_11))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (short)23792))) % (var_5))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_0))), (((/* implicit */unsigned int) ((signed char) arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6411))) >= (var_10))) ? (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) : (((/* implicit */int) var_8)))))));
        arr_6 [i_1] [11] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((arr_0 [i_1]) & (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) min((((long long int) var_8)), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))))));
        var_18 |= ((/* implicit */int) (+(min((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_0) : (var_0))), (((((/* implicit */_Bool) (signed char)59)) ? (2832789491U) : (1462177804U)))))));
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((long long int) arr_8 [(signed char)5] [4U]));
        var_20 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_1 [i_2]))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_9 [i_3] [(signed char)12])) ? (((/* implicit */int) arr_10 [(unsigned char)24])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned short)59101)))))));
        arr_11 [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) : (((((/* implicit */_Bool) 1462177805U)) ? (2832789488U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23797)))))));
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 16; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        arr_25 [16ULL] [i_4] [i_6] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1462177805U)) ? (6172528081363106577LL) : (((/* implicit */long long int) 1462177805U))))) && (((/* implicit */_Bool) min((arr_24 [i_4] [13LL] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) var_2))))))))));
                        var_22 += ((/* implicit */unsigned int) min((-760220443), (((/* implicit */int) ((short) arr_9 [i_5 - 1] [i_5 - 1])))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) (short)6010);
                            var_24 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (arr_24 [8] [8ULL] [i_6 - 1] [i_4] [i_6] [i_6]) : (arr_24 [16ULL] [i_5] [i_5] [i_4] [i_5 + 2] [12ULL])))) || (var_11))));
                        }
                    }
                } 
            } 
        } 
        arr_28 [i_4] = var_1;
        /* LoopSeq 1 */
        for (unsigned char i_9 = 4; i_9 < 15; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    {
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_23 [i_9] [i_9 - 2] [i_9] [(unsigned short)13] [i_9 + 2])))) - (var_7)));
                        arr_38 [(short)9] [(short)9] [(short)9] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (arr_23 [(short)13] [i_9 + 3] [i_9 + 1] [i_9 - 4] [i_9 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_4] [i_9 + 1] [i_9 + 1]))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? ((-(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_9 + 3] [i_10])) ? (arr_12 [i_9 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((arr_12 [i_9 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_10)) ? (1831620943U) : (arr_13 [i_9 + 3] [i_10])))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5990)) ? (2832789484U) : (1462177802U)));
                        arr_39 [i_4] [i_4] [5U] [i_11] = ((/* implicit */unsigned int) arr_30 [i_4]);
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) ((var_4) ? (((/* implicit */int) ((arr_15 [i_4] [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))))) : (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_29 [(signed char)12] [i_9] [i_4])))), (((/* implicit */int) var_11))))));
            arr_40 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_4])) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9 - 4])) ? (((/* implicit */int) arr_22 [i_4] [i_9 + 2] [i_9 - 1] [i_9 - 3])) : (((/* implicit */int) arr_22 [i_9] [(signed char)17] [7ULL] [i_4])))))));
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) arr_32 [i_4] [i_9 + 1] [i_9])), (((((/* implicit */_Bool) -6571204777486182691LL)) ? (1462177811U) : (1462177811U))))))))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1462177805U)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (short)23792)))))) ? (((((/* implicit */long long int) arr_24 [i_9 + 3] [i_9 + 2] [i_9 - 3] [i_4] [i_9 - 4] [i_9 + 3])) / (((((/* implicit */_Bool) (unsigned short)59124)) ? (2251799813685247LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59131))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)21984)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1462177805U))) ^ (arr_13 [i_4] [i_4]))))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        arr_45 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_12] [6U])) / (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_10 [i_12])))))) : (max((((/* implicit */long long int) arr_41 [i_12])), (-1650588939596761527LL)))))) ? (((var_11) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12]))) / (6571204777486182691LL))) : (((/* implicit */long long int) min((1282702449U), (3012264847U)))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_12]))))), (((((/* implicit */_Bool) arr_9 [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))))))));
        arr_46 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */int) arr_42 [i_12])) : (((/* implicit */int) arr_42 [i_12])))) & (((/* implicit */int) max((arr_42 [i_12]), (arr_42 [i_12]))))));
        var_31 = ((/* implicit */long long int) var_6);
        var_32 = arr_44 [i_12] [i_12];
    }
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [14] [i_13]))) / (arr_12 [(signed char)2])))) ? ((+(((((/* implicit */_Bool) 223150753U)) ? (-6571204777486182691LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21897))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_13] [(signed char)4] [i_13])))));
        var_34 = ((unsigned short) (-(arr_16 [i_13] [i_13])));
        arr_49 [(unsigned short)4] |= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)12)) ? (-6571204777486182691LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) (short)21896)) - (21896)))))) ? (arr_18 [10U] [i_13] [10U]) : (((/* implicit */int) var_2)))))));
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((long long int) arr_13 [i_13] [(signed char)12])))));
    }
}
