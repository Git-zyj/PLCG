/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62941
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */signed char) max((min((max((4651572030993256880LL), (arr_2 [i_0] [(unsigned char)11] [(signed char)0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [8LL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((((_Bool)0) ? (arr_2 [i_0] [i_1 + 3] [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)14]))))) : (max((arr_2 [(signed char)5] [i_1] [i_1 + 2]), (3950601123666398073LL)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_13 |= arr_4 [10LL];
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0])) << (((1338657185) - (1338657183))))), (((((/* implicit */_Bool) 9189025876606695812LL)) ? (((/* implicit */int) arr_3 [16LL])) : (((/* implicit */int) arr_4 [(short)14]))))))) ? (((/* implicit */int) ((short) max((arr_0 [i_1 - 1]), ((_Bool)1))))) : ((~(((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_1 - 1] [i_2] [i_3]))))))))));
                            var_15 -= ((/* implicit */short) ((min((((arr_2 [i_1] [i_2] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)14]))))), (((/* implicit */long long int) min((arr_7 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))))) == (((/* implicit */long long int) (-(arr_8 [i_3] [i_3] [i_3] [i_3] [7LL]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */_Bool) min((731221189002781605LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2] [i_5])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)18)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4]))))))))));
                            var_17 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)40)), ((short)-5003)))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (short)-5)))))), (((/* implicit */int) min((arr_5 [i_1 - 3] [i_5] [i_5]), (arr_5 [i_1 + 3] [i_4] [i_5]))))));
                            var_18 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) min(((short)-28242), ((short)4981)))) ? (((((/* implicit */_Bool) arr_4 [i_4])) ? (3950601123666398073LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [2] [i_1 + 1] [i_4] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 2] [i_5] [i_4] [18]))))));
                            var_19 = ((/* implicit */int) max((var_19), ((((+(((/* implicit */int) arr_3 [i_4])))) * (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_4])), (arr_7 [i_1 + 3] [i_4]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((var_8) ? (-1338657186) : (((/* implicit */int) var_5))))) && (min(((_Bool)1), ((_Bool)1))))), (var_5)));
    var_21 = ((/* implicit */long long int) min((var_21), (var_1)));
}
