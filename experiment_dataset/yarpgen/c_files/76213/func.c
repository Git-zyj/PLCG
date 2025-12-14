/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76213
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */short) arr_15 [(unsigned char)20] [i_1] [i_2] [i_2] [i_4])), (var_10)))) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_10 [i_0] [i_2])))))), (((/* implicit */int) max((((/* implicit */unsigned short) (!(arr_13 [i_2] [i_2] [i_3] [i_3])))), ((unsigned short)49152))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
                            }
                        } 
                    } 
                    var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 24)) ? (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2 + 1] [i_1] [i_2]))) : (var_9))) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1]))))) : (((/* implicit */long long int) max((((/* implicit */int) var_18)), (((((/* implicit */_Bool) var_13)) ? (-24) : (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 8; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4832939334714046210LL)) ? (5036480518821213464LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5 + 1] [i_5] [i_5])))))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_5]))) : (((/* implicit */int) var_14))))) ? (max((((/* implicit */int) max((arr_11 [i_5] [i_5] [i_6]), (((/* implicit */signed char) arr_15 [i_5] [5] [i_5 - 2] [i_5] [i_5]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) (_Bool)0)))))) : (((int) var_6))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_5])))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_7 [i_5 + 2] [i_6] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)106)))))));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 7; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_0);
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+((+(var_0))))))));
                            var_27 = ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5 + 1] [i_7 - 2] [i_7 + 1] [i_5])) ? ((-(var_15))) : (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 ^= max(((~(((((/* implicit */_Bool) var_15)) ? (5036480518821213486LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46))))))), (((/* implicit */long long int) var_18)));
    var_29 *= ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) -121201184761960162LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57647)))))))));
}
