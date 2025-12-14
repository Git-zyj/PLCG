/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69800
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
    var_14 = ((/* implicit */unsigned char) var_11);
    var_15 = ((/* implicit */unsigned short) (~((~((-(((/* implicit */int) (unsigned char)117))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        arr_13 [(unsigned short)12] [(unsigned short)12] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) max(((signed char)120), (((/* implicit */signed char) (_Bool)1))))), (9223372036854775807LL)));
                        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)177))));
                    }
                    arr_14 [i_1] [(short)1] = 16128LL;
                }
            } 
        } 
    } 
}
