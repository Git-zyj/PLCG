/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65286
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
    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) var_8));
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_1))) < (((((/* implicit */_Bool) (unsigned char)60)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))), (((((/* implicit */int) ((unsigned char) (unsigned char)73))) - (((/* implicit */int) ((short) (unsigned char)161)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_3 [i_1] [(unsigned short)9] [i_0]);
                arr_5 [i_1] = ((/* implicit */short) max((((((unsigned int) var_7)) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -1269527259)))))), (arr_3 [i_0] [i_1] [i_1])));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) (-2147483647 - 1))) - (-9223372036854775793LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_4 [i_2] [i_2]) : (((/* implicit */long long int) (-2147483647 - 1)))))))) : (9223372036854775803LL)));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (unsigned char)60))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_3))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned long long int) arr_8 [(unsigned char)9])) : (var_13))), (((/* implicit */unsigned long long int) var_10))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) % (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_7 [22ULL] [i_1] [i_3]) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) var_0)))))));
                }
                var_22 = ((/* implicit */signed char) ((_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (var_10))), (((/* implicit */long long int) (signed char)-53)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((short) var_3));
}
