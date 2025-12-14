/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91002
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
    var_13 = var_12;
    var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) var_2)) | (((unsigned int) (short)32744)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned char) var_4)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (signed char)56))))))) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (arr_2 [i_1])));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) | (arr_1 [i_2])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_11))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((short) (signed char)-47)), (((/* implicit */short) ((((/* implicit */unsigned long long int) 980513051U)) == (arr_8 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1])) ? (arr_8 [i_1 + 1] [i_1 - 1]) : (arr_8 [i_1 - 1] [i_1 - 1]))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((arr_16 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) && (((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1])))) ? (min((((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1])), (var_4))) : (((arr_15 [i_4] [i_4]) / (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1]))))));
                            arr_17 [i_4] [0ULL] [i_4] [i_4] = ((/* implicit */unsigned short) ((var_2) >> ((((~(var_6))) - (2131811999U)))));
                            var_18 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (unsigned char)75)) ? (arr_8 [i_1] [i_1]) : (18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
                            arr_18 [i_0] [i_4] [i_4] [i_5] = ((/* implicit */signed char) ((((unsigned long long int) arr_3 [i_1 - 1])) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
