/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93583
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
    var_15 = ((/* implicit */int) min((((/* implicit */long long int) var_13)), (var_9)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            var_16 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((unsigned short)32817), (((/* implicit */unsigned short) var_3))))), (max((arr_1 [i_1 + 3] [i_1 + 2]), (((/* implicit */long long int) -1520800171))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_0] [i_1 + 3] [i_2] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) 3452690774862030144LL)), (var_6))), (min((var_11), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))));
                arr_8 [i_2 - 1] [i_1] [i_0] = ((/* implicit */signed char) min((max((max((((/* implicit */unsigned long long int) var_3)), (var_11))), (((/* implicit */unsigned long long int) min((-3452690774862030129LL), (((/* implicit */long long int) arr_2 [i_0]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65535)), (min((arr_4 [13LL] [i_1] [(signed char)1]), (((/* implicit */int) var_3)))))))));
            }
            arr_9 [i_0] = ((/* implicit */unsigned int) min((min((3452690774862030144LL), (-3452690774862030145LL))), (min((((/* implicit */long long int) arr_4 [i_0] [0ULL] [i_0])), ((-9223372036854775807LL - 1LL))))));
            var_17 = ((/* implicit */_Bool) max((min((arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 3] [i_1 + 2]), (((/* implicit */int) var_0)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)161))))));
        }
        var_18 = ((/* implicit */long long int) max((var_18), (max((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)2958)), (1296312163)))), (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_5))))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 12; i_3 += 2) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 3452690774862030144LL))));
        var_20 = -2147483644;
        var_21 = ((/* implicit */_Bool) 3452690774862030144LL);
        arr_13 [i_3 + 2] &= ((/* implicit */int) -3452690774862030155LL);
    }
    var_22 = ((/* implicit */short) var_13);
}
