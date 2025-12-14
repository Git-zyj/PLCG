/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71185
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
    var_19 = ((_Bool) -3488306634213732053LL);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((1411374518016249767LL) < (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_18))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)47535)) : (((/* implicit */int) (_Bool)1))))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [(signed char)12] [(unsigned short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (7101934168908892762ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-88)))))));
                    var_21 -= ((/* implicit */long long int) 0U);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)3), ((unsigned short)65533))))));
                        var_23 = ((/* implicit */short) var_18);
                    }
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) ((max((7816524978316234518LL), (7816524978316234491LL))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)84)))));
                        var_25 = var_6;
                    }
                    var_26 -= ((/* implicit */unsigned short) (_Bool)0);
                }
            } 
        } 
    } 
}
