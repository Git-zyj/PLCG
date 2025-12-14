/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93734
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (unsigned short)8520)) : (((/* implicit */int) (_Bool)1))));
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)20)))))));
                    var_15 = (unsigned short)65535;
                    arr_9 [i_1] [i_1] [i_2] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_2]))))), (arr_6 [i_1] [i_1] [i_2]));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) max(((_Bool)1), (arr_2 [i_0] [i_0])));
        var_16 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65535))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_0 [i_3]) * (((arr_4 [i_3] [3ULL]) >> (((-2950747032570153002LL) + (2950747032570153033LL))))))))));
        arr_13 [9ULL] [i_3] = ((/* implicit */unsigned char) (-(min((arr_1 [i_3] [i_3]), (arr_11 [i_3])))));
    }
    var_18 = ((/* implicit */long long int) 17585858831032618233ULL);
}
