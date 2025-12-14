/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8839
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(unsigned char)12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_2 [i_0] [i_1])))) + (((((/* implicit */_Bool) var_6)) ? (var_0) : (var_6)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))));
                var_10 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)110), ((unsigned char)164)))) || (((/* implicit */_Bool) ((signed char) (unsigned short)0))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1]))) | (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)164), ((unsigned char)92)))) ? (((/* implicit */int) (unsigned char)91)) : ((-(((/* implicit */int) (unsigned short)0)))))))));
                            arr_13 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0] [(signed char)15])), (((((var_4) >> (((var_3) - (4220696U))))) - (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) (unsigned short)65535)))))))));
                            arr_14 [i_0] [i_3] [i_2] [i_3] [10U] = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)65526))))));
                            var_12 = ((/* implicit */_Bool) 3575117778U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 8; i_4 += 4) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                var_14 += ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))))), ((unsigned short)8)));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5]))))))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) >> (0U)))))))) * (var_1)));
            }
        } 
    } 
}
