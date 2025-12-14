/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94490
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2 + 1])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        arr_9 [i_3] [(short)14] [i_2 - 4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_0 - 2])) ? (arr_1 [i_0] [i_2 - 1]) : (((/* implicit */long long int) var_8))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1]))));
            arr_12 [i_0 - 1] [(short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (_Bool)1)) : (-20)));
            var_20 ^= ((/* implicit */short) arr_8 [i_0] [i_0 - 2]);
        }
        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [11U] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 2]))));
            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned short)12]))) % (((((/* implicit */_Bool) (unsigned short)47584)) ? (435098774814057404LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_5])))))))));
            var_23 = ((/* implicit */int) 545344977U);
            var_24 ^= ((/* implicit */signed char) ((int) var_8));
        }
    }
    for (signed char i_6 = 2; i_6 < 10; i_6 += 3) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) 4226482098U)) < (var_0)));
        var_26 = ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-1)));
        arr_20 [i_6] = ((/* implicit */unsigned long long int) min((((((long long int) arr_15 [i_6] [i_6])) | (((/* implicit */long long int) (+(var_16)))))), (((/* implicit */long long int) arr_5 [i_6] [i_6 - 2] [i_6]))));
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (var_12)))) ? (((((/* implicit */_Bool) ((long long int) var_17))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10))))));
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((int) var_4)) : (((/* implicit */int) (short)6432))))) ? (((/* implicit */unsigned int) var_8)) : (((unsigned int) var_3)))))));
}
