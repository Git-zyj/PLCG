/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94669
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_20 = (+(((((/* implicit */_Bool) (unsigned short)21887)) ? (((/* implicit */unsigned int) var_10)) : (var_18))));
                    arr_10 [i_0] = ((/* implicit */short) ((arr_1 [i_0]) * (2351122233U)));
                }
                arr_11 [7U] [(short)10] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65523)) & (((/* implicit */int) (unsigned short)65517))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_8 [(short)6] [i_0] [i_1] [i_1]);
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned short)7415))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) var_15))) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_19)) ? (4057864718591073268LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (short)3840);
}
