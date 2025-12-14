/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87314
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
    var_15 = ((/* implicit */unsigned short) (+(var_8)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((((unsigned short) 172184942U)), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) >= (arr_1 [i_0 - 1]))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)231)))), ((-(7LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) < ((~(2081626183U))))))) : (((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 3406489253530531781LL)) ? (17074889623801565260ULL) : (((/* implicit */unsigned long long int) var_13))))));
                                arr_15 [i_4] [(_Bool)1] [(_Bool)1] [i_4] [i_1] |= max(((-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_12 [i_0] [i_1] [i_1] [(unsigned short)8] [i_2] [i_4] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4122782343U)) ? (arr_1 [i_0 + 1]) : (65535LL)))) > (((1080863910568919040ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18)))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((unsigned short) arr_2 [i_2 - 1] [i_0 - 1])), (((/* implicit */unsigned short) ((unsigned char) arr_4 [i_0 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
