/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74998
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) arr_2 [i_0]);
        var_15 = ((/* implicit */int) (((-(arr_1 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (~((+(arr_3 [i_0])))));
                            arr_15 [i_0] [i_1] [13LL] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */int) arr_7 [5ULL] [5ULL] [i_1] [5ULL])) + (2147483647))) << (((459028317U) - (459028317U))))));
                        }
                    } 
                } 
            } 
            var_17 ^= ((/* implicit */long long int) ((4033057915U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) > (arr_10 [i_0] [(_Bool)1] [i_1] [i_0] [i_1] [(unsigned char)12])))))));
            arr_16 [i_0] &= ((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241)))));
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned int) var_13);
        }
        arr_18 [13LL] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) <= (261909380U))) ? (((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 1) 
    {
        arr_21 [14ULL] &= ((/* implicit */signed char) ((-6416399138193184141LL) + (9161634448486077692LL)));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (long long int i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) arr_20 [i_7 - 1]);
                    arr_29 [i_7 + 1] [i_5] [i_5] [(_Bool)1] = var_7;
                    var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) > (var_10)));
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        arr_34 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) arr_23 [i_8])))))) : (261909380U)));
        var_20 = ((((/* implicit */int) (unsigned char)221)) != (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_22 [i_8] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8]))) ^ (arr_25 [i_8] [20U] [i_8] [i_8]))))))));
        arr_35 [12U] [i_8] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_8])) | (((/* implicit */int) arr_32 [i_8])))) >> (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_31 [(short)8])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_8] [20LL]))))) : (var_12)));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4)))))))) / (((((/* implicit */_Bool) ((261909380U) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4033057916U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))))))) : (((var_7) & (((/* implicit */unsigned int) arr_24 [i_8] [i_8] [i_8]))))))));
    }
    for (unsigned int i_9 = 2; i_9 < 11; i_9 += 1) 
    {
        arr_40 [i_9] [4U] = var_13;
        arr_41 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [(short)2])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26122))) + (var_4)))))) || (((/* implicit */_Bool) arr_36 [5U]))));
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) + (((4033057918U) + (var_1))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) | (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), ((unsigned char)14))))))))))));
    var_23 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        arr_45 [i_10] [(signed char)12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_10] [10]))));
        arr_46 [i_10] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10] [i_10] [i_10] [(unsigned char)20]))) : (arr_25 [i_10] [i_10] [i_10] [i_10]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (arr_22 [6U] [6U]))))));
    }
    for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) var_8);
        var_25 ^= arr_31 [i_11];
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        arr_51 [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (6416399138193184115LL))) != (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_36 [i_12]))) ? (((/* implicit */long long int) 261909377U)) : (arr_38 [i_12]))))));
        arr_52 [i_12] &= ((/* implicit */long long int) (unsigned char)255);
    }
}
