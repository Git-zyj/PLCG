/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9529
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
    var_10 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) (short)-8)))) >= ((~(((/* implicit */int) var_8)))))))) <= (((min((var_5), (((/* implicit */unsigned long long int) (short)-32750)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14642)) ? (((/* implicit */int) var_3)) : (var_4))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_11 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_5 [(unsigned short)10] [i_1 - 4] [i_1]))) << (((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 2] [i_1 - 4])) - (57892)))))) || (((/* implicit */_Bool) max((max((var_2), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (-(arr_2 [i_0] [(signed char)5] [i_2])))))))));
                    var_12 += ((/* implicit */unsigned int) (((~(-35035997523505121LL))) >> (((((/* implicit */int) (short)24179)) - (24125)))));
                    arr_7 [2LL] [i_2] [i_1] [i_2] &= arr_3 [i_0] [i_0] [i_2];
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_3 = 4; i_3 < 11; i_3 += 3) 
                {
                    arr_10 [i_0] [i_1 - 2] [i_3] = ((/* implicit */unsigned char) (short)-32750);
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_0] [12ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_11 [i_3]) > (((/* implicit */unsigned int) arr_1 [i_0]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)32749)) || (((/* implicit */_Bool) 4294967295U)))))));
                        var_13 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)229)) != (112)));
                    }
                    for (int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        arr_16 [i_0] [i_1] [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 - 3] [i_5 + 1] [i_3]))) > (3739825831U)));
                        arr_17 [i_0] [i_0] [i_3 + 1] [i_3] [i_0] = 1227649227;
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_21 [i_0] [i_1] [i_3] [i_6] = ((/* implicit */signed char) ((int) ((12536721540407711698ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (9207714816532496620ULL)))))))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_14 [i_1 - 4] [(unsigned short)6] [i_3 + 1] [4]) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_3 - 2]))))))))));
                        var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)24162)) ? (-10) : (((/* implicit */int) (unsigned short)0)))) <= ((~(((/* implicit */int) arr_3 [i_0] [4ULL] [5U]))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 7150206793471112417ULL)) ? (arr_14 [i_1 - 2] [i_3] [i_3 + 2] [(unsigned char)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3 - 3] [i_6])) || (((/* implicit */_Bool) var_6))))))));
                    }
                    var_18 += ((/* implicit */_Bool) arr_14 [i_1 - 2] [i_3 - 3] [i_3 + 1] [6U]);
                    var_19 += ((/* implicit */unsigned char) (~(908919527)));
                    var_20 = ((/* implicit */long long int) (~(arr_19 [i_0] [i_1] [i_0] [i_3 - 3] [i_0])));
                }
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) (short)24154);
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_11 [i_1 - 1]);
                }
                arr_25 [i_0] [i_0] [(unsigned short)12] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((signed char) arr_2 [i_0] [i_1 - 3] [i_1]))), (((arr_14 [0LL] [i_1 - 4] [i_1 + 1] [0LL]) >> ((((~(((/* implicit */int) (short)32749)))) + (32787)))))));
                arr_26 [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32750)) / (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (signed char)-107)) : (((((/* implicit */int) (short)24154)) & (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
