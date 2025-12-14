/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86305
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
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) min((var_19), (max((((/* implicit */int) var_11)), ((+(((/* implicit */int) (unsigned char)184))))))));
        var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) var_8)), (min((((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) (unsigned char)154))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_3 [i_0 + 2])))) ? (max((((/* implicit */long long int) var_7)), (var_15))) : (min((var_18), (((/* implicit */long long int) var_6))))));
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_0 [i_1 - 2]), (((/* implicit */signed char) var_4)))))));
        }
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) (_Bool)0)))))))), (max((((/* implicit */int) max(((signed char)24), (((/* implicit */signed char) var_5))))), ((~(((/* implicit */int) var_3)))))))))));
        var_24 ^= min((((/* implicit */long long int) max((((var_5) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_5)))))))), (max(((~(var_1))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_5)), (var_3)))))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                var_25 -= ((/* implicit */unsigned char) arr_7 [i_4 + 1] [i_2 + 1]);
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((_Bool) var_17)))));
            }
            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) * ((+(((/* implicit */int) arr_9 [i_2] [i_3]))))));
            var_28 = ((/* implicit */signed char) var_14);
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12437215061216069702ULL)) && (var_0)));
        }
        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_2])) >= (((/* implicit */int) var_7))));
            var_31 = (~(((/* implicit */int) var_3)));
        }
        var_32 = ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)));
    }
    var_33 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) < (((/* implicit */int) ((var_13) >= (var_18))))));
    var_34 = ((/* implicit */unsigned char) -9223372036854775803LL);
    var_35 = ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_1)));
}
