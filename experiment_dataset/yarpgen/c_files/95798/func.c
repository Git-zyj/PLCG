/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95798
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((/* implicit */int) var_5)) : (min(((+(-1069710969))), (((/* implicit */int) var_5))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((unsigned int) arr_1 [i_0 - 1])) == (var_10)));
        arr_3 [i_0] = ((/* implicit */signed char) -8298855858893847752LL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (((arr_4 [i_0] [i_0]) >> (((var_10) - (2012685511U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65525)))))))));
                    arr_12 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2]) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))))) : ((+((+(var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 8298855858893847771LL))));
                                var_17 *= ((/* implicit */unsigned int) 8298855858893847752LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_4))));
}
