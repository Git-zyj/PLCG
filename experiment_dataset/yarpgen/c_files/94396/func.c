/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94396
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
    var_16 |= 60153353U;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */long long int) max((0U), (((max((((/* implicit */unsigned int) (_Bool)1)), (4234813943U))) & (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) arr_12 [i_3 - 2] [i_3] [i_3 + 1] [i_2 + 2]);
                        var_18 = ((/* implicit */int) (unsigned short)25387);
                        arr_14 [i_2] [i_2] [(signed char)13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)28004)) ? (((/* implicit */int) (unsigned short)25369)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))), (((/* implicit */int) arr_8 [i_0]))))) ? (max((min((var_12), (((/* implicit */unsigned long long int) arr_6 [7ULL])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)28004))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((unsigned short) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28004)) & (1505030222)))))));
            /* LoopNest 2 */
            for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
                {
                    {
                        arr_20 [i_5] [i_5] [i_4] [i_5 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)75)) & (arr_2 [i_0] [i_0])));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (short)19485))))) ? (-2015599634) : (((/* implicit */int) ((signed char) 0U)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) max((428844638U), (((/* implicit */unsigned int) (short)19485))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4234813929U)))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)22))))) ? (max((3428133230U), (((/* implicit */unsigned int) (short)28021)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)19495))))))))));
                        var_21 = ((/* implicit */long long int) ((60153353U) & (max((max((var_10), (((/* implicit */unsigned int) arr_6 [(signed char)14])))), (((unsigned int) 16ULL))))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */unsigned int) (~(((var_9) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((long long int) 1505030222))) ? (((/* implicit */int) (short)-19505)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) (short)19482))));
}
