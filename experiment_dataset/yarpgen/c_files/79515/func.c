/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79515
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
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) (~(((unsigned int) 2098155377))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 3; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned char) arr_10 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_1 + 1])), (arr_6 [i_0] [i_1 + 1] [i_1 + 1]))));
                            arr_13 [(_Bool)1] [(_Bool)1] [i_3] [i_3] [i_4 + 1] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_3]);
                            arr_14 [i_1 + 1] [i_3] = ((/* implicit */unsigned short) (unsigned char)1);
                        }
                    } 
                } 
            } 
            var_12 = ((/* implicit */unsigned char) var_7);
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (signed char i_6 = 4; i_6 < 10; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_22 [i_1 - 1] [8LL] [i_6] [i_6] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_7] [12LL] [i_1]);
                            arr_23 [i_0] [i_6] [i_5] [i_6 - 3] [i_6] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)-46))) ? (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (unsigned short)24022)) : (((/* implicit */int) (_Bool)1)))) : (var_3))))));
                        }
                    } 
                } 
            } 
            var_13 |= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (3906615217U)))), (arr_8 [0LL]))), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1 + 1] [4LL]))));
            arr_24 [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 1]);
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            arr_27 [(_Bool)0] [(_Bool)0] |= ((/* implicit */unsigned short) arr_4 [i_0] [i_8] [(unsigned char)4] [i_0]);
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        var_14 |= ((/* implicit */unsigned int) arr_16 [i_0] [i_0 + 1] [i_0 + 1]);
                        var_15 = ((/* implicit */unsigned long long int) (+(var_5)));
                    }
                } 
            } 
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) << (((var_3) - (309083210)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_8])) & (((/* implicit */int) var_7))))) : (arr_26 [i_0 - 1] [i_0 + 1])));
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                for (long long int i_12 = 2; i_12 < 11; i_12 += 2) 
                {
                    for (int i_13 = 1; i_13 < 12; i_13 += 3) 
                    {
                        {
                            arr_43 [i_12] |= ((/* implicit */int) ((short) var_5));
                            arr_44 [i_0] [i_0] [i_0] [(unsigned char)11] [i_11] = arr_12 [i_11];
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(arr_37 [i_0 + 1] [i_12]))))));
                            var_18 = ((/* implicit */unsigned int) var_2);
                            var_19 |= ((/* implicit */unsigned char) ((((arr_8 [i_12]) ^ (arr_17 [i_0] [i_8] [i_8]))) * (((/* implicit */unsigned long long int) var_5))));
                        }
                    } 
                } 
            } 
        }
        arr_45 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_4)) <= (3906615217U)));
    }
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (int i_15 = 2; i_15 < 21; i_15 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) var_1);
                arr_51 [i_14] [i_15] [i_15] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_49 [i_15 - 1])) ? (-7139844768139271516LL) : (((/* implicit */long long int) var_2))))));
                var_21 = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
}
