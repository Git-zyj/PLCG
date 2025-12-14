/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93409
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
    var_11 ^= ((/* implicit */short) 1299842740U);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0 - 2])))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-97)), (14109094103850776929ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [(_Bool)1] [i_0])))))) : (((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) - (((/* implicit */int) min((arr_3 [i_0] [i_0] [(signed char)10]), (arr_3 [i_0] [i_1] [i_1])))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) arr_8 [(short)12] [i_1] [(unsigned short)0] [(unsigned short)6]);
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) arr_5 [i_2] [2LL] [2LL] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((arr_4 [i_0] [i_1] [i_3]) - (1254996724429751561LL)))))) : (arr_4 [i_3 - 1] [i_2] [i_1 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7400741144810032724LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((signed char) arr_1 [i_1])))))) - (((4337649969858774686ULL) >> (((((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) arr_5 [i_1] [9U] [i_2] [i_3])) : (((/* implicit */int) (short)1024)))) - (123)))))));
                        }
                    } 
                } 
                arr_11 [(short)3] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [9LL]);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1006)) - (((/* implicit */int) (unsigned char)255))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)33)), (4337649969858774662ULL))))));
        arr_16 [(unsigned short)4] |= ((/* implicit */short) 4659714821619423955LL);
    }
}
