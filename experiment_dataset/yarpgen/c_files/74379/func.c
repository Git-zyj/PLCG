/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74379
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
    var_20 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)214)), (6579488888256802661ULL)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)10171)) << ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))) >= ((+(var_16)))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? ((~(var_7))) : (((unsigned int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0] [i_0])), ((+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_0]))))))));
                    var_24 = ((/* implicit */_Bool) ((signed char) var_8));
                }
            } 
        } 
        var_25 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)10171))))) == (((((/* implicit */unsigned long long int) 1696830339596000622LL)) * (arr_4 [i_0] [i_0])))));
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */long long int) ((6579488888256802683ULL) < (((/* implicit */unsigned long long int) 652900819U))));
        var_26 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_8 [(unsigned char)2])) : (((/* implicit */int) (short)(-32767 - 1))))))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(18350640993511334839ULL))))));
    }
    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        var_28 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-10171))))) <= (min((6579488888256802661ULL), (((/* implicit */unsigned long long int) (short)14336)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (arr_5 [i_4 - 1] [i_4] [i_4] [i_4]))))) : (min((((/* implicit */unsigned long long int) 540167721U)), (11867255185452748954ULL)))));
        var_29 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_6)), (var_0)));
    }
}
