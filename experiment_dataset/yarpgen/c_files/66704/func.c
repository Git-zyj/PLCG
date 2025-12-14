/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66704
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] &= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) (unsigned char)255))), (var_4)));
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((short) min((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)108))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_12 = ((/* implicit */long long int) ((unsigned int) ((max((2147483647), (2147483644))) <= (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_3 [(signed char)7] [i_1 - 1] [i_1]))))))));
                    var_13 -= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (short)-28529))) ^ (max((-1098529806), (((/* implicit */int) var_6))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_14 -= ((/* implicit */short) ((((/* implicit */int) (short)27042)) & (((/* implicit */int) (unsigned char)91))));
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) arr_4 [i_1])))) <= (((/* implicit */int) arr_10 [i_1] [i_1]))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_8))) || (((/* implicit */_Bool) arr_0 [(unsigned char)10]))));
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (var_0)));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((/* implicit */int) arr_3 [i_3] [i_5] [i_3])))))));
                        arr_18 [i_0] [i_1] = (((!(((/* implicit */_Bool) var_5)))) ? (((var_7) - (((/* implicit */long long int) ((/* implicit */int) (signed char)116))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_15 [i_0]))))));
                        var_19 = ((/* implicit */int) arr_5 [i_1 - 3] [i_1] [i_3 + 2]);
                        arr_19 [i_0] [i_1] [6] [i_5] [i_1] = arr_16 [i_1] [i_1] [i_5];
                    }
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            arr_28 [(short)12] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)-31342))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [10] [i_3 + 4] [i_0] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_3] [i_0] [i_3] [i_0] [i_0] [i_0]))) : (var_11))))));
                            var_21 = ((/* implicit */unsigned long long int) arr_15 [i_1 - 3]);
                            var_22 = ((/* implicit */long long int) (short)-32222);
                        }
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32752)))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0])))))));
                            var_25 = ((/* implicit */short) min((var_25), ((short)-31342)));
                            arr_32 [i_0] [i_0] [i_1] [i_6] [i_8] = arr_4 [i_1];
                            var_26 = ((/* implicit */unsigned char) ((int) 18446744073709551615ULL));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_5 [i_1 - 2] [i_0] [i_6]))));
                            arr_35 [5] [i_1] [i_3] [(signed char)2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (16931081177112967967ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 - 2] [i_1 - 3])))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)64)) << (((((/* implicit */int) (signed char)84)) - (60)))));
                            var_29 = ((/* implicit */_Bool) var_11);
                        }
                        arr_36 [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1 + 1] [i_3] [i_6] [(unsigned char)13] [i_1 + 1])) || (((/* implicit */_Bool) (short)20832)))));
                    }
                    arr_37 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                    arr_38 [i_0] [i_1] [5] [i_3 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 - 1] [i_3 - 2] [i_1 - 1])) ? (18256304013199421552ULL) : (((/* implicit */unsigned long long int) arr_17 [i_1]))));
                }
            }
        } 
    } 
    var_30 -= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-11159))));
}
