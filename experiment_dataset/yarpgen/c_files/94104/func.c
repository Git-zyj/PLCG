/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94104
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [0ULL] [(_Bool)0] |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((4369733536870267428ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))))))));
        var_15 = ((/* implicit */unsigned int) arr_1 [2ULL] [2ULL]);
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        arr_6 [i_1] [(signed char)0] = ((/* implicit */unsigned char) var_7);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_16 |= ((/* implicit */short) 4369733536870267411ULL);
                            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [10ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) (+(var_7))))));
                        }
                    } 
                } 
            } 
            arr_18 [i_1] = ((/* implicit */unsigned short) var_2);
            arr_19 [i_1] = ((/* implicit */unsigned int) (~(13838538693739215228ULL)));
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */short) (unsigned char)77);
                            var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_8 - 3] [i_7] [i_7] [i_1 - 1])) ? (min((((/* implicit */unsigned long long int) ((unsigned char) arr_12 [i_6]))), (var_5))) : (arr_24 [i_2] [i_7] [i_7] [(signed char)0])));
                            arr_27 [7ULL] [i_6] [i_6] [6ULL] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_26 [i_8] [i_8 - 3] [i_8] [i_8 + 2] [i_8 - 2] [i_8]))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            arr_30 [(_Bool)0] [i_9] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_25 [i_9] [i_1 - 1] [i_9]))))));
            arr_31 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6144)) || (((/* implicit */_Bool) var_12))))) << (((((/* implicit */int) var_14)) - (213)))));
        }
    }
    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_20 = var_14;
        arr_35 [i_10] = ((/* implicit */unsigned short) var_2);
        var_21 = ((/* implicit */unsigned char) arr_34 [i_10] [i_10]);
        arr_36 [i_10] [i_10] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned char)225))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            {
                arr_43 [i_11] [(short)9] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_11])) >= (((/* implicit */int) ((_Bool) arr_10 [i_11] [i_11] [i_12]))))))));
                arr_44 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) arr_32 [i_11] [i_11]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_3);
}
