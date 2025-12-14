/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80728
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
    var_20 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_14))))), ((-(((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_21 = min((var_0), (((/* implicit */unsigned short) var_17)));
                arr_5 [(signed char)10] [(signed char)10] [(signed char)10] |= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < ((-(((/* implicit */int) (signed char)-125)))))))) > (var_15));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) (_Bool)1)))));
        arr_9 [i_2] [i_2] |= ((/* implicit */_Bool) arr_8 [i_2] [i_2]);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_11 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_11 [i_3])));
        var_23 = ((/* implicit */long long int) var_0);
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) | (((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */unsigned char) var_1);
        var_26 = ((/* implicit */unsigned short) (~(8728069529790640094LL)));
    }
}
