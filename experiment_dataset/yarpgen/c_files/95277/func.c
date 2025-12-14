/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95277
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (signed char)-90)))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 11052395287465931440ULL)))))) > (((max((var_3), (10304685167904110674ULL))) >> (((((((/* implicit */_Bool) 8142058905805440941ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_4))) - (4294967173U)))))));
                                var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4]))) & (10304685167904110687ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2] [(signed char)22] [i_4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_2]))) <= (3997556710U))))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_9 [i_0] [i_0 + 2]))) == (((/* implicit */int) (unsigned short)5856))));
                            }
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (8142058905805440931ULL)));
                            var_20 = ((/* implicit */signed char) (-(var_11)));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_5 [(unsigned short)6] [i_1] [i_1] [i_0]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned char) var_11);
    var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1)));
}
