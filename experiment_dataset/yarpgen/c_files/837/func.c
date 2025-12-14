/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/837
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(arr_1 [i_0 + 1] [i_0])))) > (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-512))))), (((((/* implicit */unsigned long long int) 1777315262)) * (var_9)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
        var_17 += ((/* implicit */int) ((((/* implicit */int) (signed char)-83)) != ((+((-(((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551602ULL))));
        var_19 -= ((/* implicit */unsigned int) arr_4 [(unsigned short)16]);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [21U] [i_3] = ((/* implicit */signed char) ((var_10) & (((/* implicit */unsigned long long int) arr_12 [i_1] [(unsigned short)11] [i_1]))));
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(10539887023720477490ULL)));
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) max((var_1), ((-(((((/* implicit */int) (signed char)15)) << (((524032U) - (524007U)))))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((max((var_8), (((/* implicit */unsigned int) (unsigned char)123)))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) > (((/* implicit */int) (short)7504)))) || (((/* implicit */_Bool) max(((unsigned char)41), (((/* implicit */unsigned char) var_14)))))))))))));
        arr_18 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_21 *= ((/* implicit */_Bool) (-(arr_20 [i_5])));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 664173666U)) ? (((/* implicit */unsigned long long int) -1177372412)) : (3959016830197680350ULL)));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)203))))), ((-(min((3905181358204099385ULL), (((/* implicit */unsigned long long int) (signed char)-54))))))));
            arr_24 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 14541562715505452230ULL))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */int) (short)7504)) / (1105561265)));
                        var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) (~((+(-1777315268))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((1777315268) - (((/* implicit */int) (unsigned short)236)))))))));
        }
        var_27 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1164499261U))));
    }
    for (unsigned char i_9 = 4; i_9 < 9; i_9 += 1) 
    {
        var_28 &= ((/* implicit */long long int) (-(arr_34 [(signed char)0] [i_9 + 2])));
        var_29 = ((/* implicit */unsigned int) (+(var_10)));
        var_30 += ((/* implicit */unsigned long long int) arr_32 [6LL]);
    }
    var_31 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_13) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))) != (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_0)) : (var_3))), (((/* implicit */unsigned long long int) var_6))))));
}
