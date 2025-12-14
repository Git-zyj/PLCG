/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89886
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [(_Bool)1] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */unsigned int) -6)) > (133693440U)))) : (((((/* implicit */int) var_11)) | (((/* implicit */int) var_0))))))), ((-(((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)101)))))))));
        var_12 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)101))) / (5412559472035233995LL)))) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-47)))))))) : (max((((/* implicit */int) (signed char)104)), (var_3)))));
    }
    for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_7))))))) > (((((/* implicit */_Bool) 5412559472035233995LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_4)) - (37968)))))) : (((unsigned long long int) (_Bool)1))))));
        arr_6 [i_1] [i_1 - 2] = ((/* implicit */long long int) (-(((int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) 2147483647)) : (var_5))))));
        var_14 ^= ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_11 [i_2 - 1] &= ((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))));
                    arr_12 [(unsigned char)21] [(_Bool)1] [(unsigned short)21] = ((/* implicit */_Bool) max((-2147483647), (((((((/* implicit */int) var_4)) & (((/* implicit */int) var_9)))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65509)))) - (189)))))));
                    var_15 ^= ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) -5412559472035233995LL)) ? (var_8) : (((/* implicit */int) var_11)))) < (((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) (signed char)-118)))))))) < (((/* implicit */int) ((-4925681633370055506LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((unsigned int) 2147483647)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-63)) : (-11))))))) ? (-4099574281600308624LL) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (-11))), (min((((/* implicit */int) var_7)), (var_3))))))));
                    var_17 = ((/* implicit */signed char) max(((~(min((5412559472035233976LL), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -4925681633370055499LL)) ? (-2147483647) : (-1670648746))) + ((-(var_8))))))));
                }
            } 
        } 
        arr_13 [i_1] |= ((/* implicit */unsigned short) ((min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11)))), (((((/* implicit */int) var_10)) / (((/* implicit */int) var_6)))))) * (((1670648746) / (((/* implicit */int) var_10))))));
    }
    var_18 = ((/* implicit */unsigned short) var_11);
}
