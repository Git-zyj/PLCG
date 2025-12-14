/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90401
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
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) var_5))))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (+((~(((var_14) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_0))))))));
                                var_20 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 21; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    {
                        arr_20 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_0] [i_0] [i_6] [i_7 + 1] [i_7 + 1]), (((/* implicit */unsigned short) (short)-24009)))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (3553671994U)))))), (var_9)));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_24 [i_6] [i_6] [i_6] [14U] = var_3;
                            var_21 ^= ((/* implicit */unsigned short) (short)24009);
                            arr_25 [i_0] [10] [i_6] [i_7 - 2] [i_0] = (~(((/* implicit */int) (signed char)-104)));
                            var_22 -= ((/* implicit */short) ((arr_4 [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 2])))));
                        }
                        for (signed char i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) 2392821563U);
                            var_24 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (max((13752024720661906138ULL), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((var_17) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6102)))))))), (((/* implicit */unsigned long long int) ((arr_15 [i_5 - 1] [i_6] [i_7]) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1] [11ULL]))) != (arr_16 [i_5] [(unsigned short)6])))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 3; i_10 < 21; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)23)) - (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)58926))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_5 - 2] [i_6] [i_7]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_16 [i_0] [14U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6621)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) : (4398046511096ULL)))));
                            arr_31 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) var_8);
                            var_26 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)102)), (-2783787714936525558LL)))))) ? (((/* implicit */int) ((max((1163631693U), (((/* implicit */unsigned int) (_Bool)1)))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_0 - 2] [i_5] [14] [i_7] [i_10])) >> (((2315236596U) - (2315236570U))))))))) : ((~((~(((/* implicit */int) arr_8 [i_0] [i_0 - 4] [(_Bool)1] [(_Bool)1] [12LL] [i_0 - 1]))))))));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) var_2);
        /* LoopNest 2 */
        for (short i_11 = 1; i_11 < 19; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 2; i_13 < 18; i_13 += 3) 
                    {
                        arr_39 [i_13 + 1] [i_13 + 4] [(short)16] [i_13] [i_12] = ((/* implicit */unsigned char) ((4694719353047645478ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63)))));
                        arr_40 [i_0 + 1] [i_11] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_17)))))) & (((/* implicit */int) var_4))));
                        var_28 -= var_0;
                    }
                    var_29 = ((/* implicit */short) max((((/* implicit */unsigned short) ((arr_34 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) & (var_11))))))), (var_8)));
                    arr_41 [i_12] [i_11 + 3] [i_12] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6)))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) (+((+(var_12)))));
    }
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (int i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            {
                var_31 = ((/* implicit */short) 5430554432457621705LL);
                arr_46 [i_14] = ((/* implicit */signed char) max(((~((~(((/* implicit */int) arr_17 [i_15] [i_15] [i_15] [i_15] [i_14])))))), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_32 -= ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) 13752024720661906121ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)26032))))))));
}
