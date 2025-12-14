/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83530
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 - 1])) | (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1]))))) + (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [(signed char)2] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (((unsigned long long int) arr_1 [(unsigned short)3]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2] [i_1] [14U] [i_1] [i_0] = ((/* implicit */signed char) (~(3174363421771115608ULL)));
                            arr_11 [i_0] [20] [20] [10U] [3] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1 - 1] [i_0] [5ULL])) ? (arr_9 [i_1 - 1] [i_2] [i_1 - 1] [i_0] [19ULL]) : (arr_5 [11ULL] [(_Bool)1] [11ULL] [6LL])))));
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (((!(((_Bool) arr_3 [i_1] [i_3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [(unsigned short)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (arr_5 [(_Bool)1] [12ULL] [i_2] [i_3])))) ? (((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [(_Bool)1])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [16LL]))))) ? (((/* implicit */int) arr_4 [i_3])) : ((~(((/* implicit */int) arr_6 [i_2] [13U] [i_2] [15ULL])))))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) arr_6 [8ULL] [i_1 - 1] [i_0] [8ULL]);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)114))));
}
