/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92953
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [4U] [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (unsigned short)39561)), (0ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (short)-11830)) + (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_8))))))));
        var_12 = ((/* implicit */short) 1413937843717971215LL);
        var_13 = ((/* implicit */unsigned int) var_3);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (!(((/* implicit */_Bool) arr_1 [i_1] [i_1])));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5916)) ? (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (2725107404U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))));
        var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 8257399472634582013ULL)) ? (((/* implicit */int) (unsigned short)63396)) : (((/* implicit */int) var_6))))));
        var_16 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) -899054763)) && (((/* implicit */_Bool) 966687278U)))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) 0ULL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_3] [10U] [i_3])) ? (arr_1 [(_Bool)1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            var_19 = ((/* implicit */unsigned char) var_5);
        }
        for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            var_20 = arr_11 [i_2] [i_4];
            arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [12U] [12U])) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_4 [i_4] [i_4 + 1])) ? (((/* implicit */int) max((var_0), (var_0)))) : (((/* implicit */int) arr_4 [i_4 - 1] [10ULL]))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) arr_7 [i_6 + 2])), (((((/* implicit */_Bool) arr_14 [i_6 + 2] [i_4 - 1] [8U])) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_6 [i_2]))) : (((/* implicit */unsigned long long int) ((int) 8257399472634582013ULL))))))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)68)))))))) ? (((((/* implicit */_Bool) arr_14 [3LL] [i_4] [i_6 - 1])) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_2] [i_6 - 1])), (var_6)))))) : (min((max((arr_13 [i_2] [0LL] [3]), (((/* implicit */int) arr_15 [i_2] [(short)3])))), (((/* implicit */int) (signed char)-126))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_22 [i_2] [(_Bool)1] [i_5] [i_6]), (((/* implicit */unsigned int) (short)32760))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967285U)))))) : (max((var_2), (var_8)))))) * ((-(min((arr_14 [i_6] [i_5] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)47969))))))));
                        var_24 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) ((short) var_4))), (18446744073709551613ULL)))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 4; i_7 < 14; i_7 += 4) 
        {
            arr_25 [i_2] [(unsigned char)8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((10792162946654292592ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)-30765)))) : (arr_13 [i_7] [i_7 + 3] [i_7])));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 15; i_9 += 1) 
                {
                    for (long long int i_10 = 3; i_10 < 16; i_10 += 2) 
                    {
                        {
                            arr_35 [i_2] [i_7] [i_8] [i_7] [(unsigned char)14] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_10 + 1] [5U])) + (arr_29 [i_7] [i_10 - 2] [i_8])));
                            arr_36 [i_9] = ((/* implicit */unsigned short) var_4);
                            var_25 = ((/* implicit */unsigned char) ((arr_20 [i_7 + 2] [i_7] [i_10 - 2]) | (arr_13 [i_7 + 1] [i_9 - 3] [i_10 + 1])));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned char) ((var_3) ? (12622809586202548641ULL) : (arr_6 [i_2])))))));
            }
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
            {
                arr_39 [i_7] = min((((86733050259556353ULL) * (((/* implicit */unsigned long long int) arr_23 [i_7 - 3] [i_7 + 1] [i_7 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (arr_23 [i_7 - 3] [i_7 - 3] [i_7 - 4])))));
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_12 = 4; i_12 < 15; i_12 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) 1774710344684818572ULL))));
                    arr_42 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_12 - 3] [i_7 - 4] [i_7 - 1] [(short)11])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) var_9))));
                }
                /* vectorizable */
                for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) arr_10 [(short)0] [(short)0])) >> (((((/* implicit */int) (unsigned short)37128)) - (37122))))))));
                    arr_45 [i_7 + 1] [13U] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)47969)) ? ((+(((/* implicit */int) arr_0 [i_13])))) : (((/* implicit */int) var_10))));
                    arr_46 [(short)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7 - 1] [i_7 + 1])) ? (((/* implicit */unsigned long long int) 3790237332U)) : (18446744073709551615ULL)));
                }
            }
            /* vectorizable */
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
            {
                arr_49 [i_2] [i_7] [i_2] = arr_16 [i_2] [14LL];
                arr_50 [(_Bool)1] [i_7 - 3] [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [(short)5] [(short)5] [(short)5])) || (((/* implicit */_Bool) var_11)))))));
            }
            arr_51 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_16 [i_2] [i_7])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)15])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26790))) : (var_8))))))));
        }
    }
    var_30 = ((/* implicit */short) var_4);
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((short) (short)-15968))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-17192))))) : (-4270349949114179246LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */short) (unsigned char)63))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32513))) != (274933591U)))))))));
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((7654581127055259011ULL), (((/* implicit */unsigned long long int) var_3))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (max((3828816931U), (((/* implicit */unsigned int) (short)-16273)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_33 = var_7;
}
