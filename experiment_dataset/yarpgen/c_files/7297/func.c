/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7297
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
    var_18 = ((/* implicit */signed char) ((((((((/* implicit */int) var_16)) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))) - (4294960093U))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
                    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */int) (((-(var_14))) <= (((/* implicit */int) var_7))))) > (((/* implicit */int) ((-1061022497) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)90)))))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_16)) >= (((/* implicit */int) (signed char)-125)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) (+(4197996226U)))) ? (((/* implicit */int) (signed char)125)) : ((+(((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) var_16))));
                    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (13508942407381385820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) (_Bool)1)) : ((+(min((-1263504494), (((/* implicit */int) var_17))))))));
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)125)) : (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)45)) > (((/* implicit */int) (unsigned char)175)))))) : (var_3)))) ? (((5601365873004641720ULL) + (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2)))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] |= ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) * (var_5)));
        var_23 = (~(max((((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))))));
        var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)229), (((/* implicit */unsigned char) (signed char)105)))))))) ? (((((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_6)) - (30110))))) << ((((+(1050485285))) - (1050485274))))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)211)), (var_11))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        var_25 = ((/* implicit */_Bool) (unsigned short)16479);
        arr_11 [i_3] = (~(max((((/* implicit */int) (unsigned char)89)), (((((/* implicit */int) (unsigned char)90)) * (((/* implicit */int) (short)-13)))))));
    }
}
