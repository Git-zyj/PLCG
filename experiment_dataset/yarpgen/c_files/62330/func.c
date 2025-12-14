/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62330
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))) == (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_17)) + (2147483647))) << (((var_19) - (499383673U)))))) : (((long long int) arr_9 [i_0] [(_Bool)1] [i_2] [(_Bool)1]))))));
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [18LL] [i_1]);
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (4044872931U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-28))))) && (((/* implicit */_Bool) max((var_1), (var_9)))))))) : (1760775223U)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_7);
                        arr_13 [i_0] [9U] [i_0] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -8121437344723016767LL))))) >> (((((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 4] [i_3 - 3] [i_3])) + (116)))));
                        var_23 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned char)71)) || (((/* implicit */_Bool) -1382680572))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 3; i_4 < 22; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4503505137811092589ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) == (((unsigned int) var_11))));
                        arr_18 [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) arr_16 [i_2] [i_1] [i_2] [i_0] [i_0] [i_4])) : (7U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) <= (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_9 [i_0] [17ULL] [i_2] [i_4])) ? (((/* implicit */int) arr_6 [i_1] [7U] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_4] [i_0] [i_0]))))));
                        arr_19 [14ULL] [i_4] [i_4] [i_4 - 2] [i_1] [i_4 - 3] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) % (var_13)));
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0]))));
                    }
                    var_25 ^= ((/* implicit */long long int) max((max((3623415570226073901ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_2])), (arr_14 [i_2] [i_1] [i_2] [i_2])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0])))) ? (((unsigned int) arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */int) var_7);
}
