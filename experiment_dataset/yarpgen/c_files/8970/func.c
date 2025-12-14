/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8970
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
    var_15 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 -= ((/* implicit */int) max(((unsigned short)16275), (((/* implicit */unsigned short) (_Bool)0))));
        var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((((/* implicit */_Bool) ((var_6) >> (((4362862139015168LL) - (4362862139015158LL)))))) ? (((/* implicit */int) min((var_8), ((signed char)125)))) : (max((((/* implicit */int) var_1)), (0)))))));
        var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)3840), (((/* implicit */unsigned short) (unsigned char)218))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) < (var_5))))) : (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)38528)), (10600577974150648241ULL)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)126)) ? (-2115213028918890515LL) : (((/* implicit */long long int) arr_1 [i_1])))) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1])))))) : (((((/* implicit */int) ((((/* implicit */int) (unsigned short)8721)) >= (-1780786893)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)130)))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -24LL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1])), ((unsigned short)57344)))) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 ^= ((/* implicit */int) (((+(((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))))) ^ (((/* implicit */unsigned int) ((arr_1 [i_3 + 1]) + (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-124)))))))));
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)255));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])))) - (((/* implicit */int) (unsigned short)16384))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_11))))), (max((((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    var_25 = ((/* implicit */int) 8998309872006337081ULL);
}
