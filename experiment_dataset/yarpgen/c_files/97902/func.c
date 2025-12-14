/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97902
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
    var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((int) (unsigned short)14746)) : ((+(((/* implicit */int) var_2)))))));
    var_21 = (((+(((-3502213039405872836LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))))))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20199))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (+(max((10160853263348017177ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
        var_23 -= ((/* implicit */unsigned char) (-(((min((3614220995U), (var_10))) << (((((-3136328906067667922LL) - (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (3136328906067667922LL)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_4 [i_1 - 1]) + (2147483647))) << (((((arr_4 [i_1 - 2]) + (274309728))) - (26)))))) ? (((unsigned int) arr_4 [i_1 - 2])) : (((/* implicit */unsigned int) ((var_18) + (arr_4 [i_1 - 2]))))));
        arr_5 [i_1] [i_1] = ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_3 [(_Bool)1])));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                var_25 = ((/* implicit */short) min((((unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))), (max((8285890810361534427ULL), (arr_0 [i_2])))));
                arr_11 [(unsigned char)4] [i_3] [i_3] = ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) var_11)) : (((int) min((((/* implicit */unsigned int) (_Bool)1)), (var_10)))));
            }
        } 
    } 
}
