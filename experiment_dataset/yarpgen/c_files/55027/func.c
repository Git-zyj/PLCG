/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55027
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
    var_10 = ((/* implicit */unsigned int) 9223372036854775807LL);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-62)) < (((/* implicit */int) var_3)))))) : (var_0)));
        var_11 = ((((/* implicit */_Bool) (~(min((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), ((+(((/* implicit */int) var_6))))))) : (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_1 [i_0 + 1]))));
    }
    var_12 = ((/* implicit */unsigned long long int) (+(max(((~(((/* implicit */int) (signed char)0)))), ((~(((/* implicit */int) var_8))))))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)60173)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            {
                var_14 += ((/* implicit */unsigned short) arr_5 [i_1]);
                arr_10 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((1483932742) - (((/* implicit */int) var_8))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_2 [i_1]))))), (max((arr_7 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1]))))))));
                arr_11 [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_9 [3ULL] [i_1] [i_2])) : (1483932730)))));
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-62)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 421368916U))));
                    arr_14 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 421368916U)), (9223372036854775807LL)))), (((arr_6 [i_1]) % (arr_6 [i_1])))));
                }
                for (int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    var_16 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((signed char)48), ((signed char)(-127 - 1))))), (arr_7 [i_1])));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_12 [i_1] [i_1] [i_2] [i_1])))) ? (((long long int) arr_17 [(unsigned short)5] [i_2])) : (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_4] [i_1] = ((/* implicit */unsigned long long int) min(((~(((arr_0 [i_4 - 1]) ^ (((/* implicit */int) var_8)))))), (((/* implicit */int) ((short) var_0)))));
                        var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_19 [i_4 - 1] [i_1])))) ? (((int) arr_8 [i_1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-75))))))), (min((((((/* implicit */_Bool) 2611309052983969613ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) : (-9223372036854775807LL))), (((/* implicit */long long int) ((unsigned int) arr_7 [i_1])))))));
                    }
                }
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - ((+((-9223372036854775807LL - 1LL))))));
                    arr_23 [i_6] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (~(max((((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_6])), (421368908U))))));
                }
            }
        } 
    } 
}
