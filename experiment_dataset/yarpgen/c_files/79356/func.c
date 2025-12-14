/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79356
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
    var_16 = ((/* implicit */long long int) (unsigned char)167);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) -759955470);
                    var_17 = ((((((/* implicit */_Bool) -5423746500798704927LL)) ? (((/* implicit */long long int) 759955469)) : (9223372036854775807LL))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) 0)) & (160098488U)))));
                }
            } 
        } 
        var_18 *= ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) >= (-759955474)));
    }
    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */short) ((-9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
        arr_11 [i_3] [i_3] = ((/* implicit */int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -759955463))));
        /* LoopSeq 2 */
        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            arr_14 [i_4] [i_4] |= ((/* implicit */short) max((((arr_1 [i_3 - 2]) ? (((/* implicit */unsigned long long int) -1728768385)) : (arr_3 [i_3 - 3] [i_4]))), (((arr_3 [i_3 + 3] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
            arr_15 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) || (((-4124624716602258031LL) >= (((/* implicit */long long int) 759955473))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) (unsigned char)0);
            arr_19 [i_3] = ((((/* implicit */_Bool) ((4294967280U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 39318245)) ? (((/* implicit */int) (unsigned short)64801)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) -3913007602701561024LL)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (unsigned char)59)))));
            arr_20 [i_3] = ((/* implicit */int) (_Bool)1);
        }
        var_20 = ((/* implicit */unsigned long long int) 3913007602701561024LL);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */short) ((((((/* implicit */int) var_10)) + (((((/* implicit */_Bool) 1728768384)) ? (((/* implicit */int) (short)20396)) : (arr_25 [i_8] [i_6] [i_6]))))) / (759955469)));
                    arr_31 [i_8] [(signed char)11] = ((/* implicit */unsigned short) 3913007602701561023LL);
                    arr_32 [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_22 [i_8]);
                    var_22 ^= ((/* implicit */_Bool) var_5);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    {
                        arr_40 [i_6] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), (((min((-9193061965994784645LL), (((/* implicit */long long int) arr_21 [i_9] [i_9])))) & (((/* implicit */long long int) 759955469))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            arr_43 [i_6] [i_9] [(_Bool)1] [i_10] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) var_7);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2768)) || (((/* implicit */_Bool) -2147483639))));
                            arr_44 [i_9] [i_11] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8188)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47776)) && ((_Bool)1))))));
                        }
                        arr_45 [i_10] [i_10] [i_10] [i_6] |= ((/* implicit */_Bool) ((((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57323))))) ? (((/* implicit */int) arr_33 [i_6] [i_6] [i_6])) : (((((/* implicit */_Bool) arr_33 [12LL] [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)43)) : (1624126908)))));
                    }
                } 
            } 
        } 
        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62751))) >= (var_9))))) : (3999176464643165369LL)));
    }
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 238959979U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4094))) : (272678883688448LL)))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)79))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_6)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) 759955444)) ? (-14) : (((/* implicit */int) (unsigned char)58))))) / (-2652813848624652699LL))))))));
    var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9))), (((((/* implicit */_Bool) var_2)) ? (3639928379U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)1)))))))));
    var_27 = ((/* implicit */signed char) max((5816929573579138158ULL), (max((((/* implicit */unsigned long long int) var_0)), (var_4)))));
}
