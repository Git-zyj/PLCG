/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95543
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
    var_12 = ((/* implicit */long long int) var_7);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) (+(max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) 8313392003375317545LL))))));
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_2 [i_0] [i_0])) | (min((((/* implicit */long long int) max((1955676973U), (arr_2 [i_0] [i_0])))), (min((-2633538225312501231LL), (((/* implicit */long long int) 1955676973U))))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 5760034676228094741LL))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_2]));
            var_16 = ((/* implicit */unsigned int) min((min((min((((/* implicit */long long int) var_2)), (arr_6 [i_1]))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113))))))), (((/* implicit */long long int) var_9))));
            arr_11 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) 8372224U)), (min((arr_6 [i_1]), (((/* implicit */long long int) arr_9 [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_2 + 3]) == (((((/* implicit */_Bool) 4286595078U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [(unsigned short)11]))) : (var_0))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)113)), (arr_10 [i_1])))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))))));
            var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_5 [i_2 + 3])) * (((/* implicit */int) (unsigned short)65024))))));
        }
        /* vectorizable */
        for (long long int i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            arr_14 [i_1] [3U] = arr_13 [i_3 + 3] [i_3 - 3] [i_3 + 1];
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */short) ((1858676563U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            var_18 = ((/* implicit */int) (+(299712581U)));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((-1017311950340418975LL) - (((-5760034676228094731LL) / (5760034676228094741LL)))))) > (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_18 [i_1] [i_1] [i_4] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551606ULL)))));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_4]))));
                    arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)65535);
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    arr_29 [i_1] [i_1] = ((/* implicit */signed char) arr_21 [i_1] [i_1] [i_5] [i_7]);
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [(short)6] [i_7])) << (((var_3) - (11215924180654414244ULL)))))) ? (((/* implicit */int) (short)8027)) : ((+(((/* implicit */int) (short)-8023)))));
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)5361))));
                }
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_22 = ((/* implicit */signed char) arr_9 [i_1] [i_8]);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(arr_20 [i_1] [i_1] [(short)1] [i_8])))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (5760034676228094735LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)44)))))) ? (((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (arr_30 [i_1] [i_4] [i_1] [i_8])))));
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-108))))), (max((((/* implicit */unsigned int) arr_20 [(unsigned short)2] [i_4] [(unsigned short)2] [i_8])), (arr_21 [i_1] [i_4] [i_5] [i_8])))));
                }
                arr_33 [i_1] [i_4] [8] = ((/* implicit */short) ((_Bool) ((_Bool) arr_12 [i_5])));
            }
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) 12046919305212414525ULL))));
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) arr_37 [i_10] [i_10] [i_9 + 1] [i_9 + 1] [i_9]);
                    var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (signed char)-1)))));
                }
                for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4260897940842367413LL)) ? (((18446744073709551614ULL) * (((/* implicit */unsigned long long int) 4294967274U)))) : (((/* implicit */unsigned long long int) -1745193624))));
                    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -5760034676228094761LL)) || (((/* implicit */_Bool) (unsigned short)36754)))) ? (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_16 [(signed char)4] [1])))))) : (min((((7600608490688334639ULL) << (((((/* implicit */int) (unsigned char)165)) - (110))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_8 [i_9]))))))));
                }
                arr_41 [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */unsigned long long int) 1561720660)) : (18437736874454810624ULL)))))))));
            }
            /* vectorizable */
            for (unsigned short i_12 = 1; i_12 < 15; i_12 += 2) 
            {
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_10))));
                arr_44 [i_1] [i_12] [(short)13] [i_12] = (+(arr_21 [i_12 - 1] [(unsigned char)7] [i_12 - 1] [(unsigned char)7]));
            }
            var_31 += ((/* implicit */unsigned short) ((signed char) arr_42 [(signed char)13] [(signed char)13] [i_4]));
            var_32 = ((/* implicit */int) ((((/* implicit */long long int) min((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)-4096)))), (((/* implicit */int) arr_32 [i_1]))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_0) != (arr_6 [i_1]))))) : (-5760034676228094736LL)))));
        }
        var_33 = ((/* implicit */unsigned short) max((min((5965752660709416027LL), (((/* implicit */long long int) arr_32 [i_1])))), (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_1])) % (((/* implicit */int) arr_32 [i_1])))))));
    }
    for (signed char i_13 = 1; i_13 < 16; i_13 += 2) 
    {
        arr_48 [i_13 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_46 [i_13 - 1] [i_13 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551606ULL)))));
        var_34 = ((unsigned char) var_4);
    }
    for (long long int i_14 = 1; i_14 < 23; i_14 += 2) 
    {
        var_35 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */short) var_11)), ((short)27540)))) ? (((((/* implicit */int) arr_50 [i_14])) >> (((var_8) - (12370218113623460495ULL))))) : (((/* implicit */int) arr_50 [i_14 - 1])))), (((((((/* implicit */_Bool) 5965752660709416027LL)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (short)(-32767 - 1))))) % (((/* implicit */int) ((_Bool) (short)8027)))))));
        var_36 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */short) arr_49 [i_14] [i_14])), (arr_50 [i_14 - 1]))))));
    }
    /* LoopSeq 1 */
    for (int i_15 = 3; i_15 < 18; i_15 += 3) 
    {
        var_37 = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) (unsigned short)53032)) ? (((/* implicit */int) (short)-8031)) : (((/* implicit */int) arr_50 [i_15])))))), (((/* implicit */int) arr_49 [i_15] [(unsigned char)24]))));
        arr_54 [i_15] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) & (var_8))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 16758018066695890721ULL))))))));
    }
}
