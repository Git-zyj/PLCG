/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61354
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
    var_10 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 10913627959651155101ULL)) ? (1254923379U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))) * (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            var_11 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_4))))) ? (max((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))) < (((((var_6) << (((((/* implicit */int) var_4)) - (57))))) >> (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_1)))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) max((((unsigned short) var_7)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2496716941542920953LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))))));
                        var_13 ^= (-(((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_8)))) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_1 + 1] [i_3])) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */short) var_4)), (arr_11 [i_4 + 1] [5U] [i_2] [i_2] [i_0 + 1] [i_0])))), (max((var_3), (((/* implicit */int) arr_11 [i_4 - 1] [i_0 + 2] [i_2] [i_2] [i_0 + 2] [i_0]))))));
                            arr_17 [3LL] [2] [i_2] [i_2 - 1] [i_2] [i_2 + 2] = ((/* implicit */int) var_7);
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_2))));
                            arr_21 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                            arr_22 [i_0] [i_5] [i_0 - 1] [i_0] [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)18739)) / (((/* implicit */int) (unsigned short)8609))))) ? (((((/* implicit */_Bool) (unsigned short)8774)) ? (((/* implicit */unsigned long long int) 1373880243U)) : (5628621419844084178ULL))) : (((/* implicit */unsigned long long int) var_5))))));
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_2))))))) : (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 4034348428U)))))))))))));
                            arr_23 [(_Bool)1] [i_5] [(_Bool)1] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23659)))))))) ? (((((/* implicit */_Bool) 17139893627164595132ULL)) ? (-2496716941542920953LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) var_8);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [6LL] [i_2 + 2] [i_2 - 3] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((signed char) arr_14 [i_0 + 1] [i_0] [(unsigned short)10])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 4) 
                        {
                            var_19 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_7)))) <= (((((/* implicit */_Bool) 1134203710)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))));
                            arr_31 [i_0 - 1] [i_2] [i_2] [(signed char)3] [i_3] [i_7] = ((/* implicit */short) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_3] [i_7])))) + (392))) - (16)))));
                            arr_32 [i_0] [i_1 - 3] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))));
                            arr_33 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) var_7));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
        {
            arr_37 [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_7))))) + (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_0 [i_8] [i_8 + 2]))))));
            arr_38 [i_0 - 2] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) 0)) ? (349324652) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28722))) < (4294967281U))))))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
        {
            arr_41 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_9] [(signed char)1])) : (14LL)))) ? (min((((/* implicit */long long int) (unsigned char)156)), (-7687138767807462596LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116)))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_34 [i_0] [i_9 + 1]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_4)) - (96)))))))))));
            arr_42 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) < (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? ((((_Bool)1) ? (-1134203710) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) var_4))))))));
            arr_43 [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned int) var_4)), (((var_5) << (((((/* implicit */int) var_9)) - (151))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) & (((/* implicit */int) var_4)))))));
            arr_44 [i_0] [8] [i_0] = ((/* implicit */unsigned int) ((int) ((short) (signed char)115)));
        }
        arr_45 [i_0 - 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_29 [0ULL] [i_0] [(short)10] [i_0] [0ULL]))))), (((/* implicit */unsigned long long int) var_9))));
        arr_46 [2LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-108))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (signed char)108))))) : ((-(var_6)))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49676)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-120))))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_50 [i_10] [i_10] = ((/* implicit */unsigned int) (!((((_Bool)1) && (((/* implicit */_Bool) -349324653))))));
        arr_51 [i_10] = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_3)), (var_5))) >> (((max((((/* implicit */unsigned long long int) ((4U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_10])))))), (min((((/* implicit */unsigned long long int) var_2)), (var_6))))) - (18300234613682466642ULL)))));
    }
    for (unsigned int i_11 = 2; i_11 < 21; i_11 += 3) /* same iter space */
    {
        var_21 |= ((/* implicit */int) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_11] [i_11]))) : (var_6))) * (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) arr_53 [i_11])))))))));
        arr_56 [(signed char)8] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_54 [i_11 - 2] [i_11 - 1])) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) max((((/* implicit */short) var_0)), (var_2)))) : (((((/* implicit */int) var_9)) & (-2))))) : (((/* implicit */int) ((_Bool) var_7)))));
    }
    for (unsigned int i_12 = 2; i_12 < 21; i_12 += 3) /* same iter space */
    {
        arr_59 [i_12] = ((/* implicit */unsigned long long int) var_8);
        arr_60 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_12 + 1] [i_12 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_54 [i_12 - 1] [i_12 - 2])))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
        var_22 ^= ((/* implicit */unsigned char) var_4);
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            var_23 = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_4))))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) var_9)) : (max((var_3), (((/* implicit */int) var_2))))))) : ((((!(((/* implicit */_Bool) var_5)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        }
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            var_25 ^= ((/* implicit */unsigned int) var_2);
            arr_65 [i_12] [i_14] [i_12] = ((/* implicit */unsigned short) var_1);
            var_26 = ((/* implicit */unsigned int) min(((-(arr_54 [i_12 - 2] [i_12 + 2]))), ((~(arr_54 [i_12 + 2] [i_12 + 1])))));
            arr_66 [i_12] [i_14] = ((/* implicit */int) min(((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))), (((/* implicit */unsigned long long int) arr_55 [i_12 + 1] [i_12]))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
    {
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            {
                arr_71 [i_15] |= ((/* implicit */unsigned int) (unsigned char)79);
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_67 [(_Bool)0])), ((unsigned short)32442)))) ? (arr_52 [i_16]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) var_1)))))))))));
            }
        } 
    } 
}
