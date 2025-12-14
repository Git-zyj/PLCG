/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94874
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) (!(((arr_0 [(_Bool)1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) ^ (((/* implicit */int) ((max((((/* implicit */int) (unsigned short)38768)), (477498452))) == (((/* implicit */int) ((((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2])) != (((/* implicit */int) (_Bool)1)))))))))))));
                    arr_6 [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) ((_Bool) -8164521879181775686LL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 - 1] [i_1] [i_0])) < ((~(((/* implicit */int) (signed char)-42))))))) : (((((/* implicit */_Bool) max(((unsigned char)8), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0] [i_2 - 2]))))) ? (((/* implicit */int) max(((short)32767), ((short)18716)))) : (((((/* implicit */int) arr_5 [i_2 - 1] [i_1] [i_1])) - (((/* implicit */int) var_4))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) && (((/* implicit */_Bool) ((arr_12 [i_0] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 800912645U)))))));
                    }
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))) != ((+(((unsigned long long int) arr_12 [i_0] [21]))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_9 [i_0] [i_3] [i_3]))) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_4])))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */short) 18446744073709551615ULL);
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_0 [10]) : (4625138194135565274ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [0U] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [(unsigned char)10])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-7337)), ((unsigned short)38768)))) == (((/* implicit */int) (signed char)127))))))))));
    }
    for (unsigned char i_6 = 3; i_6 < 15; i_6 += 3) 
    {
        arr_24 [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_6])) | (((/* implicit */int) (signed char)-35))))), (arr_2 [i_6])))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) - (arr_15 [i_6] [12LL] [i_6] [i_6]))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)106)))))))));
        arr_25 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32767)), (arr_0 [i_6])))))))) : (arr_15 [i_6 - 1] [i_6] [5] [i_6 + 2])));
    }
    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) arr_26 [11]);
                            arr_39 [i_7] [i_10] [i_10] [i_10] [i_11] = (i_10 % 2 == zero) ? (((/* implicit */signed char) ((((((((/* implicit */int) arr_5 [(short)18] [i_9] [i_8])) % (((/* implicit */int) arr_1 [i_10])))) % (((((/* implicit */int) arr_13 [i_8] [i_10] [(short)4] [i_11])) * (((/* implicit */int) (_Bool)1)))))) / (((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_7 [i_10] [i_10] [i_11])))) ^ (((/* implicit */int) var_10))))))) : (((/* implicit */signed char) ((((((((/* implicit */int) arr_5 [(short)18] [i_9] [i_8])) % (((/* implicit */int) arr_1 [i_10])))) * (((((/* implicit */int) arr_13 [i_8] [i_10] [(short)4] [i_11])) * (((/* implicit */int) (_Bool)1)))))) / (((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_7 [i_10] [i_10] [i_11])))) ^ (((/* implicit */int) var_10)))))));
                            var_18 ^= ((max((max((((/* implicit */long long int) var_11)), (var_1))), (((/* implicit */long long int) arr_28 [i_7])))) <= (((/* implicit */long long int) (+(-1)))));
                            arr_40 [i_7] [i_10] [i_10] [i_10] = ((_Bool) ((unsigned short) arr_13 [i_9] [i_10] [i_9] [i_10]));
                            var_19 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) % (max((((/* implicit */unsigned long long int) -1715511345)), (arr_0 [i_10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [17U] [i_7] [i_7] [i_7])) ? (arr_26 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10] [i_8] [i_9] [i_10] [i_11]))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    {
                        arr_46 [i_8] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                        var_20 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((((/* implicit */int) (signed char)-46)) != (-142839760)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_28 [i_7]))))))));
                    }
                } 
            } 
        }
        var_21 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_41 [i_7] [i_7] [i_7] [4]))))))), (((((/* implicit */_Bool) ((arr_23 [(unsigned short)2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26794)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [6ULL])) || (((/* implicit */_Bool) (unsigned short)54265)))))) : (max((arr_29 [i_7] [i_7] [(_Bool)1]), (((/* implicit */long long int) 3685306515U)))))));
        var_22 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)28101))))))));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 9; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                {
                    arr_52 [i_7] = max((((/* implicit */int) ((((arr_13 [i_7] [(short)8] [i_14 + 3] [i_15]) ? (((/* implicit */int) arr_37 [(unsigned char)0] [i_7] [i_14] [6] [i_15])) : (((/* implicit */int) arr_42 [i_7] [i_14] [i_15] [10ULL])))) <= (((/* implicit */int) arr_4 [i_15] [i_15] [(unsigned char)1] [(unsigned short)5]))))), (-18));
                    arr_53 [i_7] [i_14] [i_15] = ((((((/* implicit */int) arr_48 [i_7] [i_14 + 2])) % (((/* implicit */int) arr_48 [i_7] [i_14 + 2])))) << (((((((/* implicit */_Bool) arr_48 [i_7] [i_14 + 3])) ? (((/* implicit */int) (unsigned short)3944)) : (((/* implicit */int) arr_48 [i_14 - 1] [i_14 - 1])))) - (3928))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) var_6);
    var_24 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) var_7)), (max((((/* implicit */unsigned short) var_5)), ((unsigned short)54243))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(1198886164U)))))))));
}
