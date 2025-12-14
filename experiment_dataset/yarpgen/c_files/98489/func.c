/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98489
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (max((var_11), (((/* implicit */unsigned short) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [(_Bool)0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_0 [i_0 + 2] [i_1 + 1]))));
                    arr_9 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [i_1] [i_2]))));
                }
                var_17 = ((/* implicit */unsigned short) (+(max((-6371819177108999178LL), ((+(var_12)))))));
                /* LoopSeq 2 */
                for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    arr_13 [(unsigned short)5] [i_1] [7U] = ((/* implicit */long long int) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_0 [i_3 + 1] [i_1 + 1]))))) << (((((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_3 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_3 + 1] [i_1 + 1])))) - (99)))));
                    var_18 = ((_Bool) ((signed char) arr_10 [i_3 + 1] [i_1] [i_3 + 1]));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_19 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_3 [i_0 + 1]))))) : (var_8));
                    var_20 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                    var_21 = (+(((((((/* implicit */_Bool) (signed char)-73)) && (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned char)7]))))));
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2]))))) ? (((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
                var_22 = ((/* implicit */signed char) arr_15 [i_0]);
                var_23 = ((/* implicit */long long int) ((arr_12 [i_1]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)164))))) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_1 + 1] [i_1])) : (((/* implicit */int) var_0)))))));
            }
        } 
    } 
}
