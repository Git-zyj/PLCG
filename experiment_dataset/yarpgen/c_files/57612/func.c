/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57612
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (-(((long long int) (short)1))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((arr_5 [i_0] [i_3]) == (((((/* implicit */_Bool) -7656622940491761925LL)) ? (-7656622940491761925LL) : (-4839595951969981884LL)))));
                        var_21 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                        var_22 = ((/* implicit */unsigned short) max((min((max((7656622940491761924LL), (var_15))), (((/* implicit */long long int) arr_3 [i_3])))), (((/* implicit */long long int) ((unsigned char) min((var_9), (-3LL)))))));
                        arr_11 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_2])), (var_3))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3]))) & (4575657221408423936ULL)))));
                        var_23 = ((/* implicit */unsigned long long int) min((1978021131U), (((/* implicit */unsigned int) (signed char)-43))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((var_2) + (1777105350245427419LL)))))) / (((((/* implicit */_Bool) 3584LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) : (4575657221408423936ULL)))));
        var_25 = ((/* implicit */int) ((((long long int) 609117018U)) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_4] [i_4]))))) <= (var_15)))))));
        arr_15 [(short)14] = ((/* implicit */int) ((_Bool) ((long long int) arr_1 [i_4])));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        var_26 *= ((((max((609117018U), (((/* implicit */unsigned int) (short)-12)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)12)) != (1183874358))))))) ? (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) arr_2 [i_5] [i_5] [i_5]))))) : (((unsigned long long int) (unsigned char)183)));
        arr_19 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) > (((((/* implicit */_Bool) ((signed char) 3685850278U))) ? (arr_14 [i_5]) : (((/* implicit */int) ((1502491661U) <= (arr_16 [i_5] [i_5]))))))));
        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
    }
    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(609117017U))))));
    var_29 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (signed char)-85))))) > (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) - (var_14)))))));
}
