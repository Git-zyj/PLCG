/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78202
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) ((unsigned char) 2213670824U))) : (((/* implicit */int) (signed char)13))))) ? (((((/* implicit */_Bool) 10109921785790920323ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 763683407U))))) : (((/* implicit */int) var_8)))) : (min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (-1)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_12 ^= ((/* implicit */_Bool) min((min((arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 2]), (arr_2 [i_1 - 1] [i_1 - 2] [i_1 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (signed char)32)) - (22))))))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (4957376298314861161ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1] [13ULL] [i_0])) | (((/* implicit */int) arr_4 [i_1 + 3] [i_1] [i_1 + 2] [i_0]))))) ? (((/* implicit */int) min(((unsigned short)19139), (arr_4 [i_1 - 2] [4U] [i_1 - 2] [i_0])))) : ((+(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1] [i_0]))))));
                            var_15 = max(((~(arr_5 [i_0] [i_1] [i_2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned short)56023))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) | (1002586141U)))) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (var_5))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_1 [i_0 - 1]))));
                            var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned short) var_7))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-27)))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_3])))) == (((((/* implicit */_Bool) 4957376298314861161ULL)) ? (((/* implicit */int) arr_8 [i_5] [i_0] [i_3] [(unsigned short)11] [i_0] [i_0])) : (((/* implicit */int) arr_12 [(unsigned short)6] [(unsigned short)6] [i_5]))))));
                            var_19 = ((/* implicit */unsigned short) ((unsigned char) arr_3 [(unsigned char)6] [i_5]));
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)21408))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                {
                    var_21 ^= (((+(8336822287918631315ULL))) & (min((arr_17 [i_6]), (((/* implicit */unsigned long long int) arr_16 [i_7] [(_Bool)1])))));
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47316)) ? ((~(((/* implicit */int) var_3)))) : ((-(((/* implicit */int) (unsigned short)65517))))))), (min((min((var_5), (var_6))), (((((/* implicit */_Bool) arr_18 [i_6] [i_8])) ? (arr_15 [11ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6])))))))));
                }
            } 
        } 
    } 
}
