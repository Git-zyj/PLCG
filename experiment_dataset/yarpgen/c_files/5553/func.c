/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5553
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) ^ (((/* implicit */int) (short)19164))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [(signed char)8] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) ^ (((/* implicit */int) arr_7 [i_2] [i_2] [i_0]))))));
                    var_14 = ((unsigned char) (unsigned char)219);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) var_1);
                        arr_13 [(signed char)9] [i_3] [i_2] [i_2] [(unsigned char)7] [(unsigned char)3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((long long int) 8285012235386946480LL))))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) (!(((((/* implicit */_Bool) -2315656497065418142LL)) || (((/* implicit */_Bool) (unsigned char)34)))))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((_Bool) ((long long int) var_9)));
}
