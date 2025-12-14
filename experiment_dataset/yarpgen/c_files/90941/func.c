/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90941
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
    var_19 = ((/* implicit */_Bool) ((((var_9) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) : (var_5))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (unsigned char)0)))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((arr_1 [(unsigned short)3]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((arr_1 [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (10864606303969204003ULL))) : (((/* implicit */unsigned long long int) (-(3248416892U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)11])))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (0ULL)));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((!((!(arr_6 [(unsigned char)1] [i_1]))))) ? ((((!((_Bool)1))) ? (((((/* implicit */_Bool) (unsigned short)22398)) ? (10864606303969204015ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)0]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)2))))))) : ((~(((((/* implicit */_Bool) arr_7 [i_1 - 4] [0ULL])) ? (7582137769740347612ULL) : (10864606303969204008ULL))))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4]))) % (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_4 [i_3 - 1]))) : (((((/* implicit */_Bool) 7582137769740347612ULL)) ? (((/* implicit */unsigned long long int) arr_9 [i_1 - 4] [i_1])) : (arr_4 [i_3])))))));
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_8 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_4 [i_1])))) ? (arr_9 [i_1 - 3] [14ULL]) : (arr_9 [i_1] [(_Bool)1])))) : (max((max((7582137769740347597ULL), (((/* implicit */unsigned long long int) arr_5 [12ULL] [(_Bool)1])))), (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (10864606303969204021ULL)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_21 [i_1] [i_2] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) arr_14 [i_1]))))));
                                arr_22 [i_7] [i_2] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) arr_15 [i_1 - 1] [i_2] [i_5] [i_6]);
                                arr_23 [i_1] [i_2] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) ((((10864606303969204015ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_1 - 4] [i_1] [i_1] [0U] [i_2])) ? (((/* implicit */int) arr_19 [i_7 + 1] [i_2] [i_5] [i_1 - 2] [(unsigned char)1] [i_2] [i_2])) : (((/* implicit */int) arr_19 [i_7 + 1] [i_2] [i_5] [i_1 - 3] [i_5] [i_1] [i_6])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
