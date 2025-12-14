/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5639
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
    var_16 |= ((((/* implicit */_Bool) max((max((var_10), (((/* implicit */unsigned long long int) var_15)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_8)) : (4299173895645794405ULL)))))) ? (((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)23243))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((5ULL), (((/* implicit */unsigned long long int) 4294967285U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (var_9))))) : (((unsigned int) (_Bool)0))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((min((min((((/* implicit */long long int) var_3)), (3316069264487882935LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))), (min((max((var_6), (((/* implicit */long long int) arr_1 [i_2])))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)100)), ((unsigned short)0)))))))))));
                            var_18 |= ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_4)))), (((unsigned long long int) arr_1 [i_1 + 3])))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [5U] [i_1 + 2] [i_1])) ? (var_10) : (arr_3 [i_1] [i_0])))));
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32256)), (var_7)))) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */_Bool) 13686020674095974220ULL)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) arr_8 [12ULL] [i_1] [i_1] [i_0]))))))), (min((((unsigned long long int) (signed char)125)), (((((/* implicit */_Bool) (signed char)-98)) ? (6373211782482353319ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_0] [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_4] [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), (arr_9 [(unsigned short)15] [i_1 - 3] [i_4] [i_5] [i_5])))), (((unsigned short) 2037875587U)))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((min((((arr_15 [i_5] [i_0] [i_4] [i_0] [i_0] [i_0]) ? (arr_17 [i_4] [i_1] [i_4] [i_5]) : (var_10))), (((unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_4] [i_1])))), (max((min((0ULL), (((/* implicit */unsigned long long int) (signed char)-14)))), (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0] [i_0] [i_0])))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (max((((/* implicit */unsigned long long int) var_13)), (13686020674095974220ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (-6291188159020667526LL)))))), (max((((/* implicit */unsigned long long int) ((short) var_13))), (max((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_5] [i_4]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
