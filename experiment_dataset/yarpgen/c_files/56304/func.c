/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56304
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (signed char)18)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) <= (((unsigned int) arr_0 [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) / (((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) -8731078204097060903LL))))))));
                        var_18 -= ((/* implicit */short) (!(((((((/* implicit */unsigned long long int) 8731078204097060925LL)) % (var_14))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_3] [i_2] [i_0]))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((signed char) min((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (short)11940)))))) >= (((((/* implicit */int) min((((/* implicit */short) var_15)), ((short)0)))) | (((2113929216) + (((/* implicit */int) arr_4 [i_0]))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) var_15))) / (-8731078204097060925LL)))));
            var_20 = ((/* implicit */int) min((var_20), ((~(((((/* implicit */int) (unsigned short)39218)) | (((/* implicit */int) (signed char)-97))))))));
        }
        var_21 = (~(((((/* implicit */int) var_13)) << (((-8731078204097060903LL) + (8731078204097060918LL))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */short) (~(((/* implicit */int) (short)7475))));
        var_22 = (~(arr_18 [i_6]));
    }
    var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))))) : ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((((/* implicit */_Bool) 21)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-2718981933082455585LL))) + (70LL))) - (24LL))))));
}
