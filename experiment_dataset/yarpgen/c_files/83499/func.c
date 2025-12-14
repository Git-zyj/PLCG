/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83499
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
    var_20 ^= ((/* implicit */short) ((var_17) == (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (signed char)65))))) : (((/* implicit */int) (unsigned short)64880)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) (-(((16744448U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44256)))))));
        arr_3 [i_0] = var_9;
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)93)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            var_25 ^= ((/* implicit */int) var_2);
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (signed char)117))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-(var_9))))));
                            var_28 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [13LL])) ? (1014778245) : (((/* implicit */int) (unsigned char)25))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-120)))))));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_0] [(short)0])) >> (((((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_6 [i_1] [i_1] [i_3])))) - (18512))))))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_1] [i_3] [i_1]))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned short) ((4278222849U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33)))))))));
                        }
                        for (unsigned short i_7 = 4; i_7 < 13; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_1] [i_1] [i_2] [i_7 - 2] [i_0] [i_7] = ((/* implicit */short) ((((var_6) << (((var_9) - (189673854U))))) + ((+(15045583268447123002ULL)))));
                            var_33 -= arr_12 [i_0] [5] [i_0] [i_0];
                        }
                    }
                } 
            } 
        }
    }
    for (signed char i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        arr_27 [i_8] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_16 [i_8] [(unsigned char)12] [(_Bool)1] [i_8 - 1] [i_8] [12LL] [(short)6])) ^ (((/* implicit */int) arr_26 [i_8 - 1] [i_8 - 1])))));
        arr_28 [i_8] = ((/* implicit */long long int) var_13);
    }
    var_34 &= ((/* implicit */short) (unsigned short)54520);
}
