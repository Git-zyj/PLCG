/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97649
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
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_11)) ^ (max((var_10), (1039038493461386328ULL))))) & (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)12089)))), ((~(-998282489))))))));
    var_16 = var_14;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_2] [8ULL]))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                            {
                                var_18 *= ((/* implicit */short) min(((-2147483647 - 1)), (2147483647)));
                                var_19 *= ((/* implicit */unsigned long long int) max((((((((/* implicit */long long int) 2147483647)) / (266295892081159099LL))) * (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_3 [i_3]))))))), (((/* implicit */long long int) ((short) min((((/* implicit */unsigned short) arr_3 [i_3])), (arr_2 [i_0] [i_0])))))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [(unsigned char)5] = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) ((unsigned short) -266295892081159089LL))))));
                            }
                            var_20 = ((/* implicit */unsigned char) (-(((arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_2] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))))));
                            var_21 = max(((-(((/* implicit */int) ((unsigned char) var_11))))), (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1] [i_1] [i_1])) ? (arr_5 [i_1 - 2] [i_1 + 1] [i_1] [i_1]) : (arr_5 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (3457262385U)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_1])) ? (var_14) : (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(signed char)0] [i_0])))))))) ? (((((((/* implicit */_Bool) -2147483645)) && (((/* implicit */_Bool) 0ULL)))) ? (((((/* implicit */_Bool) -2147483645)) ? (266295892081159099LL) : (((/* implicit */long long int) 837704910U)))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)36)), (2147483647)))))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)72)))) + (((/* implicit */int) arr_3 [i_1 - 1])))))));
            }
        } 
    } 
}
