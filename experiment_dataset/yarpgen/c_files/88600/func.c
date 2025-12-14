/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88600
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-12))))) : (((unsigned long long int) -8198464414079836784LL))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (15677330294824748062ULL)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)12)) > (((/* implicit */int) var_6))))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (16480748166092261251ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1] [i_2 + 1]))))) == (((/* implicit */unsigned long long int) var_2))))) : ((+(((/* implicit */int) ((((/* implicit */int) (signed char)15)) >= (((/* implicit */int) (signed char)19)))))))));
                            var_16 |= ((/* implicit */int) ((((/* implicit */long long int) ((int) arr_0 [i_2 + 1]))) & (max((((((/* implicit */_Bool) var_12)) ? (2105450174201515732LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned char)12] [i_0] [i_0])) + (((/* implicit */int) (signed char)34)))))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)31028)))))));
                            arr_10 [(short)1] [2U] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-48);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)24)) && (((/* implicit */_Bool) 0ULL))))) < (((/* implicit */int) (unsigned char)255)))));
            }
        } 
    } 
    var_19 *= ((((/* implicit */_Bool) ((((((/* implicit */int) ((short) var_4))) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)11)) ? (1447335487296253871LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) - (1447335487296253871LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-8074), (((/* implicit */short) var_11)))))) : (((unsigned long long int) (short)8097)));
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)52609);
    var_21 = ((/* implicit */unsigned char) var_6);
    var_22 = ((/* implicit */unsigned char) var_13);
}
