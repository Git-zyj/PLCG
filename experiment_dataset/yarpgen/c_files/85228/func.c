/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85228
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) 31);
        var_20 -= ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_18));
    }
    /* LoopSeq 1 */
    for (int i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 23; i_2 += 1) 
        {
            for (short i_3 = 3; i_3 < 23; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned short) var_13);
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)11816), (((/* implicit */unsigned short) (signed char)72))))) || (((/* implicit */_Bool) (+(var_4))))))), (max((-2002674446), (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) min((var_23), ((~(((/* implicit */int) (_Bool)1))))));
    }
}
