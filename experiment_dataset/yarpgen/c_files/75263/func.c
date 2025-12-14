/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75263
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_2 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */short) var_13))))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (max((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)50))))))) : (((int) arr_0 [i_0]))));
        var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] [i_2] [i_2 - 1] = (~(arr_4 [i_1]));
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)222);
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1]))));
            var_17 ^= ((/* implicit */short) ((arr_4 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1])) || (((/* implicit */_Bool) arr_4 [i_1]))))))));
        }
        for (signed char i_3 = 1; i_3 < 12; i_3 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)213))) ? (((/* implicit */int) ((signed char) (unsigned char)222))) : (((/* implicit */int) ((signed char) 17082223750042638011ULL)))));
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((min((((/* implicit */unsigned long long int) arr_1 [(short)1])), (arr_3 [i_1]))) << (((((((/* implicit */_Bool) (unsigned char)226)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (3369732807173752190ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */short) var_1))))))))));
            arr_14 [i_1] = ((/* implicit */long long int) var_1);
            arr_15 [i_1] = ((/* implicit */unsigned short) (-(((int) arr_7 [i_3 + 2] [i_3 - 1]))));
        }
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) (-(-746921186)))))));
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_4 + 2] [i_4 + 1])), (((((/* implicit */_Bool) (unsigned short)5820)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-472))) : (var_9)))))) ? (((((/* implicit */_Bool) (unsigned short)59715)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))))) : (((/* implicit */int) (short)-5670)))) : (((((/* implicit */_Bool) arr_12 [(unsigned short)12] [(unsigned short)12] [i_4 + 2])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (arr_12 [i_1] [i_4] [i_4 + 2])))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) max((((unsigned int) arr_23 [i_4] [i_4 + 3] [i_4])), (((/* implicit */unsigned int) min((max((((/* implicit */int) var_2)), (arr_12 [i_1] [i_4] [5]))), (((/* implicit */int) var_2)))))));
                        arr_24 [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */short) min((max((min((arr_19 [i_4] [i_4] [i_4]), (((/* implicit */int) arr_6 [(signed char)13] [i_5])))), (((/* implicit */int) ((arr_10 [i_1]) <= (((/* implicit */int) (short)(-32767 - 1)))))))), ((+(((/* implicit */int) arr_18 [i_4 + 3] [i_4] [i_4 + 1] [i_4 + 1]))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((arr_12 [(short)10] [(short)10] [11ULL]) * (((/* implicit */int) arr_18 [i_1] [i_4] [i_5] [i_6]))))))) ? (((/* implicit */int) (unsigned short)2600)) : (((arr_19 [i_4] [i_4 + 2] [i_4]) / (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)16))))))));
                        arr_25 [i_4] [i_4] [i_5 + 1] [i_6] = min((((((/* implicit */_Bool) (unsigned char)16)) ? (746921181) : (1918458219))), (((/* implicit */int) (unsigned short)5820)));
                    }
                } 
            } 
            var_23 += ((signed char) min((arr_22 [i_1] [(short)10] [(short)10] [i_1]), (((/* implicit */signed char) ((_Bool) arr_11 [i_1])))));
        }
        var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [(unsigned char)8])) ? (arr_12 [i_1] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [6ULL]))), ((-(((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) var_5))))))));
        /* LoopSeq 2 */
        for (signed char i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            var_25 -= ((/* implicit */short) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-29469)) <= (((/* implicit */int) arr_5 [i_1] [i_1])))))));
            var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [(signed char)16]))) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) ((unsigned char) var_6)))))) ? (((/* implicit */int) ((signed char) arr_1 [i_7]))) : (((/* implicit */int) ((unsigned short) arr_22 [i_7 + 1] [10ULL] [10ULL] [i_7 + 2])))))));
            var_27 = ((/* implicit */signed char) arr_26 [i_7] [i_7]);
            var_28 -= ((/* implicit */unsigned int) arr_5 [i_1] [i_7 - 3]);
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_29 &= ((/* implicit */signed char) ((((/* implicit */int) arr_27 [10] [i_8] [i_8])) * (((/* implicit */int) arr_27 [2ULL] [i_1] [i_1]))));
            var_30 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)16)) ? ((~(((/* implicit */int) arr_16 [i_1])))) : (((/* implicit */int) (unsigned short)57087))));
            arr_32 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned char)16))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [4] [i_8])) ? (((/* implicit */int) arr_23 [i_8] [i_8] [i_8])) : (((/* implicit */int) (short)8522))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [1U] [i_1]))) * (770885835U)))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            arr_42 [i_8] [i_8] [9U] [i_8] [i_11] [i_8] [i_10] = ((/* implicit */unsigned char) (!(arr_6 [i_11] [i_11])));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)41)) || (((/* implicit */_Bool) arr_26 [i_1] [i_8]))));
                            var_32 = ((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_1]));
                            arr_43 [4ULL] [i_8] [i_8] [4ULL] [i_11] [(signed char)6] |= ((/* implicit */signed char) 18446744073709551615ULL);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_1] [i_8])) ? (((/* implicit */int) arr_7 [i_10] [i_8])) : (((/* implicit */int) arr_5 [i_10] [i_11]))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            var_34 -= ((/* implicit */unsigned long long int) ((arr_40 [i_1] [(unsigned short)10] [i_9] [i_9] [i_10] [(_Bool)1]) / (arr_40 [i_1] [i_8] [i_8] [i_9] [i_10] [i_12])));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5820)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57094))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_31 [i_1] [i_10] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)4] [i_12])))))) : (((arr_27 [(signed char)8] [i_8] [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [4U] [i_10] [i_12]))) : (arr_3 [i_1]))))))));
                            var_36 |= ((/* implicit */unsigned char) ((arr_10 [i_12]) <= (arr_10 [i_1])));
                        }
                        arr_46 [i_1] [i_8] [i_9] [i_10] = ((/* implicit */int) arr_11 [i_10]);
                    }
                } 
            } 
            arr_47 [i_8] [i_1] [i_1] = ((((/* implicit */_Bool) arr_3 [i_8])) ? (((unsigned int) arr_0 [i_1])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_1] [i_8])) * (((/* implicit */int) arr_33 [i_1] [i_8] [i_1] [i_1]))))));
        }
        var_37 = ((/* implicit */unsigned int) var_9);
    }
    for (int i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        arr_50 [i_13] = max((((((((/* implicit */int) arr_49 [i_13])) & (((/* implicit */int) arr_48 [i_13])))) ^ (((((((/* implicit */int) arr_48 [i_13])) + (2147483647))) >> (((((/* implicit */int) arr_48 [i_13])) + (61))))))), (((/* implicit */int) ((_Bool) ((int) arr_49 [i_13])))));
        var_38 = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_49 [i_13]), (arr_49 [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_13])))))) : (var_6))) * (((/* implicit */unsigned long long int) var_0))));
        var_39 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_13]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_13])) ? (((/* implicit */int) arr_48 [i_13])) : (((/* implicit */int) arr_48 [i_13])))))));
    }
    var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_5)), (var_11))), (((/* implicit */int) var_2))))) * (min((((/* implicit */unsigned long long int) var_7)), (min((var_9), (var_9)))))));
    var_41 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8522))) * (4280668548U)));
}
