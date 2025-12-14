/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5646
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
    var_13 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */int) var_0)) | (((/* implicit */int) (short)-12935)))))) >> (((max((((/* implicit */unsigned int) var_7)), (var_1))) - (4294967237U)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12913))) + (9061139425579200435ULL)))) ? (max((((/* implicit */unsigned long long int) var_1)), (9061139425579200463ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9385604648130351170ULL)))))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)128)), (var_4))))))))))));
                var_15 -= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (short)12947))))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)25818)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_2 [i_0 + 2] [i_0 + 2] [i_2]))))) : (min((var_12), (((/* implicit */unsigned long long int) var_9)))));
                            var_17 ^= ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3])) >= (min((((/* implicit */int) (unsigned char)86)), (2129975900)))))), ((unsigned short)25410)));
                            var_18 -= ((/* implicit */unsigned long long int) ((unsigned char) var_7));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
}
