/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59705
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
    var_11 = ((/* implicit */_Bool) (signed char)58);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) (unsigned char)127);
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0 + 1])), (((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)184))))))) ? (max((((((/* implicit */int) arr_3 [i_0] [i_0])) | (((/* implicit */int) var_5)))), (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)184))))))) : ((-(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_10))) | (((((/* implicit */_Bool) max((11212930915729389643ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((short) var_5)))))));
        arr_6 [i_2] = ((/* implicit */short) (((+(((/* implicit */int) arr_3 [i_2] [i_2])))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) 2819809140U))) : (((var_2) ? (var_10) : (var_10)))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((int) (unsigned char)22)))) ? (max((min((((/* implicit */unsigned int) 451924292)), (arr_5 [i_2]))), (((/* implicit */unsigned int) ((-451924293) - (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) var_1)))) - (((/* implicit */int) ((unsigned short) (signed char)-113))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_9 [i_3] = ((/* implicit */unsigned char) var_4);
        var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))) == (1475158155U)));
        var_17 = ((/* implicit */long long int) 20);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */short) ((((/* implicit */int) var_9)) | (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_4] [i_4]))))));
        arr_12 [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) << (((-5353309754695898020LL) + (5353309754695898031LL))))) == (((/* implicit */int) ((((/* implicit */_Bool) -1662048793)) || (((/* implicit */_Bool) (signed char)-8)))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                {
                    var_19 *= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_4]))) == (4294967295U))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) | (arr_5 [i_6])))) : ((-(arr_14 [i_4] [i_4] [i_4])))));
                    var_20 = ((/* implicit */signed char) ((long long int) ((var_2) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) arr_7 [i_5])))));
                    var_21 = ((/* implicit */signed char) ((_Bool) (unsigned short)65535));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_4])))))));
    }
}
