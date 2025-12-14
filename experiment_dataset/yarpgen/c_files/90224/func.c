/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90224
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) >= (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (2488615643U) : (1806351652U))))))));
                arr_7 [i_1] &= ((/* implicit */_Bool) 2488615643U);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 2; i_2 < 9; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_4 [(_Bool)1] [i_2] [i_2 + 1]), (arr_4 [9U] [9U] [i_2 - 1])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1806351636U)))))) >= (18446744073709551615ULL))))));
        var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) (-(arr_2 [i_2] [i_2]))))))));
        var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((8061699310621977437LL), (((/* implicit */long long int) arr_1 [11LL])))))))));
    }
    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */int) -26LL);
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [i_3] [(_Bool)1] [i_3] [(_Bool)1] [i_3] [(unsigned char)4] = ((/* implicit */long long int) var_17);
                        var_23 = ((/* implicit */signed char) max((((((((/* implicit */int) (signed char)-56)) + (2147483647))) << (((((/* implicit */int) var_17)) - (13))))), (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) == ((-(1806351652U))))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_3)))))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */long long int) var_7);
}
