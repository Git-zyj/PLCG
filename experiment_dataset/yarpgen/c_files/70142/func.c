/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70142
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) 6981400398667516737LL)) ? (((/* implicit */int) var_10)) : (var_9))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (6981400398667516737LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) % (((/* implicit */int) (signed char)-71))));
                            var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_3))));
                        }
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (unsigned char)246))));
                        var_16 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) (-(-4680590222663104706LL)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18446744073709551603ULL)))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) var_6));
        var_18 = ((/* implicit */unsigned short) var_9);
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((-6981400398667516739LL), (((/* implicit */long long int) var_1)))) < (((/* implicit */long long int) ((/* implicit */int) ((var_3) && (var_10))))))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) var_3);
        var_21 = ((/* implicit */_Bool) ((12066111316670696821ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 1) 
        {
            arr_17 [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) 279741950U));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(158459211U))))));
                var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)205))));
            }
        }
    }
    var_24 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
}
