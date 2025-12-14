/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85271
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) var_12);
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_0)))) ^ (max((var_4), (((/* implicit */int) arr_11 [13LL])))))) << (((((int) var_10)) - (49)))));
                            }
                        } 
                    } 
                } 
                var_18 ^= var_14;
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            {
                var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_14 [i_6 - 2]), (arr_18 [i_6 - 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6 - 2])) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((_Bool) var_15)))));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_29 [i_7 - 2] [i_8 + 1] [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) (unsigned short)19412))), (max((arr_26 [i_8 + 1] [(unsigned short)19] [i_8] [i_8 - 1] [i_8 + 1] [2] [i_8 + 1]), (arr_26 [i_8 - 1] [i_8 + 1] [4ULL] [i_8 - 1] [i_8] [i_8 + 1] [i_8])))));
                                arr_30 [i_5 + 1] = (+((~((~(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((((/* implicit */int) arr_21 [i_5] [i_6])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_6] [i_10] [(unsigned char)21]))))) ? (((/* implicit */int) (unsigned short)54545)) : ((-(((/* implicit */int) arr_25 [i_5] [i_5] [(unsigned char)18]))))))));
                            arr_35 [i_5] [i_5] [i_5] [(unsigned short)11] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) arr_26 [i_5 + 1] [i_5 + 1] [i_10] [i_11] [i_11] [i_10] [i_5 + 1])) ? (arr_33 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))))));
                            arr_36 [9LL] = ((/* implicit */long long int) ((unsigned short) arr_22 [i_5 + 1] [i_5]));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        for (unsigned char i_13 = 1; i_13 < 16; i_13 += 1) 
        {
            {
                var_21 = ((/* implicit */int) -1512712584998895965LL);
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((unsigned char) 8792974742179319199ULL))) : (((/* implicit */int) (unsigned short)36143)))))))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned int) var_15)), (601303195U))), (((/* implicit */unsigned int) var_7)))) <= (((/* implicit */unsigned int) (+(var_7))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
                            {
                                var_24 *= ((/* implicit */_Bool) var_1);
                                var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_7 [i_13 - 1] [i_13 - 1] [i_13])) == (-204349201))))));
                            }
                            for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                            {
                                arr_52 [i_12] [i_12] [i_13] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)44))))) ? (arr_44 [i_13 + 1] [15LL] [i_13]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_12] [7ULL] [i_13 - 1])))))));
                                var_26 = ((/* implicit */unsigned long long int) ((((arr_49 [i_12] [i_13] [16LL] [i_13 + 1] [i_12]) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_49 [(_Bool)1] [i_13] [i_14] [i_13 - 1] [i_14])))) << (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0))))))));
                                arr_53 [i_12] [i_12] [i_14] [i_13] [i_17] = ((/* implicit */unsigned long long int) (signed char)28);
                                var_27 = (+(((/* implicit */int) (signed char)-85)));
                                arr_54 [i_12] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_13 + 1] [i_13 + 1] [i_13 - 1])) ? (arr_44 [i_12] [i_17] [i_13]) : (var_16)))), (min((((/* implicit */long long int) (unsigned char)146)), (-2932613406873017925LL)))));
                            }
                            var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_31 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13]), (arr_31 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_12])))), (((arr_10 [i_12] [i_13 - 1] [i_14] [12]) ^ (arr_10 [i_13] [i_13 - 1] [i_14] [i_15])))));
                            arr_55 [i_12] [i_13] [i_12] [2] [i_12] = ((/* implicit */long long int) var_6);
                            arr_56 [i_13] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((3534535240618094427LL), (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_23 [i_13 + 1] [i_13 + 1] [i_14] [i_12] [i_14]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)97)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
