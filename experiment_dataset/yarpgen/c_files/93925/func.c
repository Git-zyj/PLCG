/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93925
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
    var_18 += ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (((~(((((((/* implicit */int) arr_0 [(_Bool)1])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0] [i_1])) - (23254))))))) >= (((/* implicit */int) (_Bool)1))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned short) ((signed char) (short)4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1] [1ULL])))))))))))));
                            var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (!(var_8)));
                            arr_18 [i_4] [(unsigned short)0] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) -3451763491074988812LL);
                        }
                    } 
                } 
                arr_19 [1ULL] [i_1] [i_1] = ((/* implicit */unsigned short) ((min((-3451763491074988810LL), (((/* implicit */long long int) arr_0 [i_0])))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(((/* implicit */int) arr_2 [i_0] [(unsigned short)2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23151))))))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned int) var_3);
}
