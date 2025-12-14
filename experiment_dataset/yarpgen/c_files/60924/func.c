/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60924
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_14 = ((long long int) (_Bool)0);
                arr_5 [i_0] = ((/* implicit */unsigned int) min((-1720398846), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (arr_0 [i_0])))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (2046) : (((/* implicit */int) (unsigned char)135))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) arr_3 [i_1]))))));
                var_15 = ((/* implicit */unsigned int) (signed char)127);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */int) min((((((/* implicit */_Bool) ((long long int) arr_10 [(unsigned char)2] [i_3]))) ? (((/* implicit */long long int) ((unsigned int) arr_9 [i_3] [i_2] [i_1] [i_0]))) : (-4425181479052627598LL))), (((/* implicit */long long int) min((arr_9 [i_1] [i_1] [i_1] [i_1 + 3]), (((/* implicit */unsigned int) arr_4 [i_3] [i_1 - 1])))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) (unsigned short)36118))))) ? (1512549101U) : ((-(2740789709U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (short)21073)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2])) : (((long long int) (unsigned char)133)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0]))))));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */int) max((((unsigned short) var_4)), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3])) ? (-2723753643425522608LL) : (arr_3 [i_0])))))));
                            var_18 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 + 3])) ? (((/* implicit */int) arr_8 [i_1 + 2])) : (((/* implicit */int) arr_8 [i_1 - 1])))));
                            arr_14 [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1 - 1])))) : (arr_2 [i_0] [i_3])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 |= var_0;
    var_20 = ((/* implicit */unsigned int) -1311764470801973126LL);
}
