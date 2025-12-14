/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89391
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
    var_12 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)53694)) ? (((/* implicit */int) (unsigned short)11842)) : (((/* implicit */int) (short)-3154))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) max((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11842)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (short)-32755))))) ^ (((((/* implicit */_Bool) arr_0 [(short)0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5019134901617279735LL))))), (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))))));
                        var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0 - 3] [i_0] [i_2])) | (((/* implicit */int) (unsigned short)11843))))) <= (((3272582999U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))))));
                    }
                } 
            } 
        } 
        arr_8 [i_0] [1LL] = ((((((((/* implicit */_Bool) (short)19451)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53684))))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-32755))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)11842)) != (((/* implicit */int) (_Bool)1))))))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32754))))), (6386180983946579537LL)))) ? (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (short)19474))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4])))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)11842)) ? (((/* implicit */int) arr_9 [i_4 - 1])) : (((/* implicit */int) var_10))))))) > (((unsigned long long int) arr_9 [i_4 - 1]))));
    }
    var_17 = ((/* implicit */long long int) (_Bool)1);
}
