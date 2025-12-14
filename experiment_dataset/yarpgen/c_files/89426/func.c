/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89426
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
    var_20 &= ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((arr_2 [i_1 - 3] [i_1 - 2] [i_1 + 1]), (var_10)))) == (((unsigned long long int) arr_2 [i_1 + 1] [(_Bool)1] [i_1 - 1]))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_22 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) arr_2 [i_1 + 2] [i_1] [i_2])) : (-3024851761096450969LL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)4095)))) : (((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775807LL))) + (11LL)))));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_6 [i_1 + 2] [i_1 - 3] [i_1 + 1])))) ? (((arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) var_17))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) 2887789888592273953LL)) : (arr_6 [(_Bool)0] [3U] [i_0]))) | (var_12))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(7742651661204796310LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_15)))))))));
                }
                arr_8 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2147483633)) ? (18180237877406496844ULL) : (arr_3 [i_1]))) - (18180237877406496844ULL)));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((unsigned short) 3764791871539223465LL));
}
