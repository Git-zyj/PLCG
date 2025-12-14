/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71528
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
    var_19 &= var_17;
    var_20 = ((/* implicit */unsigned short) ((_Bool) (short)-32762));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)235)) & (((/* implicit */int) (unsigned char)235))))) ? (-6235419238386678126LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)11597)))))))) ? (min((((((/* implicit */_Bool) (unsigned short)65533)) ? (var_0) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_7 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)22), (((/* implicit */unsigned char) (signed char)-39))))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) min((var_9), (((/* implicit */short) arr_5 [i_0]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)0))));
                        var_21 &= ((/* implicit */unsigned int) min(((unsigned short)40614), ((unsigned short)0)));
                        var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) (unsigned short)1023))))));
                        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(unsigned char)10] [i_1])) ? (((/* implicit */int) (unsigned short)24897)) : ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3])))))) : (((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_3])) <= (((/* implicit */int) (short)4404)))))))));
                    }
                }
            } 
        } 
    } 
}
