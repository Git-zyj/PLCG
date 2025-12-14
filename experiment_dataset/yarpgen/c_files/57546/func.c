/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57546
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
    var_11 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) (short)23420)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [(unsigned short)3] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_0))))) < (((unsigned long long int) (short)-23420))))) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (min((arr_11 [i_0] [i_1] [i_4]), (((/* implicit */unsigned int) var_10))))))));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [(unsigned short)4] = ((/* implicit */int) ((max((3732051327U), (((/* implicit */unsigned int) (signed char)-18)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3732051327U)) ? (562915968U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))))))));
                                var_12 = ((/* implicit */unsigned char) (signed char)-95);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] [i_1] = arr_6 [i_0] [i_1] [i_1];
                var_13 = ((/* implicit */signed char) (+(((((/* implicit */long long int) max((var_3), (((/* implicit */int) var_1))))) & (((long long int) var_9))))));
            }
        } 
    } 
    var_14 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (signed char)-62)))) < (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) < (var_8)))) : (((/* implicit */int) var_5)))));
}
