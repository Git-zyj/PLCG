/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70641
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((int) (-(max((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_0]))))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9386))) ^ (var_11)))))))));
                                var_16 -= ((/* implicit */unsigned short) min((max((((arr_11 [i_0] [i_1] [4ULL] [i_3] [(_Bool)1] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [2ULL]))))), (((/* implicit */unsigned long long int) min((var_10), ((unsigned short)9364)))))), (((/* implicit */unsigned long long int) (unsigned short)9386))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_5))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56155))));
    var_19 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) arr_17 [i_6] [i_5]);
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56142))) : (var_9)))));
                            var_22 *= ((/* implicit */short) (unsigned short)9373);
                            arr_27 [i_5] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (8064) : (2125709825))));
                            arr_28 [i_5] [15] [i_5] [i_7] [15] = ((/* implicit */unsigned char) (unsigned short)56158);
                            arr_29 [i_5] [i_5] [i_7] [i_5] [i_5] [i_5] = ((unsigned short) ((((/* implicit */_Bool) (short)-5446)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)89))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) ((short) (signed char)15));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9364)) || (((/* implicit */_Bool) (signed char)25))))) : (((/* implicit */int) arr_20 [i_5] [i_5] [i_5]))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (var_11))))));
        }
    }
    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_11] [i_11]))))), ((+(var_11)))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((unsigned char) min((var_3), (((((/* implicit */_Bool) (unsigned short)56172)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56169)))))))))));
        arr_36 [i_11] = ((signed char) arr_23 [i_11] [i_11] [(unsigned short)6] [i_11]);
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_31 [i_11] [i_11] [i_11]))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_21 [i_11] [i_11] [i_11])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_4))))) < (max((((/* implicit */long long int) var_13)), (arr_16 [i_11] [i_11])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)56172)))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_1))))))));
    }
}
