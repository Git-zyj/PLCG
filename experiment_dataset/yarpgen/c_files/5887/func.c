/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5887
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [(short)12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-5187170977027801044LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)32767))))) : (((/* implicit */int) max((var_6), (((/* implicit */short) var_2)))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 4; i_3 < 19; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [9U] [i_0] [(short)2] = ((/* implicit */unsigned int) max(((short)32767), (((/* implicit */short) (unsigned char)24))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (short)32764)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) : ((((~(-4720852040357306LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))))))))));
                            arr_15 [i_0] [(_Bool)1] = ((/* implicit */int) (+(7790643212331975597ULL)));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (1099511623680LL))), (((/* implicit */long long int) var_11))))));
                            arr_17 [i_0] [i_3] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned short)1)) : (-395484699))), (((((/* implicit */int) var_10)) | (((/* implicit */int) (short)180))))));
                        }
                    } 
                } 
            } 
            var_20 *= ((/* implicit */short) ((4021881048579992292ULL) < (14424863025129559324ULL)));
        }
    }
    var_21 = (short)11953;
    var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_11))))) ? (min((-7793851443137046465LL), (((/* implicit */long long int) (short)180)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (short)-18427)))))))) <= (max((647564360877434498ULL), (((/* implicit */unsigned long long int) (unsigned char)89)))));
}
