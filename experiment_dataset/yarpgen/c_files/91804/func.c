/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91804
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
    var_11 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [(short)0]))))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((short) (signed char)4)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                var_14 ^= ((/* implicit */unsigned int) ((_Bool) 8171763023045586842ULL));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_5 [i_0] [i_1] [i_2])));
            }
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_10))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-5))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-5)) + (((/* implicit */int) var_5))))) : (arr_8 [i_0] [i_0] [i_1] [i_3])));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) % (((unsigned int) var_6))));
            }
            var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)193))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_20 &= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                arr_13 [i_0] [i_1] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_1] [i_1]))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-7)) ^ (((/* implicit */int) (signed char)-12))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)48748)) : (((/* implicit */int) (signed char)6)))) : (((/* implicit */int) (signed char)-7))));
                var_22 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_5]);
            }
            var_23 = ((/* implicit */unsigned int) min((var_23), (((((11307061806364322153ULL) > (((/* implicit */unsigned long long int) var_4)))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) (-(var_7))))))));
        }
        for (int i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((arr_18 [i_6 + 1]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned short)6] [(unsigned char)9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_20 [i_0])))))))) : (((/* implicit */int) arr_3 [i_6]))));
            var_25 &= (short)32767;
        }
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_26 -= ((/* implicit */_Bool) min((arr_11 [i_0] [(short)0] [i_0] [i_0]), (((/* implicit */int) (signed char)4))));
            var_27 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-16952)) ? (((/* implicit */int) (signed char)7)) : (-1402981718)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (((((/* implicit */unsigned long long int) var_1)) | (7139682267345229459ULL)))))));
            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [2ULL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)211), (((/* implicit */unsigned char) arr_20 [i_0]))))) ? (var_7) : (((int) arr_19 [i_0] [i_7]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [8U])))))) : (max((((/* implicit */long long int) var_4)), (arr_5 [i_0] [10ULL] [i_7])))))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_7])) ? ((-(((/* implicit */int) var_9)))) : (268433408)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_7] [i_0])) + (var_7)))) : (((max((var_6), (((/* implicit */long long int) arr_12 [i_0] [i_7])))) % (((/* implicit */long long int) ((arr_8 [i_0] [i_7] [i_0] [i_0]) >> (((((/* implicit */int) arr_23 [i_0])) - (17384))))))))));
            arr_24 [i_7] [(unsigned char)10] [i_0] |= ((/* implicit */int) var_8);
        }
        var_30 = (~(4095ULL));
    }
    for (int i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_8]))))) ? (((/* implicit */int) arr_25 [i_8])) : ((-(((((/* implicit */_Bool) arr_26 [i_8] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-7))))))));
        var_32 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-5)))), (((int) arr_27 [i_8]))));
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (+(((((/* implicit */int) arr_27 [i_8])) | (((/* implicit */int) arr_27 [i_8])))))))));
        var_34 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_27 [i_8])) ? (min((((/* implicit */long long int) (unsigned short)7044)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            var_35 = ((/* implicit */int) ((max((((7139682267345229461ULL) * (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) min((-665366319261707728LL), (((/* implicit */long long int) var_8))))))) & (max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) 2095598517)), (11307061806364322153ULL)))))));
            var_36 -= ((/* implicit */unsigned int) var_7);
            var_37 = ((/* implicit */_Bool) (signed char)-5);
        }
    }
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((max((var_9), (((/* implicit */unsigned short) (signed char)-12)))), (((/* implicit */unsigned short) (short)5708)))))));
    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (var_4)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) var_5)))))));
}
