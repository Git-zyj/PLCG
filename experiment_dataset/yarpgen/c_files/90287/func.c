/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90287
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
    var_20 = var_8;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) == (((((/* implicit */_Bool) arr_3 [(unsigned short)2] [i_1 + 3])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)117)), (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [i_3])) < (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 4008546482724370868LL)))) : ((~(var_17)))))) ? (((var_3) + (((/* implicit */unsigned long long int) var_10)))) : (var_1)));
                            arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_1 - 1])), (max((4008546482724370868LL), (((/* implicit */long long int) var_14))))))) ? (((/* implicit */unsigned long long int) 4008546482724370868LL)) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) % (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_4 [i_1 + 2]) : (((/* implicit */int) (unsigned char)0)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned int) max((((((/* implicit */long long int) min((((/* implicit */unsigned int) var_15)), (3492164445U)))) ^ (-4008546482724370868LL))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) -8800145101029071897LL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (max((4008546482724370868LL), (((/* implicit */long long int) var_9))))))));
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_5))));
    var_25 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_15)))))))) & (var_0));
}
