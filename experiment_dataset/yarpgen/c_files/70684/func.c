/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70684
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
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_10)))), ((-(((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_8))))), (max((((/* implicit */short) (unsigned char)15)), ((short)-26))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] [10U] = max((((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))), (min((((/* implicit */long long int) (signed char)(-127 - 1))), (((-4040908783285738643LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)23))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [(short)16])), ((~(((/* implicit */int) (_Bool)1))))))) && (arr_7 [i_0] [i_0])));
                        }
                    } 
                } 
                arr_13 [i_0] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * ((+((+(arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
}
