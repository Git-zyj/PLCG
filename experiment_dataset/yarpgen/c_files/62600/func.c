/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62600
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) ((arr_6 [i_1] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 3])))));
                            arr_12 [i_0] [i_1] [8] [i_3] = ((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) ((short) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                            arr_13 [i_0] [i_1] [i_2] [6ULL] [i_1] |= ((/* implicit */unsigned long long int) var_4);
                            arr_14 [i_1] = ((/* implicit */unsigned int) ((unsigned short) var_2));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_4] = ((/* implicit */_Bool) 33554430);
                            var_11 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0 + 1]), (arr_4 [i_0] [i_0 - 2])))) ? ((+(((/* implicit */int) arr_4 [15] [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3844603363U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)28)), (var_0))))));
                            arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_9))) & (((/* implicit */int) arr_23 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [7LL] [7LL]))));
                            arr_28 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+((~(450363933U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_34 [i_0] [i_1] [i_0] [(short)8] = max((((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_9 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_9 + 2])))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 2] [i_9 + 1])) <= (((/* implicit */int) arr_1 [i_0 + 1] [i_9 + 1]))))));
                            arr_35 [i_1] [i_1] = ((/* implicit */_Bool) 11721252922592144072ULL);
                            arr_36 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 2; i_10 < 10; i_10 += 3) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        {
                            var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_11 [i_12] [i_10 - 2] [i_10] [i_10]))) ? (max((var_8), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)143))))))) : (arr_33 [i_12] [i_12] [i_13])));
                            var_13 = ((/* implicit */unsigned int) 1073725440);
                            arr_47 [i_10] [i_10 + 2] [i_10] [i_10] = (unsigned char)231;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((3061902929U), (((/* implicit */unsigned int) (unsigned char)229)))))));
                            arr_53 [i_10 + 2] [i_11] [i_14] [i_10] = ((/* implicit */short) arr_21 [i_10 + 3] [i_11] [i_11] [i_15]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) 
    {
        for (short i_17 = 1; i_17 < 9; i_17 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (short i_19 = 1; i_19 < 12; i_19 += 1) 
                    {
                        for (signed char i_20 = 0; i_20 < 13; i_20 += 4) 
                        {
                            {
                                arr_66 [i_19] [i_19] [i_20] [i_19 - 1] [i_19] &= ((min((-1073725440), (((/* implicit */int) arr_48 [i_17 + 2] [i_19 - 1])))) <= (((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)84)))))))));
                                var_15 = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_8)) ? (arr_8 [i_19 - 1] [i_17] [21U] [i_19] [i_16]) : (arr_8 [i_19 - 1] [i_19 - 1] [i_18] [i_19 - 1] [i_16])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_21 = 0; i_21 < 13; i_21 += 1) 
                {
                    for (long long int i_22 = 4; i_22 < 12; i_22 += 1) 
                    {
                        for (signed char i_23 = 2; i_23 < 10; i_23 += 4) 
                        {
                            {
                                arr_77 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_22 [i_22 - 1] [(_Bool)1] [(unsigned char)20] [(_Bool)1] [i_21] [i_23])) <= (450363933U)));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_16] [i_23] [i_16] [(short)2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)44))))) && (((/* implicit */_Bool) min((arr_39 [i_23] [i_23]), (((/* implicit */long long int) var_7)))))))) : (((/* implicit */int) min((arr_11 [i_23] [i_22] [i_22 - 2] [i_22 - 3]), (((((/* implicit */int) var_0)) == (-911513642)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
