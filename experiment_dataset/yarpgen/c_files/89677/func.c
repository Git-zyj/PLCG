/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89677
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52611))))) ? (((/* implicit */unsigned int) 6)) : (((2656292134U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))))))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)12924)), (-557507550))))));
                arr_6 [i_0] [(_Bool)1] [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-6418101159111940636LL)))) ? (15632988300374265300ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2195842125306844671LL)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (signed char)119))))) ? (((/* implicit */long long int) 6)) : (120106561293977557LL))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned int) (+(7145074157851824917ULL)));
                    arr_10 [i_1] [(signed char)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) + (4061840013U)))) ? ((~(9976028360283177230ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12926))) : (-2169229537294150947LL))))));
                    arr_11 [i_2] [(_Bool)1] [14ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2169229537294150947LL)) | (15632988300374265322ULL))))));
                }
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    arr_14 [i_3] [(signed char)8] [(_Bool)1] [i_0] = (_Bool)0;
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (signed char)68);
                    arr_16 [i_3] [i_0] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-89)), (2195842125306844682LL)))) ? (((((/* implicit */_Bool) (unsigned char)134)) ? (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (-5119086597624992284LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(12320610179745409410ULL))))))))));
                    arr_17 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_3 + 2] = (_Bool)1;
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)87)) ? (9976028360283177219ULL) : (2251765453946880ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2195842125306844683LL)) && (((/* implicit */_Bool) (signed char)98)))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33149))) * (0U))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
