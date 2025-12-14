/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67983
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                var_19 = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */int) var_7)), ((+(1)))))), (min((((/* implicit */long long int) ((_Bool) var_1))), (((long long int) (_Bool)1))))));
                var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_21 |= ((/* implicit */long long int) var_1);
                            arr_12 [3U] [i_0] [6U] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 1; i_4 < 21; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [16LL] [(unsigned short)18] [6U] = ((/* implicit */int) (-(((((/* implicit */long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_6))))) + ((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    var_22 *= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    arr_21 [i_4] [i_4] = ((/* implicit */int) arr_16 [(_Bool)1] [21LL] [(_Bool)1]);
                    var_23 = ((/* implicit */long long int) var_8);
                    arr_22 [(short)10] [i_5] [i_6] = var_8;
                }
            } 
        } 
    } 
}
