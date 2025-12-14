/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93041
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
    var_18 = ((-3421667740793965757LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)6))));
    var_19 = ((/* implicit */unsigned long long int) ((signed char) (-(var_4))));
    var_20 = ((/* implicit */unsigned long long int) (~(-3421667740793965757LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((long long int) 9ULL));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (11278251004500016141ULL) : (((/* implicit */unsigned long long int) var_9))));
        var_23 = ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_8 [i_0] [i_1] = var_4;
            arr_9 [i_0] [(unsigned char)7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8078369787778697861LL)))))) : (((var_1) << (((var_16) + (8599952883610508417LL)))))));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8250198497205577154LL))));
            var_25 = -651272994889573862LL;
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_16 [i_0] [i_2] [i_3] = ((/* implicit */signed char) (+(var_12)));
                arr_17 [i_0] = ((/* implicit */long long int) var_0);
                var_26 += 18446744073709551607ULL;
                arr_18 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))))))) || (((/* implicit */_Bool) -6786534239492593184LL))));
            }
            var_27 = ((long long int) (unsigned char)40);
        }
    }
}
