/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84435
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) (short)-16318));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (_Bool)0))) - (((/* implicit */int) arr_6 [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43704))));
                        arr_11 [8ULL] [i_1] [i_2] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)23363)) ? (3277169115U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23375)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_1])) ? (((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) 2015946150))));
                        arr_15 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 - 1]))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) 10219485430261482501ULL));
                        var_16 = (-((-(((/* implicit */int) (signed char)-67)))));
                        var_17 = ((short) arr_10 [i_0] [(short)9] [i_0] [i_0] [i_0]);
                    }
                    for (short i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_18 = (~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_7 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-100)) + (2147483647))) >> (((((/* implicit */int) (short)2047)) - (2033)))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_7 - 2] [i_0])) ? (arr_4 [i_0] [i_7 + 1] [i_2]) : (((/* implicit */unsigned long long int) var_2))))));
                            arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 942709269966883995LL);
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_2 - 1])) < (((/* implicit */int) ((short) var_1)))));
                            arr_27 [i_1] [i_0] [i_1] [i_8] = ((/* implicit */unsigned short) ((((var_8) / (var_0))) / (((/* implicit */int) arr_22 [i_0] [i_0] [11ULL] [i_2 + 1] [i_8]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_12 [i_0] [i_1] [6U] [i_6] [6U]))) ? (((((/* implicit */_Bool) -942709269966883994LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-98)))) : (((/* implicit */int) arr_22 [i_2 - 2] [i_0] [i_2 - 2] [i_8 - 1] [i_8 - 1]))));
                        }
                        var_22 = max((((unsigned char) arr_23 [i_2 - 3] [i_2 - 3] [i_6 + 2] [16U] [i_6] [i_6] [i_6 - 2])), (((/* implicit */unsigned char) min((arr_23 [i_2 - 2] [i_2 - 2] [i_6 - 1] [i_2 - 2] [i_6 + 1] [i_6 + 1] [i_6]), (((/* implicit */signed char) (_Bool)1))))));
                    }
                    arr_28 [i_0] [i_1] [16LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 68719476224LL)) ? (-942709269966883973LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6182)))));
                    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)177)) : (-2015946150)))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1] [i_2 - 2])) ? (((/* implicit */long long int) var_5)) : (arr_10 [i_0] [i_1] [4] [i_2 + 1] [i_0])))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_22 [(short)4] [i_0] [i_0] [i_0] [(short)4]))));
                }
            } 
        } 
    } 
}
