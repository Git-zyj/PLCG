/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73656
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned char) arr_4 [i_1]);
                var_18 = ((/* implicit */unsigned char) ((((((2199101564U) << (((4134517655U) - (4134517633U))))) != (((arr_5 [i_0] [i_0]) - (arr_1 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (((2095865730U) + (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_19 -= ((/* implicit */signed char) (-((+((-(((/* implicit */int) (short)0))))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((-(arr_9 [i_0] [i_0] [i_2] [i_3]))) != ((+(arr_9 [i_1] [i_2] [i_1] [i_0]))))))));
                            arr_10 [i_0] [i_1] [(signed char)15] [i_0] = (+(((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (160449640U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))))) == (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2199101564U)))))));
                            var_21 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_3]))))) & (min((((/* implicit */unsigned long long int) (unsigned char)224)), (var_5)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24757)) == (((/* implicit */int) (short)29503))));
    var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) (((-(2842703597470034744ULL))) <= (((/* implicit */unsigned long long int) ((int) var_1)))))), (((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-12))))));
}
