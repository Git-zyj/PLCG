/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55468
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)56)) >> (((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) (short)11301)))) : (((((/* implicit */_Bool) (short)11303)) ? (((/* implicit */int) (short)-11302)) : (((/* implicit */int) (short)-2303)))))), (((/* implicit */int) (unsigned char)254)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) arr_0 [i_0])))))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_4))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_1] [i_0]), (arr_3 [i_0] [i_1])))) ? (((var_0) ? (((/* implicit */int) (unsigned short)31677)) : (((/* implicit */int) (short)-11301)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [15] [i_2] [i_3])) : (((/* implicit */int) (short)11301))))))) : (arr_3 [i_2] [i_3 + 1]))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2303)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (arr_2 [i_1] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10))) : (((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_1] [(_Bool)1]))) : (arr_4 [i_0] [i_0] [i_0] [(unsigned char)6])))))) >= (min((((/* implicit */unsigned long long int) ((2294083631387530300ULL) != (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1] [i_1]))))), (min((4143591897941977908ULL), (((/* implicit */unsigned long long int) (unsigned char)4))))))));
                var_24 = ((/* implicit */long long int) var_3);
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_12);
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) | (((/* implicit */int) (unsigned short)22844))))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-2303), (((/* implicit */short) (unsigned char)18)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
}
