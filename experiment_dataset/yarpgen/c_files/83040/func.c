/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83040
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), (max((((/* implicit */long long int) arr_6 [i_0 - 2])), (((long long int) var_7))))));
                arr_8 [i_1] = (+(((unsigned int) var_3)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                            {
                                arr_15 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_16 [i_1] = ((var_7) | (((/* implicit */int) (signed char)-1)));
                            }
                            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                arr_20 [i_0] [i_0] [10U] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (signed char)119))))))));
                                arr_21 [(signed char)12] [i_2] [i_1] [(_Bool)1] [i_5] [i_1 - 1] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)12)) >> (((arr_6 [i_1]) - (3663446653U))))), (((/* implicit */int) max(((unsigned short)50253), ((unsigned short)64933))))));
                                var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51070))) | (arr_12 [5LL] [i_2] [i_3] [i_3])))))), (((/* implicit */unsigned long long int) (+(arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2]))))));
                            }
                            for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                            {
                                var_13 *= ((/* implicit */signed char) max((0), (((/* implicit */int) (signed char)-1))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_9))));
                            }
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1)))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */long long int) ((((3765525384U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))) + (((/* implicit */unsigned int) (-(max((((/* implicit */int) (signed char)-112)), (var_7))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_17), (var_6)));
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)154))));
}
