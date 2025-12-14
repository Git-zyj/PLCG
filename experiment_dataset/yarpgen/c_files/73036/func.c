/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73036
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
    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_15)) - (((/* implicit */int) (signed char)53))))))) ? ((-(((/* implicit */int) ((short) var_4))))) : (((/* implicit */int) max((var_3), ((signed char)-121))))));
    var_17 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))))) <= (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_8))))))), ((((!(((/* implicit */_Bool) (signed char)82)))) ? (((((/* implicit */unsigned long long int) var_9)) & (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) == (-489852988)))))))));
    var_18 -= ((/* implicit */_Bool) max(((-(((/* implicit */int) var_0)))), ((-(((/* implicit */int) (unsigned short)65527))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */signed char) max(((unsigned short)8), ((unsigned short)50192)));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_20 += ((/* implicit */short) ((((/* implicit */int) arr_7 [(short)12])) == ((~((~(((/* implicit */int) arr_6 [i_0]))))))));
                    arr_8 [i_1] = ((/* implicit */long long int) min((-489852988), (((/* implicit */int) (signed char)101))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)1] [i_1]))))) ^ ((-(((/* implicit */int) arr_0 [i_3])))));
                    arr_13 [i_0] [i_1] [i_1] [i_3 - 1] = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)15))))));
                    arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_0)) - (9298))))))));
                    arr_15 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) -1LL);
                }
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-102)) + (2147483647))) << ((((((+(((/* implicit */int) arr_3 [i_0])))) + (21652))) - (8)))))) ? ((~((+(var_2))))) : (-505210664)));
            }
        } 
    } 
}
