/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85970
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
    var_11 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned int) ((unsigned char) min((arr_2 [i_1]), ((_Bool)1))));
            var_13 = ((/* implicit */short) (~(min((((/* implicit */int) min((var_0), (((/* implicit */short) (unsigned char)48))))), ((-(((/* implicit */int) (unsigned char)190))))))));
            var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (_Bool)1))))) - (((unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)48)))))));
            var_15 = var_3;
            var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned char)126), (((/* implicit */unsigned char) arr_2 [i_0]))))), ((-(var_2)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), (min((((var_8) & (((/* implicit */unsigned long long int) -278678525)))), (((/* implicit */unsigned long long int) (_Bool)1))))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_0 [12]))));
        }
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_3)), ((~(arr_0 [10U]))))), (((/* implicit */unsigned long long int) min((((unsigned char) var_2)), ((unsigned char)129)))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (int i_5 = 4; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) min((var_10), (((((((/* implicit */int) (unsigned char)106)) >> (((942474451) - (942474436))))) - (((/* implicit */int) (_Bool)0))))));
                        var_21 = ((/* implicit */short) var_9);
                        var_22 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_1))) - ((+(arr_9 [i_0] [2LL])))))));
                        arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_5] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_13 [i_0] [i_3 - 3] [i_0] [i_5])), (var_7)))) - (min((((/* implicit */unsigned long long int) var_9)), (3385495758074407705ULL))))) & (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_1)))))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) var_2);
}
