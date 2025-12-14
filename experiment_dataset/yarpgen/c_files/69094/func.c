/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69094
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = (signed char)-113;
                        var_19 = ((/* implicit */long long int) (_Bool)1);
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (signed char)118))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */short) -3443040833058059045LL);
                        var_22 ^= ((/* implicit */unsigned char) (signed char)123);
                    }
                    var_23 = ((/* implicit */_Bool) 3888423087U);
                    var_24 = ((/* implicit */short) (signed char)113);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            {
                arr_18 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (signed char)-112);
                var_25 = ((/* implicit */unsigned char) (signed char)118);
            }
        } 
    } 
}
