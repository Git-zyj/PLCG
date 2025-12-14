/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66706
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) var_4)) == (var_3)))), (max(((short)15424), (((/* implicit */short) var_6))))))) % (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_11 [i_0 + 1] [i_0] [(unsigned char)7] [i_3] [i_3] [(unsigned char)7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_15 [i_0] = (+(min((((/* implicit */long long int) arr_12 [i_0 + 3] [i_0 + 3] [i_1 - 1])), (var_1))));
                            arr_16 [i_4] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */short) var_4);
                        }
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_19 [i_0] [8LL] [8LL] [4U] [i_5] = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) arr_9 [2LL] [2LL] [i_1 - 1] [i_1 - 1] [2] [i_5])), (min((2930852560734259433LL), (907204485603331812LL)))))));
                            arr_20 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) (((((+(7463319677646636413LL))) / (min((2930852560734259409LL), (-7463319677646636413LL))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)6]))) | (arr_18 [i_0] [i_0] [i_0 - 1] [(_Bool)1] [i_0] [(short)0] [i_0])))) == (((((/* implicit */_Bool) arr_18 [i_0] [i_1 - 1] [(signed char)3] [i_2] [i_3] [(short)10] [i_1 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
                            arr_21 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned char) min((-7463319677646636413LL), (((/* implicit */long long int) 857056274U)))))) : ((+(arr_7 [(_Bool)1] [9LL] [9LL] [i_0 + 1])))));
                            arr_22 [i_0] [9U] [i_0] [9U] [i_5] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 7463319677646636413LL)) ? (min((var_10), (((/* implicit */long long int) var_7)))) : (((var_9) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_3] [i_5]))))))) + (9223372036854775807LL))) << (((/* implicit */int) arr_13 [i_0] [(signed char)6] [i_0] [i_0 - 2] [i_0] [i_0]))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_25 [i_0] = (~(((/* implicit */int) arr_13 [10] [10] [10] [i_3] [i_3] [i_3])));
                            arr_26 [i_0] [i_0] [i_0 - 3] [i_0] [i_0] = ((/* implicit */unsigned char) (!(arr_13 [i_0] [i_0 - 2] [i_2] [i_3] [i_3] [i_6])));
                            arr_27 [i_0] [i_3] [i_2] [12] [i_0] = ((/* implicit */unsigned int) ((short) var_0));
                            arr_28 [i_0] [12] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [(unsigned char)1] [i_3] [i_2] [(unsigned short)2] [(unsigned char)1]))));
                            arr_29 [i_0] [i_1] [i_1] [2] [i_3] [i_0] = ((/* implicit */_Bool) var_0);
                        }
                        arr_30 [i_0] [i_1] [i_2] [10LL] [10LL] &= (+(max((((/* implicit */long long int) arr_8 [(_Bool)1])), ((+(7463319677646636409LL))))));
                    }
                    for (short i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        arr_33 [i_7] [i_7 - 1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned int) var_2))) ? ((+(((((/* implicit */int) (unsigned short)34842)) ^ (((/* implicit */int) (unsigned short)34843)))))) : ((~(((/* implicit */int) arr_6 [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_8] = ((long long int) arr_12 [i_0] [i_0] [i_2]);
                            arr_37 [i_0] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) arr_35 [i_0 - 3] [i_7 - 1] [i_7 - 1]))));
                            arr_38 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_35 [i_2] [(short)10] [i_8]))));
                            arr_39 [i_0] [(unsigned short)5] [i_0 - 3] [i_0 - 3] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_2 [i_1 - 1]));
                        }
                    }
                    for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        arr_42 [i_0] = ((/* implicit */unsigned char) (unsigned short)30704);
                        arr_43 [i_0 - 2] [i_0 - 2] [i_0] [i_9] [i_0 - 2] = ((/* implicit */unsigned int) (~(-7463319677646636414LL)));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        arr_47 [4] = ((/* implicit */_Bool) var_4);
                        arr_48 [i_0] [i_1] = (+(((/* implicit */int) var_8)));
                        arr_49 [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (-(var_1)))));
                        arr_50 [i_0] [i_0 + 1] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */signed char) (-((+(arr_40 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0])))));
                    }
                    arr_51 [i_0] [i_1] [i_1] = ((/* implicit */int) var_8);
                    arr_52 [(unsigned char)6] [i_0] [i_2] [i_2] = ((/* implicit */int) (~(arr_3 [i_0])));
                }
            } 
        } 
    } 
}
