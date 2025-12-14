/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71349
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [(unsigned char)18] [i_1] [i_3] &= ((/* implicit */long long int) (_Bool)1);
                                var_18 *= ((/* implicit */unsigned short) 1047971052014216507LL);
                                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(((unsigned int) ((-3453912826161820747LL) % (((/* implicit */long long int) var_8))))))))));
                    var_20 += ((/* implicit */long long int) ((((long long int) ((((/* implicit */int) (unsigned char)64)) / ((-2147483647 - 1))))) < (((/* implicit */long long int) (~((+(arr_5 [i_0] [i_1] [i_2] [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_11)))), (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) var_17)))))) << (((((((/* implicit */_Bool) 3341565499714763703LL)) ? (-1LL) : (((/* implicit */long long int) 2474337508U)))) + (56LL)))))));
                var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_6])) ? (((/* implicit */long long int) arr_9 [i_6] [8LL] [i_6] [8LL] [i_5])) : (137438951424LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) ^ (216341746)))) : (-4983573343912588473LL));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_12), (var_17)));
    var_24 = ((/* implicit */long long int) var_15);
    var_25 = ((/* implicit */unsigned char) var_13);
}
