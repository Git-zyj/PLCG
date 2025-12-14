/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56020
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [(signed char)24] [(signed char)24] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))))))));
                var_18 += ((/* implicit */signed char) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((min((((short) arr_0 [i_2] [i_2])), (((/* implicit */short) ((signed char) arr_2 [i_2] [i_3] [i_6]))))), (((/* implicit */short) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_3 [i_5])))))));
                                arr_17 [i_4] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_9)))));
                                var_20 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((arr_10 [i_6] [i_3]) + (2147483647))) << (((var_17) - (1652689008))))) : (arr_10 [i_2] [i_2])))) : (((((/* implicit */long long int) arr_2 [i_3 - 1] [i_3 - 1] [i_3 - 1])) & (var_2)))));
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-1))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) var_11);
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])) : (((/* implicit */int) var_5))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 11; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        {
                            arr_28 [i_2] [i_9] [i_2] = ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_3 + 1] [i_3 - 1] [i_9] [i_10])) + (((/* implicit */int) arr_13 [i_3 + 1] [i_10] [i_3 + 1] [i_10])))) - ((+(((/* implicit */int) ((arr_10 [i_2] [i_3]) > (((/* implicit */int) var_4)))))))));
                            var_24 = ((/* implicit */signed char) (-((-(arr_24 [i_2] [i_3 + 1] [i_9] [i_2])))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3 + 1] [i_10] [i_9 + 2])) || (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_27 [i_10] [i_2] [i_9] [i_3] [i_2]))))))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_22 [i_2] [i_2] [i_10])))))))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) var_12))))) - (((((/* implicit */_Bool) (short)-6925)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_16 [i_2] [i_2] [i_9 + 2] [i_2] [i_10]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_2] [i_3 - 1] [i_9] [i_9 - 2])) + (((/* implicit */int) ((unsigned short) var_11)))))))))));
                            arr_29 [i_2] [i_3] [i_9 + 2] [i_2] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_7)))) + (((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */int) arr_5 [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        for (long long int i_12 = 2; i_12 < 21; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 20; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            {
                                arr_46 [i_15] [i_13] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_36 [12LL] [i_14 + 2] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_14] [i_11]))) : (var_2)))))) ^ (((((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (var_3)))) % ((+(var_8)))))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) - (((/* implicit */int) var_9)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_12] [i_13] [21U])) || (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_14] [i_13])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13347)))))))) : (max((((/* implicit */long long int) arr_36 [i_12] [i_14 + 3] [i_12])), (max((var_11), (((/* implicit */long long int) arr_44 [17ULL] [i_12] [i_12])))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_53 [i_17] [i_13] [i_13] [i_11] [i_11] = (!(((/* implicit */_Bool) min((arr_39 [i_13] [i_13] [i_13]), (arr_39 [i_11] [i_12 + 1] [i_13])))));
                                arr_54 [i_11] [i_13] [i_11] [4ULL] [i_11] [i_11] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min(((unsigned char)0), (var_9)))) ? (((var_13) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), (((((/* implicit */_Bool) arr_45 [(unsigned char)14] [i_12 - 1] [i_12 - 2] [i_12 - 1] [i_12 + 1] [i_13] [i_17])) ? (((((/* implicit */_Bool) var_4)) ? (var_13) : (-918141060))) : (((/* implicit */int) arr_34 [i_13] [i_11] [i_11]))))));
                                var_28 = ((/* implicit */signed char) ((((unsigned long long int) arr_47 [i_11] [i_12 + 3] [i_12 - 1] [i_12 + 1] [i_12 + 2] [i_13])) == (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_42 [i_12 - 2] [i_13] [i_16])))) + ((+(((/* implicit */int) arr_39 [i_11] [23U] [i_13])))))))));
                                var_29 = ((/* implicit */long long int) arr_32 [i_16]);
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((int) var_0)) | (((((/* implicit */int) max(((short)-5), (((/* implicit */short) var_15))))) ^ (((/* implicit */int) ((short) arr_2 [i_11] [i_12 - 1] [i_13]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */_Bool) var_14);
}
