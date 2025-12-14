/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92322
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */_Bool) min(((((-(((/* implicit */int) (unsigned short)42256)))) * (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */int) var_10)) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [(unsigned short)20] [(unsigned short)20])))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) <= (arr_6 [i_0] [i_1]))) ? (min((((/* implicit */int) ((arr_0 [i_1]) > (((/* implicit */int) (short)-25012))))), ((~(((/* implicit */int) (unsigned char)94)))))) : (((/* implicit */int) arr_4 [i_1]))));
                var_19 *= ((/* implicit */unsigned char) var_17);
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-25012)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25012)))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (arr_6 [(_Bool)1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0]))))) : (((((/* implicit */_Bool) (short)24989)) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_0)) > (arr_2 [i_0])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 4) 
    {
        for (unsigned short i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10528)) % (((/* implicit */int) arr_13 [i_3] [i_3 + 2]))))) ? ((+(((/* implicit */int) arr_13 [(unsigned short)7] [i_3 + 2])))) : (((/* implicit */int) max((arr_13 [(unsigned short)7] [i_3 + 2]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    var_23 = ((/* implicit */_Bool) arr_2 [i_2]);
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_15)))) || (((/* implicit */_Bool) var_16))))), (max((max((var_15), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) var_4))))));
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? ((-(var_13))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (var_1))))))))))));
}
