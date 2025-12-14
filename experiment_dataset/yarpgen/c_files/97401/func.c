/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97401
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((7393644099720726204ULL) & (11053099973988825411ULL)))) ? (min((((7431994681427845349ULL) * (((/* implicit */unsigned long long int) -4224258800936875920LL)))), (((/* implicit */unsigned long long int) (unsigned char)63)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    var_11 = ((/* implicit */short) var_5);
    var_12 ^= ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */short) min((((long long int) arr_6 [i_0 - 2] [i_0] [i_0 + 1])), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_11 [(short)13] [i_1] [i_2] [i_3] [i_3] [i_2] [i_2]);
                                var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_2] [i_0])))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_4] [i_1] [i_2] = ((((/* implicit */_Bool) (~(7393644099720726204ULL)))) && (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_8 [i_2])))), (((((/* implicit */int) arr_4 [i_4] [i_0] [i_0])) << (((((/* implicit */int) arr_7 [(unsigned char)5] [i_2] [i_2] [i_2])) - (39391)))))))));
                                var_15 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3] [i_3] [i_3])) >> (((min((((((/* implicit */_Bool) 7431994681427845349ULL)) ? (11014749392281706271ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_4]))))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) arr_8 [i_0]))))))) - (64071ULL)))));
                            }
                        } 
                    } 
                    var_16 = ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)32)))) | (((/* implicit */int) arr_0 [(short)14] [i_1]))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) | (arr_11 [i_0] [i_1] [(unsigned short)2] [i_1] [i_0 - 2] [i_1] [i_2]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) & (var_6)))));
                }
            } 
        } 
    } 
}
