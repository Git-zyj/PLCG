/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64868
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
    var_14 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned char) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (max((var_12), (var_7))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
    }
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                arr_13 [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)59)), (min((arr_6 [i_3 - 2]), (arr_6 [i_3 - 1])))));
                var_15 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) min(((short)3684), ((short)19949)))), (((unsigned short) arr_6 [i_2]))));
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2]))) / (((13023084009151363219ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22)))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((arr_12 [i_1] [i_2] [i_3] [i_2]), (arr_12 [i_1] [i_2] [(signed char)10] [i_4]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_18 = arr_6 [i_1 - 1];
                    var_19 = ((/* implicit */short) arr_15 [i_2] [i_3 + 1] [i_1 + 1] [i_5] [i_2]);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_23 [i_1 - 2] [i_2] [i_6] [i_6] = ((/* implicit */short) arr_12 [i_1] [i_2] [i_3 - 2] [(unsigned short)4]);
                    var_20 *= ((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1 - 2]);
                    arr_24 [9LL] [i_6] [i_6] = ((/* implicit */signed char) ((long long int) max((8834206622080296575LL), (((/* implicit */long long int) arr_15 [i_6] [i_3 - 1] [i_1 - 2] [i_1] [i_6])))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_6] [i_6] [i_3 + 1] [i_2] [i_6] = ((/* implicit */_Bool) ((signed char) 5423660064558188396ULL));
                        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_26 [i_7 - 1] [i_6] [i_3 - 2] [i_2] [(signed char)9] [(short)2] [i_1 + 1])), (max((arr_8 [i_1 - 2] [i_3 - 2] [i_7 - 1]), (arr_8 [i_1 + 1] [i_3 - 2] [i_7 + 2])))));
                        var_22 = ((/* implicit */short) min((min((((/* implicit */unsigned int) min((arr_18 [i_1] [i_2] [i_3] [i_1]), (((/* implicit */int) arr_22 [i_1] [i_2] [i_3 - 1] [i_6] [i_7]))))), (((unsigned int) arr_22 [(unsigned char)6] [21U] [i_3 - 1] [i_6] [i_7])))), (((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) arr_16 [i_1 - 2] [9] [i_1 - 1] [i_6])), (arr_21 [(unsigned char)7] [i_2] [i_6] [i_2] [i_2])))))));
                        var_23 = ((/* implicit */short) min((5423660064558188397ULL), (13023084009151363219ULL)));
                    }
                    for (signed char i_8 = 1; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_24 = min(((unsigned short)9619), (((/* implicit */unsigned short) (_Bool)1)));
                        var_25 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) arr_15 [i_6] [i_2] [i_2] [i_2] [i_2]))));
                        arr_31 [i_1] [i_6] [i_3 + 1] [i_6] = ((/* implicit */_Bool) arr_25 [i_1] [i_1 - 1] [7ULL] [i_3] [i_8 - 1] [18ULL]);
                    }
                    arr_32 [(signed char)5] [i_6] [i_3] [i_6] = ((/* implicit */short) ((int) (_Bool)1));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_26 = min((((5423660064558188384ULL) / (5423660064558188382ULL))), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_2] [i_3 - 1] [i_9])));
                    arr_36 [i_1 + 1] = ((/* implicit */long long int) min((max((((/* implicit */unsigned short) ((signed char) arr_33 [i_9] [i_3] [21ULL] [i_1]))), (arr_8 [i_3] [(unsigned char)5] [i_3]))), (((/* implicit */unsigned short) arr_5 [i_1 - 1]))));
                }
                arr_37 [(short)13] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_26 [i_2] [i_2] [(unsigned short)16] [i_2] [i_2] [i_3 + 1] [(unsigned short)9])), (max((((/* implicit */int) max((arr_33 [i_3 + 1] [i_1] [i_3] [i_3]), (((/* implicit */short) arr_15 [i_2] [(short)2] [12ULL] [12ULL] [i_3]))))), (((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) arr_34 [i_1 - 1] [i_3] [i_3 - 2] [i_1 - 2] [i_2]))))))));
            }
            var_27 = ((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [8U]);
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) max((((((5423660064558188397ULL) << (((13023084009151363215ULL) - (13023084009151363193ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1 - 1] [i_10 + 1]))))), (min((max((((/* implicit */unsigned long long int) (_Bool)1)), (5423660064558188387ULL))), (((/* implicit */unsigned long long int) arr_29 [i_10] [i_10 + 1] [i_1] [(short)3] [i_1 - 1] [(short)4])))))))));
            var_29 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) 7655841576770040353LL)), (13023084009151363219ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1 - 2] [i_10 + 1])) >> (((/* implicit */int) arr_11 [i_1 - 2] [i_10 + 1])))))));
            arr_41 [i_10] [i_1] = max((max((((/* implicit */short) ((((/* implicit */int) arr_10 [i_10 + 1] [i_10])) <= (((/* implicit */int) arr_5 [i_1]))))), (arr_10 [i_1 - 2] [(signed char)4]))), (max((arr_22 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_1 + 1]), (((/* implicit */short) arr_15 [(_Bool)1] [i_10] [(_Bool)0] [i_1] [i_1 - 1])))));
        }
        var_30 = ((/* implicit */unsigned long long int) ((unsigned char) 5423660064558188382ULL));
    }
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        arr_44 [i_11] [i_11] |= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) arr_15 [i_11] [(_Bool)1] [i_11] [(short)0] [i_11])), (arr_35 [i_11] [i_11] [i_11] [i_11])))) % (((/* implicit */int) arr_19 [(unsigned short)15] [i_11])))));
        var_31 = ((/* implicit */unsigned char) max((((short) 1862428375)), (arr_10 [i_11] [i_11])));
    }
}
