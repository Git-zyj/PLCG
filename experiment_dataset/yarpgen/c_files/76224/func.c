/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76224
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
    var_12 = ((/* implicit */short) (-(max((var_11), (((/* implicit */long long int) max(((unsigned short)65225), ((unsigned short)0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))), (var_7))) | ((~(((/* implicit */int) var_2))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_5)) != ((-(((/* implicit */int) (signed char)-120))))))) > (((/* implicit */int) (unsigned short)310))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_0] |= var_6;
                            arr_15 [i_3] [i_1] [i_2] [i_1] [i_1] [6LL] = ((/* implicit */long long int) ((min((((var_6) >> (((/* implicit */int) var_2)))), (((/* implicit */unsigned int) ((short) var_3))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_11 [i_1] [(signed char)13]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [(unsigned short)12]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-79)) || (((/* implicit */_Bool) 597929504374343560ULL))))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((_Bool) var_1)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_9);
    var_16 = ((/* implicit */unsigned char) var_1);
}
