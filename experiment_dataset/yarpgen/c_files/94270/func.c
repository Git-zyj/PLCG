/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94270
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
    for (int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1431504099)) ? (((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_0 - 2])) : (arr_2 [i_0] [i_0 - 2]))), (((((/* implicit */_Bool) var_15)) ? (1953532816U) : (2341434479U)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_10 [0LL] [5LL] [0LL] = ((/* implicit */_Bool) 1953532812U);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_6))));
                        arr_11 [i_1] [i_2 - 1] [i_3 + 1] = 811674485U;
                        arr_12 [i_0 - 1] [(_Bool)1] [i_0 - 2] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) var_12)) + (((((/* implicit */_Bool) 811674485U)) ? (var_10) : (((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_0 + 2])))))), (((((/* implicit */_Bool) (-(2341434484U)))) ? (3932160ULL) : (((/* implicit */unsigned long long int) 1953532816U))))));
                    }
                    var_21 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)24212))))));
                    arr_13 [0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -7551836969332557785LL)) ? (arr_1 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56628)))))));
                }
                /* LoopSeq 2 */
                for (int i_4 = 4; i_4 < 9; i_4 += 2) /* same iter space */
                {
                    arr_16 [4ULL] [i_1 - 1] = ((/* implicit */short) (+(((/* implicit */int) (short)29358))));
                    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)13141))));
                    arr_17 [i_0 - 1] = ((/* implicit */unsigned short) min(((((~(((/* implicit */int) (signed char)14)))) <= (((/* implicit */int) var_4)))), (((((((/* implicit */_Bool) 7156564710409474725LL)) ? (((/* implicit */unsigned long long int) 3789457719U)) : (18446744073709551605ULL))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)16073)))))))));
                }
                for (int i_5 = 4; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    arr_20 [7] [i_0 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), ((unsigned short)16073))))))))));
                    var_23 ^= ((/* implicit */unsigned char) ((3483292811U) < (3550231254U)));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 3456049460U)))) ? (((/* implicit */int) (unsigned short)8907)) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (signed char)126)))))))), ((+(((((/* implicit */_Bool) 18446744073709551598ULL)) ? (156037424U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))));
}
