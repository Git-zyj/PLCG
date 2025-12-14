/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87159
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
    var_11 &= ((((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_1), (var_2)))), (var_6)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) & (((/* implicit */int) arr_2 [i_1]))));
            var_13 ^= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [4])) : (((/* implicit */int) (_Bool)1))))));
            var_14 = ((/* implicit */_Bool) ((int) arr_5 [i_1] [15ULL]));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) (~(min((((/* implicit */int) (unsigned short)64403)), ((-(((/* implicit */int) (unsigned short)1133))))))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [16LL])) ? (((/* implicit */int) max((arr_8 [i_2]), (((/* implicit */unsigned char) arr_6 [(unsigned char)8] [i_2] [(unsigned char)8]))))) : (-582252946)));
        arr_11 [8ULL] = ((/* implicit */unsigned short) arr_2 [(unsigned short)20]);
        var_16 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_2 [i_2])))));
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_16 [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) (signed char)-117)) : (582252946)));
            arr_17 [(short)4] [i_3] [i_3] = ((/* implicit */short) arr_6 [i_3] [i_2] [i_3]);
            arr_18 [i_3] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_10 [i_2]) || (arr_10 [i_2])))), ((-(((/* implicit */int) arr_10 [i_2]))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_8 [i_2])))) & (((/* implicit */int) max((arr_13 [i_4] [i_4]), (arr_14 [i_2] [i_2]))))))) <= (((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) * (4294967288U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [i_2])))))));
            arr_22 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) min((arr_20 [i_4] [i_4] [i_2]), (((/* implicit */unsigned long long int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_26 [i_2] [i_5] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_9 [i_5])) & (((/* implicit */int) arr_9 [i_2]))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) && (((/* implicit */_Bool) arr_6 [i_2] [(short)16] [i_5]))))) != (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_2)))))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)71)) << (((/* implicit */int) arr_10 [i_5]))))), (((((/* implicit */unsigned long long int) -2147483638)) % (arr_3 [i_2] [i_2])))))));
            var_19 *= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_21 [i_2] [1] [i_2])) && (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2]))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    var_20 = ((/* implicit */long long int) arr_6 [i_6] [i_7] [i_6]);
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_7])) ? (((15285117155993099885ULL) - (arr_3 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_24 [i_2] [i_2])))))));
                    var_22 = ((/* implicit */int) arr_23 [i_2] [i_6] [i_7]);
                }
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (-582252941)))) / (((((/* implicit */_Bool) 2615812397U)) ? (arr_27 [(unsigned short)4] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) <= (arr_19 [i_2])));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) max((max((var_4), (((/* implicit */unsigned short) arr_2 [i_6])))), (((/* implicit */unsigned short) arr_21 [i_2] [i_6] [i_6]))))) % (((/* implicit */int) arr_28 [i_9] [i_6]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_10])) - (((/* implicit */int) ((((/* implicit */_Bool) min((arr_35 [1] [i_6] [i_7] [i_9] [i_10]), (((/* implicit */short) arr_0 [i_10]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_10] [i_10])) ? (arr_29 [i_2] [(short)6]) : (arr_29 [(signed char)0] [(signed char)0])))))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_7])) % (((/* implicit */int) arr_8 [i_2]))))) ? (((((/* implicit */int) arr_8 [i_2])) ^ (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_8 [i_9]))));
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    var_27 = ((/* implicit */short) arr_33 [i_2]);
                    arr_39 [i_2] [i_6] [i_6] = ((/* implicit */unsigned short) arr_20 [i_6] [i_7] [i_7]);
                }
                arr_40 [i_2] [i_6] = ((/* implicit */long long int) var_2);
                arr_41 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_2])) ^ (((/* implicit */int) (unsigned char)63))))) ? (((((/* implicit */_Bool) arr_27 [i_6] [i_6])) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)178)) >= (((/* implicit */int) arr_30 [i_6] [9LL] [0LL])))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_7])), (max((((/* implicit */unsigned long long int) var_9)), (arr_32 [i_7] [i_2] [10] [i_2] [i_2] [i_2]))))))));
                var_28 += ((/* implicit */int) arr_30 [(signed char)4] [i_6] [i_7]);
            }
            for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                arr_46 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_6] [i_12]))));
                var_29 = ((((/* implicit */int) (unsigned short)6829)) / (1459551439));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    arr_49 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_15 [i_2]) ^ (arr_19 [i_2])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)-3279)))))));
                    var_30 = var_8;
                }
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((arr_33 [i_2]) << (((arr_33 [i_6]) - (2821507311U))))) << (((arr_33 [i_12]) - (2821507300U)))));
                    arr_53 [i_6] [i_6] = ((/* implicit */int) ((_Bool) var_3));
                    arr_54 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_5 [i_6] [i_6]))))), ((unsigned char)142))));
                }
                var_32 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_12] [i_12])) >= (((/* implicit */int) arr_28 [i_2] [i_2])))))) != (var_6));
            }
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [(_Bool)1] [i_6] [(_Bool)1])))))));
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        var_34 = ((/* implicit */short) ((((unsigned int) ((((/* implicit */int) arr_0 [i_15])) >> (((16548235538376635243ULL) - (16548235538376635218ULL)))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_15] [i_15]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)2] [(unsigned char)6]))))))))))));
        var_35 = (((~((+(401073781U))))) ^ (((unsigned int) ((_Bool) arr_0 [i_15]))));
    }
    var_36 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned char)15))) > (max((((/* implicit */int) (unsigned char)245)), (min((((/* implicit */int) var_3)), (2147483631)))))));
}
