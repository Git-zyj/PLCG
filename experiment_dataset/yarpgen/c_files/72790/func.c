/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72790
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47188))) - (9912554640422197431ULL)))) || (((/* implicit */_Bool) var_17))));
    var_21 = ((/* implicit */signed char) ((((((8534189433287354186ULL) * (((/* implicit */unsigned long long int) 12288U)))) - (9912554640422197411ULL))) - (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) var_11))))) * (((7551710799870649113ULL) + (((/* implicit */unsigned long long int) -1))))))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_14))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_6 [i_1 - 1] [i_1 + 2] [i_2 - 2] [i_2 - 2]) && (((/* implicit */_Bool) -18))))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)64990)) > (((/* implicit */int) var_5)))))));
                                var_24 = ((/* implicit */short) ((-7147536660652326897LL) | (((/* implicit */long long int) -288925995))));
                                var_25 = ((/* implicit */long long int) ((((29) + (288925998))) & (((((arr_5 [i_4 - 2] [i_2] [i_0]) / (((/* implicit */int) arr_12 [i_4] [i_0] [i_2] [i_2] [i_2] [i_0] [i_0])))) % (((/* implicit */int) arr_12 [i_0] [i_4 - 2] [i_2] [i_3] [i_3] [i_2] [i_0]))))));
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)-5953))))) > (((var_15) & (((/* implicit */long long int) 18)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */_Bool) ((arr_4 [i_1 - 2] [i_1 - 2] [i_1 + 2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21985)) * (31744))))))));
                                var_28 = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [9ULL] [i_2] [9ULL] [i_5] [i_2]))) ^ (var_15)))) ^ (((((/* implicit */unsigned long long int) var_13)) | (12948323169907459670ULL))))) << (((((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 2] [i_2 - 1] [i_2])) >> (((((/* implicit */int) (unsigned char)118)) - (116)))))))) : (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [9ULL] [i_2] [9ULL] [i_5] [i_2]))) ^ (var_15)))) ^ (((((/* implicit */unsigned long long int) var_13)) | (12948323169907459670ULL))))) << (((((((((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 2] [i_2 - 1] [i_2])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)118)) - (116))))) - (536870901))))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)63807)) ^ (((/* implicit */int) (signed char)119))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
