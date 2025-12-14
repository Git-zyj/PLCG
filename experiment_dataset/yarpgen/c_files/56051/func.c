/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56051
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) max((17496658258268606947ULL), (((/* implicit */unsigned long long int) 1202389464U))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_13 [i_3] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_6 [4U] [i_1 - 3] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 3] [i_0])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_1 - 3] [i_0])))) : (max((((/* implicit */int) (unsigned short)47937)), (((((/* implicit */_Bool) (unsigned short)681)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (signed char)127)))))));
                            var_20 = (+(((/* implicit */int) (_Bool)1)));
                            arr_14 [i_0] [i_1] [i_2] [13] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) -929243046)) : (var_14)))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */signed char) (unsigned short)21310);
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [12LL] [i_0] [12LL] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)30896)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) (unsigned short)0)))))), ((~(var_10)))));
    var_24 = ((/* implicit */signed char) (((+((~(var_18))))) + (((/* implicit */unsigned long long int) var_1))));
}
