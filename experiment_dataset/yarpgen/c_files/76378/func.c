/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76378
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
    var_13 ^= ((/* implicit */long long int) ((unsigned long long int) var_2));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) ((unsigned char) min((arr_0 [i_0]), (3522940363U))));
        var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23381)) ? (arr_0 [(short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)23381)))) : (var_2)))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned short)6])) | ((+(((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_1]))))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_3 [i_1 - 2] [i_1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1] [i_1 - 3])), (arr_1 [i_1 - 3])))) : (max((min((((/* implicit */int) var_1)), (-912042089))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))))));
    }
    for (short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_18 = ((/* implicit */short) (unsigned char)33);
        var_19 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) arr_5 [i_2]))), (arr_4 [i_2 - 2] [i_2 - 2])))));
        var_20 = ((/* implicit */_Bool) max((((18ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))), (((/* implicit */unsigned long long int) var_1))));
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_21 = ((/* implicit */short) (((~(arr_7 [i_3]))) << (((max((((/* implicit */int) ((short) arr_7 [i_3]))), (min((arr_8 [i_3]), (((/* implicit */int) arr_6 [i_3] [i_3])))))) - (18504)))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                for (int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_16 [i_4] [i_5] [i_5] [i_4] [i_3] [i_3]) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_3])) : (((/* implicit */int) arr_16 [10LL] [i_4] [i_5] [i_5] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_8 [i_6 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_4] [i_6])))) : (((/* implicit */int) arr_10 [i_3]))))) : (arr_7 [i_6]));
                        var_23 = ((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((int) 806165497U)))))), ((short)-23381)));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_4))));
                        var_25 = ((/* implicit */unsigned char) arr_7 [i_3]);
                        var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) -7869393146806711953LL))))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3] [i_3]))))) ? (arr_13 [i_3] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) << (((arr_14 [i_4] [i_4]) - (603311711))))))));
        }
    }
}
