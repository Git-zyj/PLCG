/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97691
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) var_7)) >> (((((long long int) var_5)) - (61888LL)))));
    var_12 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) -12LL)) ? (((((/* implicit */_Bool) arr_3 [4LL] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3))) : (((/* implicit */unsigned int) (~(arr_4 [i_0] [i_1] [i_0])))))) : (((/* implicit */unsigned int) min((1493133200), (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) 1016286770U))));
                            arr_12 [i_2] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) (short)-28508)) : (((/* implicit */int) min((arr_3 [i_0] [i_1] [i_2]), (var_5))))))));
                            arr_13 [i_0] [i_0] [14LL] [i_0] &= ((/* implicit */int) max((((unsigned int) min((((/* implicit */unsigned int) arr_2 [i_2] [i_1])), (2262934996U)))), (((unsigned int) max((((/* implicit */int) (short)32764)), (1493133192))))));
                            arr_14 [i_0] [i_1] [i_2 + 3] [i_3 + 1] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) >= ((+(var_1))));
                            var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (-(-1493133176)))) ? (max((1493133212), (((-1493133188) ^ (1493133198))))) : ((((((+(-1493133207))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [6]))) ^ (10027894220304952731ULL))) - (10027894220304952729ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((_Bool) -1985127470)))));
    var_16 = ((/* implicit */unsigned short) ((int) var_4));
}
