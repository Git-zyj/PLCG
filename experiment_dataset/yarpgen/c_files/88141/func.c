/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88141
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9710014626010059742ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) -1177351316)) : (18LL))) | ((((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */long long int) ((int) -1LL))) : ((((_Bool)1) ? (var_8) : (6387957053059737543LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))))))));
                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [i_0]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [5ULL] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 3084442275U)) ? (((/* implicit */int) (short)21365)) : (((/* implicit */int) (_Bool)1)));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) - (47844))))) != (((((((/* implicit */int) arr_8 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_4] [i_2] [i_0])) + (561)))))))) <= (((/* implicit */int) arr_5 [i_0] [i_3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 1210525031U)))))) : (var_1))) > (((/* implicit */unsigned long long int) var_8))));
}
