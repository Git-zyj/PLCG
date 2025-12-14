/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68917
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
    var_11 ^= ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) min((max((3843931108841194565LL), (((/* implicit */long long int) (unsigned char)249)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_13 = (~(((/* implicit */int) ((short) arr_10 [i_0] [i_0] [i_0] [i_0]))));
                            arr_11 [i_0] [2U] [i_0] [i_0] [i_2] [7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)356), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]))))) ^ (min(((~(((/* implicit */int) (unsigned short)51120)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-154409987)))) : (((/* implicit */int) (short)13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (short)9228))))) >= (((/* implicit */int) (_Bool)1)))))) : (max((var_1), (((/* implicit */long long int) arr_4 [i_0])))))))));
                var_15 -= ((/* implicit */unsigned long long int) (-(min((arr_9 [i_0] [i_0] [i_0] [i_0] [4]), (arr_9 [i_0] [i_1] [i_0] [i_0] [15])))));
                var_16 &= ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)17213)), (arr_10 [i_0] [i_0] [11] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26518)) ^ (-494661568)))));
            }
        } 
    } 
}
